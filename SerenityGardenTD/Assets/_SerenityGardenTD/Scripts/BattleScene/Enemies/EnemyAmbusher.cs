using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class EnemyAmbusher : EnemyBase
    {
        public GameObject explosionVFX;

        private Vector3 moveDirection;
        private bool hitTarget = false;

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
            if(!GamePauseManager.instance.GamePaused)
                base.BaseUpdateCalls();

            transform.Translate(moveDirection * Speed * Time.deltaTime, Space.World);
            RaycastHit hit;
            if(!hitTarget && Physics.Raycast(transform.position, Vector3.down, out hit))
            {
                if(hit.transform.root.gameObject.GetComponent<PlayerBase>())
                {
                    Target.Health -= Damage;
                    GameObject explosion = Instantiate(explosionVFX);
                    explosion.transform.position = Target.transform.position;
                    Destroy(explosion, 1.0f);
                    hitTarget = true;
                }
            }
        }

        public override void Init()
        {
            base.Init();

            transform.position = new Vector3(transform.position.x, 1.5f, transform.position.z);
            Target = FindObjectOfType<PlayerBase>();
            HelperMethods.RotateObjTowardsTarget(transform, Target.transform.position, true, Speed * Time.deltaTime);
            moveDirection = Target.transform.position - transform.position;
            moveDirection.y = 0;
            transform.localScale *= enemyScriptable.initScaleMultiplier;
            Destroy(gameObject, 25.0f);
        }

        public override void Attack()
        {
            //Intentionally left empty
        }

        public override void Move()
        {
            //Intentionally left empty
        }

        public override void FindTarget()
        {
            //Intentionally left empty
            LastSearchTargetTime = Time.time;
        }

        public override void FindNextBlock()
        {
            //Intentionally left empty
        }
    }
}