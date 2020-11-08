using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class EnemyFlying : EnemyBase
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

        }
    }
}
