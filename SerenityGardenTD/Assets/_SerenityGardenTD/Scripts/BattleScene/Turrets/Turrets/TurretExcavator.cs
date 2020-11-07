using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretExcavator : BuildableTurret
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
            //Intentionally left empty
        }

        public override void FindTarget()
        {
            //Intentionally left empty
        }
    }
}