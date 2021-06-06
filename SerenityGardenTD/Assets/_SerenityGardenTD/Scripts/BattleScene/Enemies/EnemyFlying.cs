using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class EnemyFlying : EnemyBase
    {
        public Transform firePoint1;
        public Transform firePoint2;
        public GameObject bulletPrefab;

        public Transform propeller;
        public float propellerSpeed = 5.0f;

        private bool fireSwitch = false;

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
            if (!GamePauseManager.instance.GamePaused)
                base.BaseUpdateCalls();

            propeller.Rotate(Vector3.forward * propellerSpeed * Time.deltaTime, Space.Self);
        }

        public override void Init()
        {
            base.Init();
            transform.position = new Vector3(transform.position.x, 1.0f, transform.position.z);
            transform.localScale *= enemyScriptable.initScaleMultiplier;
        }

        public override void Attack()
        {
            fireSwitch = !fireSwitch;

            Transform transfToUse = firePoint1;
            if (fireSwitch == false)
                transfToUse = firePoint2;

            //Rotate towards the target
            Vector3 targetDirection = Target.transform.position - transform.position;
            transform.rotation = Quaternion.LookRotation(targetDirection);

            //Shoot a bullet towards it
            BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, transfToUse.position, transfToUse.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
            bulletScript.damage = Damage;
            bulletScript.SetTarget(Target.gameObject);
            LastAttackTime = Time.time;
        }
    }
}
