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
        public float maxDamageMultiplier = 1.5f;
        public float rotationSpeed = 1.0f;


        [Header("Attack properties")]
        public float scaleIncreaseSpeed = 0.01f;
        //It will pick a random value and check to see in what range the picked value is.
        //If it is between 0-elem0 it will choose state 1. If it is between elem0-elem1 it will choose state 2. etc.
        public float[] decisionBarriers;

        [Header("TurretDestroyer")]
        public float turretDestroyerMaxScale = 1.0f;

        [Header("Time based attack")]
        public float timeBasedAttackMaxScale = 10.0f;
        public float timeBasedAttackDuration = 30.0f;
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
        private int netTargetId;

        //When instantiating through network, the owner will instantiate the meteor so he will have it's reference.
        //And on the client, when the meteor gets instantiated, he will receive this reference so that we can shoot it when needed.
        private Meteorite netMeteorInstance;    
        public Meteorite NetMeteorInstance { get { return netMeteorInstance; } set { netMeteorInstance = value; } }
        private TurretBase netMeteorTarget;
        public TurretBase NetMeteorTarget { get { return netMeteorTarget; } set { netMeteorTarget = value; } }

        private GamePauseManager pauseManager;
        private float previousAnimSpeed = 0;

        private bool netSendMeteorTarget = false;
        private bool netReceivedHealth = false;


        private void Start()
        {
            bossStatus = SceneDataRetainer.instance.SelectedBossDifficulty;
            health = bossStatus.maxHealth;
            SetHealthbar(1.0f);
            buildManager = TurretBuildManager.instance;

            nextDecisionTime = Time.time + bossStatus.timeBetweenDecisions;
            defaultRotation = transform.rotation;

            decisionBarrierTuretDestroyer = decisionBarriers[0];
            decisionBarrierSweep = decisionBarriers[1];

            currentDamageMultiplier = 1.0f + (maxDamageMultiplier - 1.0f) * (bossStatus.maxHealth - health) / bossStatus.maxHealth;

            pauseManager = GamePauseManager.instance;
            pauseManager.AddUnpauseEvent(OnResumeGame);
            pauseManager.AddPauseEvent(OnPauseGame);
        }

        private void Update()
        {
            if (isDead || pauseManager.GamePaused)
                return;

            if (photonView.IsMine && (Time.time > nextDecisionTime || (currentAction == FireDemonActions.None && forceNextDecision != FireDemonActions.None)))
                MakeDecision();

            if(currentAction == FireDemonActions.TimeBasedAttack)
            {
                if (photonView.IsMine && timeBasedAttackTarget != null)
                {
                    var lookPos = timeBasedAttackTarget.transform.position - transform.position;
                    lookPos.y = 0;
                    var rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(lookPos), Time.deltaTime * rotationSpeed); 
                    transform.rotation = rotation;
                }
                if(!photonView.IsMine && NetMeteorTarget != null)
                {
                    var lookPos = NetMeteorTarget.transform.position - transform.position;
                    lookPos.y = 0;
                    var rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(lookPos), Time.deltaTime * rotationSpeed);
                    transform.rotation = rotation;
                }
            }
            if(resetRotation)
            {
                transform.rotation = Quaternion.Lerp(transform.rotation, defaultRotation, Time.deltaTime);
                if (transform.rotation == defaultRotation)
                    resetRotation = false;
            }
        }

        private void OnPauseGame()
        {
            previousAnimSpeed = anim.speed;
            anim.speed = 0;
        }

        private void OnResumeGame()
        {
            nextDecisionTime = Time.time + (nextDecisionTime - pauseManager.PauseStartTime);
            anim.speed = previousAnimSpeed;
        }

        public override void TakeDamage(float ammount)
        {
            if (photonView.IsMine == false && netReceivedHealth == false)
                return;
            netReceivedHealth = false;

            base.TakeDamage(ammount);

            currentDamageMultiplier = 1.0f + (maxDamageMultiplier - 1.0f) * (bossStatus.maxHealth - health) / bossStatus.maxHealth;
            int hpDiff = (int)(bossStatus.maxHealth - health);
            if(hpDiff > lastHpDiffCheck)
            {
                int aux = hpDiff - lastHpDiffCheck;
                buildManager.Money += aux;
                lastHpDiffCheck = hpDiff;
            }

            if (forcedAttackIndex == 0 && health < bossStatus.maxHealth * 2 / 3)
            {
                forceNextDecision = FireDemonActions.TimeBasedAttack;
                forcedAttackIndex++;
            }
            if(forcedAttackIndex == 1 && health < bossStatus.maxHealth / 3)
            {
                forceNextDecision = FireDemonActions.TimeBasedAttack;
                forcedAttackIndex++;
            }

            decisionBarrierTuretDestroyer = 0.1f + (decisionBarriers[0] - 0.1f) * (1.0f - (bossStatus.maxHealth - health) / bossStatus.maxHealth);
            decisionBarrierSweep = 0.6f + (decisionBarriers[1] - 0.6f) * (1.0f - (bossStatus.maxHealth - health) / bossStatus.maxHealth);
        }

        private void MakeDecision()
        {
            nextDecisionTime = Time.time + bossStatus.timeBetweenDecisions;
            if (forceNextDecision != FireDemonActions.None)
            {
                resetRotation = false;
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
                    StopAllCoroutines();
                    StartCoroutine("Action_IdleStretch");
                    break;
                case FireDemonActions.TurretDestroyer:
                    StopAllCoroutines();
                    StartCoroutine(Action_TurretDestroyer());
                    break;
                case FireDemonActions.Sweep:
                    StopAllCoroutines();
                    StartCoroutine("Action_SweepAttack");
                    break;
                case FireDemonActions.TimeBasedAttack:
                    StopAllCoroutines();
                    StartCoroutine("Action_TimeBasedAttack");
                    break;
            }
        }

        private IEnumerator Action_IdleStretch()
        {
            anim.SetTrigger("IdleStretch");
            nextDecisionTime += 3.5f;
            float yieldStartTime = Time.time;
            yield return new WaitForSeconds(3.5f);

            while(pauseManager.GamePaused)
            {
                yield return null;
            }
            if (pauseManager.PauseStartTime - yieldStartTime > 0)
                yield return new WaitForSeconds(3.5f - (pauseManager.PauseStartTime - yieldStartTime));

            currentAction = FireDemonActions.None;
            nextDecisionTime = Time.time + bossStatus.timeBetweenDecisions;
        }

        private IEnumerator Action_SweepAttack()
        {
            anim.SetTrigger("Sweep");
            sweepHitObj.Clear();
            nextDecisionTime += 6.5f;
            float yieldStartTime = Time.time;
            yield return new WaitForSeconds(6.5f);

            while (pauseManager.GamePaused)
            {
                yield return null;
            }
            if (pauseManager.PauseStartTime - yieldStartTime > 0)
                yield return new WaitForSeconds(6.5f - (pauseManager.PauseStartTime - yieldStartTime));

            currentAction = FireDemonActions.None;
            nextDecisionTime = Time.time + bossStatus.timeBetweenDecisions;
        }

        private IEnumerator Action_TurretDestroyer()
        {
            anim.SetTrigger("TurretDestroyerBegin");
            nextDecisionTime += 50.0f;
            float yieldStartTime = Time.time;
            yield return new WaitForSeconds(2.0f);

            while (pauseManager.GamePaused)
            {
                yield return null;
            }
            if (pauseManager.PauseStartTime - yieldStartTime > 0)
                yield return new WaitForSeconds(2.0f - (pauseManager.PauseStartTime - yieldStartTime));


            for (int index = 0; index < bossStatus.turretDestroyerCount; index++)
            {
                Transform meteorite = null;
                float localScale = 0.01f;
                if (photonView.IsMine)
                {
                    meteorite = InstantiationManager.instance.InstantiateWithCheck(meteoritePrefab, meteoriteSpawn.position, Quaternion.identity, PhotonObj.Meteorite).transform;
                }

                TurretBase target = null;
                if (photonView.IsMine)
                {
                    while (localScale < turretDestroyerMaxScale)
                    {
                        localScale += scaleIncreaseSpeed;

#if UNITY_ANDROID
                        localScale += scaleIncreaseSpeed; //On android it's moving slower, so as a workaround, increase it's speed
#endif

                        if (photonView.IsMine)
                            meteorite.localScale = Vector3.one * localScale;
                        yield return new WaitForSeconds(0.01f);

                        while (pauseManager.GamePaused)
                            yield return null;
                    }

                    TurretBase[] turrets = FindObjectsOfType<TurretBase>();
                    List<TurretBase> turretList = new List<TurretBase>();
                    for (int turretIndex = 0; turretIndex < turrets.Length; turretIndex++)
                    {
                        turretList.Add(turrets[turretIndex]);
                    }
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
                    netTargetId = target.photonView.ViewID;
                    yield return new WaitForSeconds(0.25f);
                }
                else
                {
                    while (netMeteorTarget == null)
                        yield return null;
                }

                if (photonView.IsMine)
                {
                    Meteorite script = meteorite.GetComponent<Meteorite>();
                    script.SetTarget(target, bossStatus.turretDestroyerDamage * currentDamageMultiplier, false);
                }
                else
                {
                    //Debug.Log("Meteor: " + netMeteorInstance.name + " " + netMeteorInstance.photonView.ViewID + "; NetMeteorTarget: " + netMeteorTarget.name + " " + netMeteorTarget.photonView);
                    NetMeteorInstance.SetTarget(netMeteorTarget, bossStatus.turretDestroyerDamage * currentDamageMultiplier, false);
                    netMeteorTarget = null;
                }
            }

            currentAction = FireDemonActions.None;
            anim.SetTrigger("TurretDestroyerEnd");
            nextDecisionTime = Time.time + bossStatus.timeBetweenDecisions;
        }


        private IEnumerator Action_TimeBasedAttack()
        {
            if (photonView.IsMine)
            {
                PlayerBase[] players = FindObjectsOfType<PlayerBase>();
                timeBasedAttackTarget = players[Random.Range(0, players.Length)];
                netTargetId = timeBasedAttackTarget.photonView.ViewID;

                yield return new WaitForSeconds(0.1f);

                rotationAmount = -90.0f;
                float diff = transform.position.x - timeBasedAttackTarget.transform.position.x;
                if (diff > 0)
                    rotationAmount = 90.0f;
                rotateTowardsTarget = true;
            }
            else
            {
                while (NetMeteorTarget == null)
                    yield return null;

                rotationAmount = -90.0f;
                float diff = transform.position.x - NetMeteorTarget.transform.position.x;
                if (diff > 0)
                    rotationAmount = 90.0f;
                rotateTowardsTarget = true;
            }

            

            nextDecisionTime += 1.0f;
            float yieldStartTime = Time.time;
            yield return new WaitForSeconds(1.0f);

            while (pauseManager.GamePaused)
            {
                yield return null;
            }
            if (pauseManager.PauseStartTime - yieldStartTime > 0)
                yield return new WaitForSeconds(1.0f - (pauseManager.PauseStartTime - yieldStartTime));

            anim.SetTrigger("TimeBasedAttackStart");

            Meteorite meteor = null;
            if (photonView.IsMine)
            {
                meteor = InstantiationManager.instance.InstantiateWithCheck(meteoritePrefab, meteoriteSpawn.position, Quaternion.identity, PhotonObj.Meteorite).GetComponent<Meteorite>();
                meteor.speed *= 0.1f;
            }
            float scaleFact = (timeBasedAttackMaxScale - 0.01f) / timeBasedAttackDuration * 0.05f;

            nextDecisionTime += timeBasedAttackDuration;
            float endTime = Time.time + timeBasedAttackDuration;
            float stunHpLimit = health - bossStatus.maxHealth * bossStatus.timeBasedAttackInterruptAmount;

            stunBar.gameObject.SetActive(true);
            stunBar.anchoredPosition = new Vector2((stunHpLimit / bossStatus.maxHealth) * healthbar.rectTransform.rect.width, 0.0f);

            timerParent.SetActive(true);
            timerBar.fillAmount = 1.0f;
            timerText.text = ((int)timeBasedAttackDuration).ToString();

            bool cond = false;
            while(Time.time < endTime)
            {
                yield return new WaitForSeconds(0.05f);

                if (pauseManager.GamePaused)
                {
                    while (pauseManager.GamePaused)
                        yield return null;
                    endTime = Time.time + (endTime - pauseManager.PauseStartTime);
                }

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

                    nextDecisionTime = Time.time + bossStatus.timeBetweenDecisions + stunTime;
                    yieldStartTime = Time.time;
                    yield return new WaitForSeconds(stunTime);

                    while (pauseManager.GamePaused)
                    {
                        yield return null;
                    }
                    if (pauseManager.PauseStartTime - yieldStartTime > 0)
                        yield return new WaitForSeconds(stunTime - Mathf.Abs(pauseManager.PauseStartTime - yieldStartTime));

                    anim.SetBool("Stun", false);
                    stunEffect.SetActive(false);
                    break;
                }
            }
            if (!cond)
            {
                nextDecisionTime = Time.time + bossStatus.timeBetweenDecisions * 2;
                anim.SetTrigger("TimeBasedAttackEnd");
                stunBar.gameObject.SetActive(false);
                timerParent.SetActive(false);

                float animTime = 5.0f;
                yieldStartTime = Time.time;
                yield return new WaitForSeconds(animTime / 4);

                while (pauseManager.GamePaused)
                {
                    yield return null;
                }
                if (pauseManager.PauseStartTime - yieldStartTime > 0)
                    yield return new WaitForSeconds(animTime / 4 - (pauseManager.PauseStartTime - yieldStartTime));

                if (photonView.IsMine)
                {
                    meteor.SetTarget(timeBasedAttackTarget, bossStatus.timeBasedAttackDamage * currentDamageMultiplier, true);
                    timeBasedAttackTarget = null;
                }
                else
                {
                    NetMeteorInstance.SetTarget(netMeteorTarget, bossStatus.timeBasedAttackDamage * currentDamageMultiplier, true);
                    NetMeteorTarget = null;
                }
                yieldStartTime = Time.time;
                yield return new WaitForSeconds(animTime * 2 / 3);

                while (pauseManager.GamePaused)
                {
                    yield return null;
                }
                if(pauseManager.PauseStartTime - yieldStartTime > 0)
                    yield return new WaitForSeconds(animTime * 2 / 3 - (pauseManager.PauseStartTime - yieldStartTime));
            }
            currentAction = FireDemonActions.None;
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

                    float damage = bossStatus.sweepDamage * currentDamageMultiplier;
                    Vector3 dir = (turret.transform.position + Vector3.up * 0.2f) - sweepRaycastOrigin.position;
                    RaycastHit[] hits = Physics.SphereCastAll(sweepRaycastOrigin.position, 0.25f, dir);

                    foreach (RaycastHit hit in hits)
                    {
                        if (hit.transform.root.gameObject == turret.gameObject)
                            continue;

                        TurretBase script = hit.transform.root.gameObject.GetComponent<TurretBase>();
                        if (script != null && script.turretType == TurretType.ElectricFence)
                        {
                            damage /= 2;
                            break;
                        }
                    }

                    if (turret.photonView == null || turret.photonView.IsMine == true)
                        turret.Health -= damage;
                }
            }
        }

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if(stream.IsWriting)
            {
                string message = "";
                string message2 = "";
                string message3 = "" + health;
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
                if (netTargetId != -1)
                    message2 = "" + netTargetId;
                netTargetId = -1;
                stream.SendNext(message);
                stream.SendNext(message2);
                stream.SendNext(message3);
            }
            if (stream.IsReading)
            {
                string receivedMsg = stream.ReceiveNext() as string;
                string receivedMsg2 = stream.ReceiveNext() as string;
                string receivedMsg3 = stream.ReceiveNext() as string;
                
                if(receivedMsg3 != null)
                {
                    netReceivedHealth = true;
                    float receivedHealth = float.Parse(receivedMsg3);
                    TakeDamage(health - receivedHealth);
                }

                int intResult;
                if (int.TryParse(receivedMsg2, out intResult))
                {
                    TurretBase[] turrets = FindObjectsOfType<TurretBase>();
                    foreach(TurretBase item in turrets)
                    {
                        if(item.photonView.ViewID == intResult)
                        {
                            netMeteorTarget = item;
                            break;
                        }
                    }
                }
                if (receivedMsg != "")
                {
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
}