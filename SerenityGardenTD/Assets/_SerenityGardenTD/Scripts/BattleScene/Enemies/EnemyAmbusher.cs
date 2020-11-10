﻿using System.Collections;
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
            base.BaseUpdateCalls();
        }

        public override void Attack()
        {
            //Rotate towards the target
            Vector3 targetDirection = Target.transform.position - transform.position;
            transform.rotation = Quaternion.LookRotation(targetDirection);

            //Shoot a bullet towards the target
            BulletMovement bulletScript = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation).GetComponent<BulletMovement>();
            bulletScript.damage = Damage;
            bulletScript.SetTarget(Target.transform.position);
            LastAttackTime = Time.time;
        }

        public override void Move()
        {
            //The movement of ambushers is different from the others, it doesn't use the grid system. It will go straight towards the end goal
            Vector3 targetDirection = EndBlock.transform.position - transform.position;
            Vector3 newDirection = Vector3.RotateTowards(transform.forward, targetDirection, rotationSpeed * Time.deltaTime, 0.0f);
            transform.rotation = Quaternion.LookRotation(newDirection);

            transform.position = Vector3.MoveTowards(transform.position, EndBlock.transform.position, Speed * Time.deltaTime);
        }

        public override void FindTarget()
        {
            //Also, for target, it will only consider the base as a target
            Collider[] hits = Physics.OverlapSphere(transform.position, Range);
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