using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretMachineGun : BuildableTurret
    {
        public float spawnRadius = 0.1f;
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
            if (!GamePauseManager.instance.GamePaused)
                BaseUpdateCalls();
        }

        public override void Attack()
        {
            if (Target != null)
            {
                HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);

                Vector3 defaultPos = firePoint.transform.position;
                Vector3 spawnPos = new Vector3(Random.Range(defaultPos.x - spawnRadius, defaultPos.x + spawnRadius), Random.Range(defaultPos.y - spawnRadius, defaultPos.y + spawnRadius), defaultPos.z);

                //Shoot a bullet towards it
                BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, spawnPos, firePoint.transform.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
                bulletScript.damage = Damage;
                bulletScript.SetTarget(Target.gameObject);
                LastAttackTime = Time.time;
            }
        }

        public override void AttackBoss()
        {
            HelperMethods.RotateObjTowardsTarget(partToRotate.transform, boss.transform.position, true);

            Vector3 defaultPos = firePoint.transform.position;
            Vector3 spawnPos = new Vector3(Random.Range(defaultPos.x - spawnRadius, defaultPos.x + spawnRadius), Random.Range(defaultPos.y - spawnRadius, defaultPos.y + spawnRadius), defaultPos.z);

            //Shoot a bullet towards it
            BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, spawnPos, firePoint.transform.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
            bulletScript.damage = Damage;
            bulletScript.SetTarget(boss.gameObject);
            LastAttackTime = Time.time;
        }

        public override void FindTarget()
        {
            //It can hit any enemy type, same as player base
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2 * transform.localScale.x);
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