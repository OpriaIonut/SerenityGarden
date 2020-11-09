﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class EnemyAmbusher : EnemyBase
    {
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
            
        }

        public override void Move()
        {
            //The movement of ambushers is different from the others, it doesn't use the grid system. It will go straight towards the end goal
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