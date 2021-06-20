using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;

namespace SerenityGarden
{
    public class TurretFlamethrower : BuildableTurret
    {
        public GameObject vfxPrefab;

        [GradientUsage(true)]
        public Gradient[] flameGradients;

        public Vector2[] reachProp;
        public Vector3[] boxColSize;
        public Vector3[] boxColCenter;

        private VisualEffect vfxInstance;
        private FlameEffect effectScript;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
        }

        public override void SetLevelProp(int level)
        {
            base.SetLevelProp(level);

            GameObject effect = Instantiate(vfxPrefab, firePoint.transform);

            vfxInstance = effect.GetComponent<VisualEffect>();
            vfxInstance.SetGradient("ColorGradient", flameGradients[level]);
            vfxInstance.SetVector2("Reach", reachProp[level]);

            effectScript = effect.GetComponent<FlameEffect>();
            effectScript.damageOverTime = Damage;
            if (boss == null)
                effectScript.objTohit = HitObjectType.Enemy;
            else
                effectScript.objTohit = HitObjectType.Boss;
            effectScript.SetColliderSize(boxColSize[level], boxColCenter[level]);
        }

        private void Update()
        {
            if (!GamePauseManager.instance.GamePaused)
                BaseUpdateCalls();

            if (Target == null && boss == null)
            {
                vfxInstance.Stop();
                effectScript.Activate(false);
            }
        }

        public override void Attack()
        {
            if (Target != null)
            {
                HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);
                LastAttackTime = Time.time;

                vfxInstance.Play();
                effectScript.Activate(true);
            }
        }

        public override void AttackBoss()
        {
            HelperMethods.RotateObjTowardsTarget(partToRotate.transform, boss.transform.position, true);
            LastAttackTime = Time.time;

            boss.TakeDamage(Damage * Time.deltaTime);

            vfxInstance.Play();
            effectScript.Activate(true);
        }

        public override void FindTarget()
        {
            //It will search once only for melee enemies, but if itit doesn't find any, it will search again for ranged enemies.
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2 * transform.localScale.x);
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
                    if (aux.EnemyType == EnemyType.Melee && distance < minDistMelee)
                    {
                        meleeTarget = aux;
                        minDistMelee = distance;
                    }
                    if (aux.EnemyType == EnemyType.Ranged && distance < minDistRanged)
                    {
                        rangedTarget = aux;
                        minDistRanged = distance;
                    }

                    if (LockOnManager.SelectedEnemy != null && rangedTarget == LockOnManager.SelectedEnemy || meleeTarget == LockOnManager.SelectedEnemy)
                    {
                        meleeTarget = LockOnManager.SelectedEnemy;
                        break;
                    }
                }
            }
            if (meleeTarget != null)
                foundTarget = meleeTarget;
            else
                foundTarget = rangedTarget;
            lastSearchTargetTime = Time.time;
        }
    }
}
