using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace SerenityGarden
{
    public class EnemyRanged : EnemyBase
    {
        public Transform firePoint;
        public GameObject bulletPrefab;
        public Animator anim;

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

            if (!GamePauseManager.instance.GamePaused && Target == null)
                anim.SetBool("IsWalking", true);
            else
                anim.SetBool("IsWalking", false);
        }

        public override void Init()
        {
            base.Init();
            transform.position = new Vector3(transform.position.x, 0.05f, transform.position.z);
            transform.localScale *= enemyScriptable.initScaleMultiplier;
        }

        public override void Attack()
        {
            //Rotate towards the target
            Vector3 targetDirection = Target.transform.position - transform.position;
            transform.rotation = Quaternion.LookRotation(targetDirection);

            //Shoot a bullet towards it
            BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.position, firePoint.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
            bulletScript.damage = Damage;
            bulletScript.SetTarget(Target.gameObject);
            LastAttackTime = Time.time;
        }
    }
}