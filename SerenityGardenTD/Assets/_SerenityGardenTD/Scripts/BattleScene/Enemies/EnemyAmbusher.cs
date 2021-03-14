using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class EnemyAmbusher : EnemyBase
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
            if(!GamePauseManager.instance.GamePaused)
                base.BaseUpdateCalls();
        }

        public override void Attack()
        {
            //Rotate towards the target
            HelperMethods.RotateObjTowardsTarget(transform, EndBlock.transform.position, true, Speed * Time.deltaTime);

            //Shoot a bullet towards the target
            BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.position, firePoint.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
            bulletScript.damage = Damage;
            bulletScript.SetTarget(Target.gameObject);
            LastAttackTime = Time.time;
        }

        public override void Move()
        {
            //The movement of ambushers is different from the others, it doesn't use the grid system. It will go straight towards the end goal
            HelperMethods.RotateObjTowardsTarget(transform, EndBlock.transform.position, true, Speed * Time.deltaTime);
            HelperMethods.MoveTowards(transform, EndBlock.transform.position, Speed * Time.deltaTime, true);
        }

        public override void FindTarget()
        {
            //Also, for target, it will only consider the base as a target
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
            TurretBase _target = null;
            TurretBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<PlayerBase>();
                if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                {
                    _target = aux;
                    minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
                }
            }
            Target = _target;
            LastSearchTargetTime = Time.time;
        }

        public override void FindNextBlock()
        {
            //Intentionally left empty
        }
    }
}