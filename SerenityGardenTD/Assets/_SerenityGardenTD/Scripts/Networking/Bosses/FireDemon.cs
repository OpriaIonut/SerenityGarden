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

    public class FireDemon : BossBase
    {
        [Header("Own properties")]
        public float moneyPerHp = 1.0f;
        public float maxDamageMultiplier = 1.5f;


        [Header("Attack properties")]
        public int turretDestroyerCount = 5;
        public float turretDestroyerMaxScale = 1.0f;
        public float timeBasedAttackMaxScale = 10.0f;
        public float scaleIncreaseSpeed = 0.01f;

        public float turretDestroyerDamage = 1000.0f;
        public float sweepDamage = 25.0f;
        public float timeBasedAttackDamage = 100.0f;

        //It will pick a random value and check to see in what range the picked value is.
        //If it is between 0-elem0 it will choose state 1. If it is between elem0-elem1 it will choose state 2. etc.
        public float[] decisionBarriers;

        [Header("References")]
        public Transform meteoriteSpawn;
        public GameObject meteoritePrefab;
        public Transform sweepRaycastOrigin;

        private float currentDamageMultiplier;
        private int lastHpDiffCheck = 0;

        //If this is set it the next decision will be this one, otherwise, it will pick it randomly
        private FireDemonActions forceNextDecision;
        private FireDemonActions currentAction;

        private TurretBuildManager buildManager;

        private List<TurretBase> sweepHitNames = new List<TurretBase>();

        private void Start()
        {
            health = maxHealth;
            SetHealthbar(1.0f);
            buildManager = TurretBuildManager.instance;

            nextDecisionTime = Time.time + timeBetweenDecisions;
        }

        private void Update()
        {
            if (Time.time > nextDecisionTime)
                MakeDecision();
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
        }

        private void MakeDecision()
        {
            nextDecisionTime = Time.time + timeBetweenDecisions;
            StartCoroutine("Action_TimeBasedAttack");
            if (forceNextDecision != FireDemonActions.None)
            {
                currentAction = forceNextDecision;
                forceNextDecision = FireDemonActions.None;
            }
            else
            {
                float randFact = Random.Range(0.0f, 1.0f);
                if (randFact <= decisionBarriers[0])
                {
                    currentAction = FireDemonActions.IdleStretch;
                    //Action_IdleStretch();
                }
                else if(randFact <= decisionBarriers[1])
                {
                    currentAction = FireDemonActions.TurretDestroyer;
                    //StartCoroutine(Action_TurretDestroyer());
                }
                else if(randFact <= decisionBarriers[2])
                {
                    currentAction = FireDemonActions.Sweep;
                    //Action_SweepAttack();
                }
                else
                {
                    currentAction = FireDemonActions.TimeBasedAttack;
                }
            }
        }

        private void Action_IdleStretch()
        {
            anim.SetTrigger("IdleStretch");
            nextDecisionTime += anim.GetCurrentAnimatorClipInfo(0).Length;
        }

        private void Action_SweepAttack()
        {
            anim.SetTrigger("Sweep");
            nextDecisionTime += anim.GetCurrentAnimatorClipInfo(0).Length;
            sweepHitNames.Clear();
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
                Transform meteorite = Instantiate(meteoritePrefab).transform;
                meteorite.position = meteoriteSpawn.position;

                while(meteorite.localScale.x < turretDestroyerMaxScale)
                {
                    meteorite.localScale += Vector3.one * scaleIncreaseSpeed;
                    yield return new WaitForSeconds(0.01f);
                }

                TurretBase target = null;
                while(target == null)
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

                Meteorite script = meteorite.GetComponent<Meteorite>();
                script.SetTarget(target, turretDestroyerDamage * currentDamageMultiplier);
            }

            anim.SetTrigger("TurretDestroyerEnd");
        }


        private IEnumerator Action_TimeBasedAttack()
        {
            yield return null;
        }

        private void OnTriggerEnter(Collider other)
        {
            if(currentAction == FireDemonActions.Sweep)
            {
                TurretBase turret = other.transform.root.gameObject.GetComponent<TurretBase>();
                if(turret != null)
                {
                    if (sweepHitNames.Contains(turret))
                        return;
                    sweepHitNames.Add(turret);

                    float damage = sweepDamage * currentDamageMultiplier;
                    Vector3 dir = (turret.transform.position + Vector3.up * 0.2f) - sweepRaycastOrigin.position;
                    RaycastHit[] hits = Physics.SphereCastAll(sweepRaycastOrigin.position, 0.25f, dir);

                    Debug.DrawLine(sweepRaycastOrigin.position, dir, Color.green);

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
    }
}