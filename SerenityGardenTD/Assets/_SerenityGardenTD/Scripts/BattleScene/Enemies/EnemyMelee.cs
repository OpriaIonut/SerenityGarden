using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class EnemyMelee : EnemyBase
    {
        public Animator anim;
        public Transform drill;
        public float drillSpeed = 100.0f;

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

            drill.Rotate(Vector3.right * drillSpeed * Time.deltaTime, Space.Self);
        }

        public override void Init()
        {
            base.Init();
            transform.position = new Vector3(transform.position.x, 0.05f, transform.position.z);
            transform.localScale *= enemyScriptable.initScaleMultiplier;
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