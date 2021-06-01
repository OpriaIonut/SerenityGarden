using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;

namespace SerenityGarden
{
    [System.Serializable]
    public enum FireDemonActions
    {
        None,
        IdleStretch,
        TurretDestroyer,
        Sweep,
        TimeBasedAttack
    }

    public class FireDemon : BossBase, IPunObservable
    {
        [Header("Own properties")]
        public float moneyPerHp = 1.0f;
        public float maxDamageMultiplier = 1.5f;
        public float rotationSpeed = 1.0f;


        [Header("Attack properties")]
        public float scaleIncreaseSpeed = 0.01f;
        public float sweepDamage = 25.0f;
        //It will pick a random value and check to see in what range the picked value is.
        //If it is between 0-elem0 it will choose state 1. If it is between elem0-elem1 it will choose state 2. etc.
        public float[] decisionBarriers;

        [Header("TurretDestroyer")]
        public int turretDestroyerCount = 5;
        public float turretDestroyerMaxScale = 1.0f;
        public float turretDestroyerDamage = 1000.0f;

        [Header("Time based attack")]
        public float timeBasedAttackMaxScale = 10.0f;
        public float timeBasedAttackDuration = 30.0f;
        public float timeBasedAttackInterruptAmount = 0.1f; //How much health % need to be taken in order to stop the attack
        public float timeBasedAttackDamage = 100.0f;
        public float stunTime = 10.0f;

        [Header("References")]
        public Transform meteoriteSpawn;
        public GameObject meteoritePrefab;
        public Transform sweepRaycastOrigin;
        public RectTransform stunBar;
        public GameObject timerParent;
        public Image timerBar;
        public TextMeshProUGUI timerText;
        public GameObject stunEffect;
        //public ParticleSystem passiveEffect;

        private float currentDamageMultiplier;
        private int lastHpDiffCheck = 0;
        private float decisionBarrierTuretDestroyer;
        private float decisionBarrierSweep;

        //If this is set it the next decision will be this one, otherwise, it will pick it randomly
        private FireDemonActions forceNextDecision;
        private FireDemonActions currentAction;
        public FireDemonActions CurrentAction { get { return currentAction; } }

        private Quaternion defaultRotation;
        private PlayerBase timeBasedAttackTarget;
        private TurretBuildManager buildManager;

        private bool resetRotation;

        private List<TurretBase> sweepHitObj = new List<TurretBase>();

        private float rotationAmount;
        private int forcedAttackIndex;  //based on this we will do the time based attack whenever the boss drops to a certain ammount of health
        private bool rotateTowardsTarget = false;

        private bool netSendEvent;

        //When instantiating through network, the owner will instantiate the meteor so he will have it's reference.
        //And on the client, when the meteor gets instantiated, he will receive this reference so that we can shoot it when needed.
        private Meteorite netMeteorInstance;    
        public Meteorite NetMeteorInstance { get { return netMeteorInstance; } set { netMeteorInstance = value; } }
        private TurretBase netMeteorTarget;
        public TurretBase NetMeteorTarget { get { return netMeteorTarget; } set { netMeteorTarget = value; } }

        private void Start()
        {
            health = maxHealth;
            SetHealthbar(1.0f);
            buildManager = TurretBuildManager.instance;

            nextDecisionTime = Time.time + timeBetweenDecisions;
            defaultRotation = transform.rotation;

            decisionBarrierTuretDestroyer = decisionBarriers[0];
            decisionBarrierSweep = decisionBarriers[1];
        }

        private void Update()
        {
            if (isDead || !photonView.IsMine)
                return;

            if (Time.time > nextDecisionTime)
                MakeDecision();

            if(currentAction == FireDemonActions.TimeBasedAttack && timeBasedAttackTarget != null && rotateTowardsTarget)
            {
                float diff = transform.position.x - timeBasedAttackTarget.transform.position.x;
                if ((diff > 0 && rotationAmount > 0) || (diff < 0 && rotationAmount < 0))
                {
                    float angle = rotationAmount * rotationSpeed * Time.deltaTime;
                    rotationAmount -= angle;
                    transform.RotateAround(transform.position, Vector3.up, angle);
                }
            }
            if(resetRotation)
            {
                transform.rotation = Quaternion.Lerp(transform.rotation, defaultRotation, Time.deltaTime);
                if (transform.rotation == defaultRotation)
                    resetRotation = false;
            }
        }

