using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class EnemyRanged : EnemyBase
    {
        public Transform firePoint;
        public GameObject bulletPrefab;

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
            if (!GamePauseManager.GamePaused)
                base.BaseUpdateCalls();
        }

        public override void Attack()
        {
            //Rotate towards the target
            Vector3 targetDirection = Target.transform.position - transform.position;
            transform.rotation = Quaternion.LookRotation(targetDirection);

            //Shoot a bullet towards it
            BulletMovement bulletScript = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation).GetComponent<BulletMovement>();
            bulletScript.damage = Damage;
            bulletScript.SetTarget(Target.transform.position, Target.gameObject);
            LastAttackTime = Time.time;
        }
    }
}