using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretMachineGun : BuildableTurret
    {
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
            BaseUpdateCalls();
        }

        public override void Attack()
        {
            
        }

        public override void FindTarget()
        {
            //It can hit any enemy type, same as player base
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

        public override void Init()
        {
            //Intentionally left empty
        }
    }
}