        public override void TakeDamage(float ammount)
        {
            base.TakeDamage(ammount);

            currentDamageMultiplier = 1.0f + (maxDamageMultiplier - 1.0f) * (maxHealth - health) / maxHealth;
            int hpDiff = (int)(maxHealth - health);
            if(hpDiff > lastHpDiffCheck)
            {
                int aux = hpDiff - lastHpDiffCheck;
                buildManager.Money += aux;
                lastHpDiffCheck = hpDiff;
            }

            //var mainModule = passiveEffect.main;
            //mainModule.startLifetime = 1.0f * (maxHealth - health) / maxHealth;
            //var emissionModule = passiveEffect.emission;
            //emissionModule.rateOverTime = 300.0f * (maxHealth - health) / maxHealth;

            if (forcedAttackIndex == 0 && health < maxHealth * 2 / 3)
            {
                forceNextDecision = FireDemonActions.TimeBasedAttack;
                forcedAttackIndex++;
            }
            if(forcedAttackIndex == 1 && health < maxHealth / 3)
            {
                forceNextDecision = FireDemonActions.TimeBasedAttack;
                forcedAttackIndex++;
            }

            decisionBarrierTuretDestroyer = 0.1f + (decisionBarriers[0] - 0.1f) * (1.0f - (maxHealth - health) / maxHealth);
            decisionBarrierSweep = 0.6f + (decisionBarriers[1] - 0.6f) * (1.0f - (maxHealth - health) / maxHealth);
        }

        private void MakeDecision()
        {
            nextDecisionTime = Time.time + timeBetweenDecisions;
            if (forceNextDecision != FireDemonActions.None)
            {
                currentAction = forceNextDecision;
                forceNextDecision = FireDemonActions.None;
            }
            else
            {
                float randFact = Random.Range(0.0f, 1.0f);
                if (randFact <= decisionBarrierTuretDestroyer)
                    currentAction = FireDemonActions.IdleStretch;
                else if(randFact <= decisionBarrierSweep)
                    currentAction = FireDemonActions.TurretDestroyer;
                else
                    currentAction = FireDemonActions.Sweep;
            }
            StartAction();
            netSendEvent = true;
        }

        private void StartAction()
        {
            switch (currentAction)
            {
                case FireDemonActions.None:
                    break;
                case FireDemonActions.IdleStretch:
                    StartCoroutine("Action_IdleStretch");
                    break;
                case FireDemonActions.TurretDestroyer:
                    StartCoroutine(Action_TurretDestroyer());
                    break;
                case FireDemonActions.Sweep:
                    StartCoroutine("Action_SweepAttack");
                    break;
                case FireDemonActions.TimeBasedAttack:
                    StartCoroutine("Action_TimeBasedAttack");
                    break;
            }
        }

        private IEnumerator Action_IdleStretch()
        {
            anim.SetTrigger("IdleStretch");
            nextDecisionTime += 3.5f;
            yield return new WaitForSeconds(3.5f);
            currentAction = FireDemonActions.None;
            nextDecisionTime = Time.time + timeBetweenDecisions;
        }

        private IEnumerator Action_SweepAttack()
        {
            anim.SetTrigger("Sweep");
            sweepHitObj.Clear();
            nextDecisionTime += 6.5f;
            yield return new WaitForSeconds(6.5f);
            currentAction = FireDemonActions.None;
            nextDecisionTime = Time.time + timeBetweenDecisions;
        }

