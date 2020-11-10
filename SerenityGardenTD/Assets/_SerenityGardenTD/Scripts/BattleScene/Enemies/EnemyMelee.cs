using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class EnemyMelee : EnemyBase
    {
        private void Awake()
        {
            base.BaseAwakeCalls();
        }

        private void Start()
        {
            base.BaseStartCalls();
        }

        private void Update()
        {
            base.BaseUpdateCalls();
        }

        public override void Attack()
        {
            if (Target != null)
            {
                Vector3 targetDirection = Target.transform.position - transform.position;
                transform.rotation = Quaternion.LookRotation(targetDirection);

                Target.Health -= Damage;
                LastAttackTime = Time.time;
            }
        }
    }
}