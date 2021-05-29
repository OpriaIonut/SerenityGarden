using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretExcavator : BuildableTurret
    {
        public GameObject rippleEffect;

        private TurretBuildManager turretBuildManager;
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
            if (!GamePauseManager.instance.GamePaused && (boss != null || waveManager.spawnWaves == true))
                BaseUpdateCalls();
        }

        public override void Attack()
        {
            turretBuildManager.Money += (int)Damage;
            LastAttackTime = Time.time;

            Transform clone = Instantiate(rippleEffect).transform;
            clone.position = new Vector3(transform.position.x, 0.05f, transform.position.z);
            Destroy(clone.gameObject, 3.0f);
        }

        public override void AttackBoss()
        {
            turretBuildManager.Money += (int)Damage;
            LastAttackTime = Time.time;

            Transform clone = Instantiate(rippleEffect).transform;
            clone.position = new Vector3(transform.position.x, 0.05f, transform.position.z);
            Destroy(clone.gameObject, 3.0f);
        }

        public override void FindTarget()
        {
            //Intentionally left empty, because it can't attack any enemies
        }
    }
}