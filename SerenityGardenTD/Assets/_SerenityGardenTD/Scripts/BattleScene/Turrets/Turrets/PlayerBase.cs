using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public sealed class PlayerBase : TurretBase
    {
        public GameObject bulletPrefab;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
            SetLevelProp(0);
        }

        private void Update()
        {
            if (!GamePauseManager.instance.GamePaused)
            {
                BaseUpdateCalls();
                //Search for a target at certain intervals
                if (Time.time - LastSearchTargetTime > SearchTargetCooldown)
                    FindTarget();
                if (Time.time - LastAttackTime > AttackCooldown)
                    Attack();
            }
        }

        public override void FindTarget()
        {
            //Search for a target, it can detect any enemy type
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
            EnemyBase _target = null;
            EnemyBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
                //If we have a locked-on target, then focus it
                if (aux != null && aux == LockOnManager.SelectedEnemy)
                {
                    _target = aux;
                    break;
                }
                if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                {
                    _target = aux;
                    minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
                }
            }
            foundTarget = _target;
            lastSearchTargetTime = Time.time;
        }

        public override void Attack()
        {
            if (Target != null)
            {
                //Shoot a bullet towards it
                BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.transform.position, firePoint.transform.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
                bulletScript.damage = Damage;
                bulletScript.SetTarget(Target.gameObject);
                LastAttackTime = Time.time;
            }
        }

        public override void Die()
        {
            BattleStageStateManager.instance.GameOver();
            Destroy(this.gameObject);
        }

        public override void Init()
        {
            //Scale the object based so that it fits the scale of the map.
            Bounds bounds;
            Bounds hexagonBounds;
            if (HelperMethods.FindBounds(gameObject, out bounds) && HelperMethods.FindBounds(HexagonalGrid.instance.gridCells[0].gameObject, out hexagonBounds))
            {
                float diameter = Mathf.Abs(hexagonBounds.min.x - hexagonBounds.max.x) * 3;
                float currentDist = HelperMethods.SquaredDistance(bounds.min, bounds.max);

                float targetScale = (diameter * transform.localScale.x) / currentDist;
                transform.localScale = Vector3.one * targetScale;
            }
        }
    }
}