        private IEnumerator Action_TurretDestroyer()
        {
            TurretBase[] turrets = FindObjectsOfType<TurretBase>();

            List<TurretBase> turretList = new List<TurretBase>();
            for (int index = 0; index < turrets.Length; index++)
            {
                turretList.Add(turrets[index]);
            }

            anim.SetTrigger("TurretDestroyerBegin");
            nextDecisionTime += 10.0f;
            yield return new WaitForSeconds(anim.GetCurrentAnimatorClipInfo(0).Length);

            for(int index = 0; index < turretDestroyerCount; index++)
            {
                TurretBase target = null;
                while (target == null)
                {
                    int turretIndex = Random.Range(0, turretList.Count);
                    TurretBase aux = turretList[turretIndex];
                    if (aux == null)    //Turret was destroyed
                        turretList.RemoveAt(turretIndex);
                    else if (aux.turretType != TurretType.PlayerBase)   //Check to not pick the player base
                        target = aux;
                    else if (turretList.Count == PhotonNetwork.CurrentRoom.PlayerCount)   //Unless it's the only turret available
                        target = aux;
                }

                Transform meteorite = null;
                float localScale = 0.01f;
                if (photonView.IsMine)
                {
                    object[] meteorInitData = new object[1];
                    meteorInitData[0] = target.photonView.ViewID;

                    meteorite = InstantiationManager.instance.InstantiateWithCheck(meteoritePrefab, meteoriteSpawn.position, Quaternion.identity, PhotonObj.Meteorite, meteorInitData).transform;
                }

                while (localScale < turretDestroyerMaxScale)
                {
                    localScale += scaleIncreaseSpeed;
                    if (photonView.IsMine)
                        meteorite.localScale = Vector3.one * localScale;
                    yield return new WaitForSeconds(0.01f);
                }

                if (photonView.IsMine)
                {
                    Meteorite script = meteorite.GetComponent<Meteorite>();
                    script.SetTarget(target, turretDestroyerDamage * currentDamageMultiplier, false);
                }
                else
                    NetMeteorInstance.SetTarget(netMeteorTarget, turretDestroyerDamage * currentDamageMultiplier, false);
            }

            anim.SetTrigger("TurretDestroyerEnd");
            nextDecisionTime = Time.time + timeBetweenDecisions;
        }


        private IEnumerator Action_TimeBasedAttack()
        {
            PlayerBase[] players = FindObjectsOfType<PlayerBase>();
            timeBasedAttackTarget = players[Random.Range(0, players.Length)];

            rotationAmount = -90.0f;
            float diff = transform.position.x - timeBasedAttackTarget.transform.position.x;
            if (diff > 0)
                rotationAmount = 90.0f;
            rotateTowardsTarget = true;

            nextDecisionTime += 1.0f;
            yield return new WaitForSeconds(1.0f);
            anim.SetTrigger("TimeBasedAttackStart");

            Meteorite meteor = null;
            if (photonView.IsMine)
            {
                object[] meteorInitData = new object[1];
                meteorInitData[0] = timeBasedAttackTarget.photonView.ViewID;


                meteor = InstantiationManager.instance.InstantiateWithCheck(meteoritePrefab, meteoriteSpawn.position, Quaternion.identity, PhotonObj.Meteorite, meteorInitData).GetComponent<Meteorite>();
                meteor.speed *= 0.1f;
            }
            float scaleFact = (timeBasedAttackMaxScale - 0.01f) / timeBasedAttackDuration * 0.05f;

            nextDecisionTime += timeBasedAttackDuration;
            float endTime = Time.time + timeBasedAttackDuration;
            float stunHpLimit = health - maxHealth * timeBasedAttackInterruptAmount;

            stunBar.gameObject.SetActive(true);
            stunBar.anchoredPosition = new Vector2((stunHpLimit / maxHealth) * healthbar.rectTransform.rect.width, 0.0f);

            timerParent.SetActive(true);
            timerBar.fillAmount = 1.0f;
            timerText.text = ((int)timeBasedAttackDuration).ToString();

            bool cond = false;
            while(Time.time < endTime)
            {
                yield return new WaitForSeconds(0.05f);
                timerBar.fillAmount = (endTime - Time.time) - Mathf.Floor(endTime - Time.time);
                timerText.text = ((int)(endTime - Time.time)).ToString();

                if (photonView.IsMine)
                    meteor.transform.localScale += Vector3.one * scaleFact;
                if(health <= stunHpLimit)
                {
                    anim.SetBool("Stun", true);
                    cond = true;
                    stunEffect.SetActive(true);
                    stunBar.gameObject.SetActive(false);
                    timerParent.SetActive(false);

                    if (photonView.IsMine)
                        PhotonNetwork.Destroy(meteor.gameObject);
                    currentAction = FireDemonActions.None;

                    nextDecisionTime = Time.time + timeBetweenDecisions + stunTime;
                    yield return new WaitForSeconds(stunTime);
                    anim.SetBool("Stun", false);
                    stunEffect.SetActive(false);
                    break;
                }
            }
            if (!cond)
            {
                nextDecisionTime = Time.time + timeBetweenDecisions * 2;
                currentAction = FireDemonActions.None;
                anim.SetTrigger("TimeBasedAttackEnd");
                stunBar.gameObject.SetActive(false);
                timerParent.SetActive(false);

                float animTime = 5.0f;
                yield return new WaitForSeconds(animTime / 4);
                if (photonView.IsMine)
                    meteor.SetTarget(timeBasedAttackTarget, timeBasedAttackDamage * currentDamageMultiplier, true);
                else
                    NetMeteorInstance.SetTarget(netMeteorTarget, timeBasedAttackDamage * currentDamageMultiplier, true);
                yield return new WaitForSeconds(animTime * 2 / 3);
            }
            resetRotation = true;
            rotateTowardsTarget = false;
        }

