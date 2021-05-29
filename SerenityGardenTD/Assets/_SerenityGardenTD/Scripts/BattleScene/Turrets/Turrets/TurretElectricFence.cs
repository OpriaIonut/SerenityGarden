using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretElectricFence : BuildableTurret
    {
        public GameObject sparkEffect;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
        }

        private void Update()
        {
            if (!GamePauseManager.instance.GamePaused)
                BaseUpdateCalls();
        }

        public override void Attack()
        {
            if(Target != null)
            {
                HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);

                GameObject spark = Instantiate(sparkEffect);
                spark.transform.position = firePoint.transform.position;
                //HelperMethods.RotateObjTowardsTarget(spark.transform, Target.transform.position, true);
                spark.transform.LookAt(Target.transform.position);
                Destroy(spark, 1.0f);

                Target.Health -= Damage;
                LastAttackTime = Time.time;
            }
        }

        public override void AttackBoss()
        {
            //Intentionally left like this
            HelperMethods.RotateObjTowardsTarget(partToRotate.transform, boss.transform.position, true);
            LastAttackTime = Time.time;
        }

        public override void FindTarget()
        {
            //It can find melee enemies, but who knows, maybe a ranged enemy will be close enough so that it can hit it. It is unlikely, but worth checking for.
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
            EnemyBase _target = null;
            EnemyBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
                if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                {
                    if (aux.EnemyType == EnemyType.Melee || aux.EnemyType == EnemyType.Ranged)
                    {
                        _target = aux;
                        minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
                    }

                    if (aux == LockOnManager.SelectedEnemy)
                        break;
                }
            }
            foundTarget = _target;
            lastSearchTargetTime = Time.time;
        }
    }
}