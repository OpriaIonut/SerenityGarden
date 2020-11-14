using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretExcavator : BuildableTurret
    {
        public TurretBuildManager turretBuildManager;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
            turretBuildManager = TurretBuildManager.instance;
        }

        private void Update()
        {
            BaseUpdateCalls();
        }

        public override void Attack()
        {
            turretBuildManager.Money += Damage;
            LastAttackTime = Time.time;
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