        private void OnTriggerEnter(Collider other)
        {
            if(currentAction == FireDemonActions.Sweep)
            {
                TurretBase turret = other.transform.root.gameObject.GetComponent<TurretBase>();
                if(turret != null)
                {
                    if (sweepHitObj.Contains(turret))
                        return;
                    sweepHitObj.Add(turret);

                    float damage = sweepDamage * currentDamageMultiplier;
                    Vector3 dir = (turret.transform.position + Vector3.up * 0.2f) - sweepRaycastOrigin.position;
                    RaycastHit[] hits = Physics.SphereCastAll(sweepRaycastOrigin.position, 0.25f, dir);

                    foreach (RaycastHit hit in hits)
                    {
                        TurretBase script = hit.transform.root.gameObject.GetComponent<TurretBase>();
                        if (script != null && script.turretType == TurretType.ElectricFence)
                        {
                            damage /= 2;
                            break;
                        }
                    }

                    turret.Health -= damage;
                }
            }
        }

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if(stream.IsWriting)
            {
                string message = "";
                if(netSendEvent)
                {
                    switch (currentAction)
                    {
                        case FireDemonActions.None:
                            break;
                        case FireDemonActions.IdleStretch:
                            message = "IdleStretch";
                            break;
                        case FireDemonActions.TurretDestroyer:
                            message = "TurretDestroyer";
                            break;
                        case FireDemonActions.Sweep:
                            message = "Sweep";
                            break;
                        case FireDemonActions.TimeBasedAttack:
                            message = "TimeBasedAttack";
                            break;
                    }
                    netSendEvent = false;
                }
                stream.SendNext(message);
            }
            if (stream.IsReading)
            {
                string receivedMsg = stream.ReceiveNext() as string;
                if (receivedMsg == "IdleStretch")
                    currentAction = FireDemonActions.IdleStretch;
                else if (receivedMsg == "TurretDestroyer")
                    currentAction = FireDemonActions.TurretDestroyer;
                else if (receivedMsg == "Sweep")
                    currentAction = FireDemonActions.Sweep;
                else if (receivedMsg == "TimeBasedAttack")
                    currentAction = FireDemonActions.TimeBasedAttack;
                else
                    currentAction = FireDemonActions.None;
                StartAction();
            }
        }
    }
}