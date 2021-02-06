using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretExcavator : BuildableTurret
    {
        public TurretBuildManager turretBuildManager;
        private WaveManager waveManager;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
            turretBuildManager = TurretBuildManager.instance;
            waveManager = WaveManager.instance;
        }

        private void Update()
        {
            if (!GamePauseManager.GamePaused && waveManager.spawnWaves == true)
                BaseUpdateCalls();
        }

        public override void Attack()
        {
            turretBuildManager.Money += (int)Damage;
            LastAttackTime = Time.time;
        }

        public override void FindTarget()
        {
            //Intentionally left empty, because it can't attack any enemies
        }
    }
}