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
            //To do: implement reward money
        }

        public override void FindTarget()
        {
            //Intentionally left empty, because it can't attack any enemies
        }

        public override void Init()
        {
            //Intentionally left empty
        }
    }
}