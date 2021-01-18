using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretMachineGun : BuildableTurret
    {
        public GameObject bulletPrefab;

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
            if (!GamePauseManager.GamePaused)
                BaseUpdateCalls();
        }

        public override void Attack()
        {
            if (Target != null)
            {
                HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);

                //Shoot a bullet towards it
                BulletMovement bulletScript = Instantiate(bulletPrefab, firePoint.transform.position, firePoint.transform.rotation).GetComponent<BulletMovement>();
                bulletScript.damage = Damage;
                bulletScript.SetTarget(Target.transform.position, Target.gameObject);
                LastAttackTime = Time.time;
            }
        }

        public override void FindTarget()
        {
            //It can hit any enemy type, same as player base
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
            EnemyBase _target = null;
            EnemyBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
                if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                {
                    _target = aux;
                    minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);

                    if (aux == LockOnManager.SelectedEnemy)
                        break;
                }
            }
            foundTarget = _target;
            lastSearchTargetTime = Time.time;
        }
    }
}