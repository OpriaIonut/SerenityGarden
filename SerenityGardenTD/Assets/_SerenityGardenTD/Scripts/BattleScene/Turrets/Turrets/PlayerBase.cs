using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public sealed class PlayerBase : TurretBase
    {
        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
            Range = 5;
            Health = 500;
            Damage = 25;
            AttackCooldown = 5;
        }

        private void Update()
        {
            BaseUpdateCalls();
        }

        public override void FindTarget()
        {
            Collider[] hits = Physics.OverlapSphere(transform.position, Range);
            EnemyBase _target = null;
            EnemyBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.gameObject.GetComponent<EnemyBase>();
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

        public override void Attack()
        {
            if(Target != null)
            {

            }
        }

        public override void Die()
        {
            Debug.Log("Game over!");
            Destroy(this.gameObject);
        }
    }
}