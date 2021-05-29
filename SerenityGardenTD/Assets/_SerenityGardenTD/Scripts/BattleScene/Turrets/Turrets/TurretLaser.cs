using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretLaser : BuildableTurret
    {
        public GameObject laserPrefab;
        public GameObject enemyHitParticle;
        public Color[] laserColors;

        private LineRenderer laserLine;
        private ParticleSystem particleInstance;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
        }

        private void OnDestroy()
        {
            if (particleInstance != null)
                Destroy(particleInstance);
        }

        private void Update()
        {
            if (!GamePauseManager.instance.GamePaused)
                BaseUpdateCalls();

            if (Target == null && boss == null)
            {
                if (particleInstance != null)
                    Destroy(particleInstance.gameObject);
                laserLine.gameObject.SetActive(false);
            }
        }

        public override void SetLevelProp(int level)
        {
            base.SetLevelProp(level);

            laserLine = Instantiate(laserPrefab, firePoint.transform).GetComponent<LineRenderer>();
            laserLine.startColor = laserColors[level];
            laserLine.endColor = laserColors[level];

            if(particleInstance != null)
            {
                var trails = particleInstance.trails;
                trails.colorOverLifetime = laserLine.startColor;

                var mainModule = particleInstance.main;
                mainModule.startColor = laserLine.startColor;
            }
        }

        public override void Attack()
        {
            if (Target != null)
            {
                laserLine.gameObject.SetActive(true);
                laserLine.SetPosition(0, firePoint.transform.position);

                Vector3 endPos = Target.transform.position;
                Vector3 dir = Target.transform.position - firePoint.transform.position;
                RaycastHit[] hits = Physics.RaycastAll(firePoint.transform.position, dir);
                foreach(RaycastHit hit in hits)
                {
                    if(hit.collider.transform.root.gameObject == Target.gameObject)
                    {
                        endPos = hit.point;
                        break;
                    }
                }

                if (particleInstance == null)
                {
                    particleInstance = Instantiate(enemyHitParticle).GetComponent<ParticleSystem>();
                    var trails = particleInstance.trails;
                    trails.colorOverLifetime = laserLine.startColor;

                    var mainModule = particleInstance.main;
                    mainModule.startColor = laserLine.startColor;
                }

                laserLine.SetPosition(1, endPos);
                particleInstance.transform.position = endPos;

                HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);

                Target.Health -= damage * Time.deltaTime;

                LastAttackTime = Time.time;
            }
        }

        public override void AttackBoss()
        {
            laserLine.gameObject.SetActive(true);
            laserLine.SetPosition(0, firePoint.transform.position);

            Vector3 endPos = boss.transform.position;
            Vector3 dir = boss.transform.position - firePoint.transform.position;
            RaycastHit[] hits = Physics.RaycastAll(firePoint.transform.position, dir);
            foreach (RaycastHit hit in hits)
            {
                if (hit.collider.gameObject.tag != "BossHitCollider")
                    continue;

                if (hit.collider.transform.root.gameObject == boss.gameObject)
                {
                    endPos = hit.point;
                    break;
                }
            }

            if (particleInstance == null)
            {
                particleInstance = Instantiate(enemyHitParticle).GetComponent<ParticleSystem>();
                var trails = particleInstance.trails;
                trails.colorOverLifetime = laserLine.startColor;

                var mainModule = particleInstance.main;
                mainModule.startColor = laserLine.startColor;
            }

            laserLine.SetPosition(1, endPos);
            particleInstance.transform.position = endPos;

            HelperMethods.RotateObjTowardsTarget(partToRotate.transform, boss.transform.position, true);

            boss.TakeDamage(damage * Time.deltaTime);

            LastAttackTime = Time.time;
        }

        public override void FindTarget()
        {
            //It will search once for ranged enemies, but if it doesn't find any, it will search for melee enemies.
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
            EnemyBase rangedTarget = null;
            EnemyBase meleeTarget = null;

            EnemyBase aux;
            float minDistRanged = float.MaxValue;
            float minDistMelee = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
                if (aux != null)
                {
                    float distance = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
                    if (aux.EnemyType == EnemyType.Ranged && distance < minDistRanged)
                    {
                        rangedTarget = aux;
                        minDistRanged = distance;
                    }
                    else if (aux.EnemyType == EnemyType.Melee && distance < minDistMelee)
                    {
                        meleeTarget = aux;
                        minDistMelee = distance;
                    }

                    if (LockOnManager.SelectedEnemy != null && (rangedTarget == LockOnManager.SelectedEnemy || meleeTarget == LockOnManager.SelectedEnemy))
                    {
                        rangedTarget = LockOnManager.SelectedEnemy;
                        break;
                    }
                }
            }
            if (rangedTarget != null)
                foundTarget = rangedTarget;
            else
                foundTarget = meleeTarget;
            lastSearchTargetTime = Time.time;
        }
    }
}