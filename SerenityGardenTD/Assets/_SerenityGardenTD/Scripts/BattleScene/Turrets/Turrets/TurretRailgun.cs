using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretRailgun : BuildableTurret
    {
        public GameObject bulletPrefab;
        public Transform firePoint;

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
                HelperMethods.RotateObjTowardsTarget(transform, Target.transform.position, true);

                //Shoot a bullet towards it
                BulletMovement bulletScript = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation).GetComponent<BulletMovement>();
                bulletScript.damage = Damage;
                bulletScript.SetTarget(Target.transform.position, Target.gameObject);
                LastAttackTime = Time.time;
            }
        }

        public override void FindTarget()
        {
            //It will search once for ranged enemies, but if it doesn't find any, it will search for melee enemies.
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
            EnemyBase _target = null;
            EnemyBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
                if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                {
                    if (aux.EnemyType == EnemyType.Ranged)
                    {
                        _target = aux;
                        minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
                    }

                    if (aux == LockOnManager.SelectedEnemy)
                        break;
                }
            }
            if (_target == null)
            {
                foreach (Collider item in hits)
                {
                    aux = item.gameObject.GetComponent<EnemyBase>();
                    if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                    {
                        if (aux.EnemyType == EnemyType.Melee)
                        {
                            _target = aux;
                            minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
                        }

                        if (aux == LockOnManager.SelectedEnemy)
                            break;
                    }
                }
            }
            foundTarget = _target;
            lastSearchTargetTime = Time.time;
        }

        public override void Init()
        {
            //Intentionally left empty
        }
    }
}