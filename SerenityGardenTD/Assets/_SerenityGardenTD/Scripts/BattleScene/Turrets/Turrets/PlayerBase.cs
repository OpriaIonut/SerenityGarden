using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public sealed class PlayerBase : TurretBase
    {
        public Transform objToRotate;
        public GameObject bulletPrefab;
        public Transform firePoint;
        public TurretStatusScriptable baseStatus;
        public Transform gun;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
            Range = baseStatus.levelProp[0].range;
            maxHealth = baseStatus.levelProp[0].health;
            Health = maxHealth;
            Damage = baseStatus.levelProp[0].damage;
            AttackCooldown = baseStatus.levelProp[0].attackCooldown;
        }

        private void Update()
        {
            if (!GamePauseManager.GamePaused)
            {
                BaseUpdateCalls();
                //Search for a target at certain intervals
                if (Time.time - LastSearchTargetTime > SearchTargetCooldown)
                    FindTarget();
                if (Time.time - LastAttackTime > AttackCooldown)
                    Attack();
            }
        }

        public override void FindTarget()
        {
            //Search for a target, it can detect any enemy type
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
            EnemyBase _target = null;
            EnemyBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
                //If we have a locked-on target, then focus it
                if (aux != null && aux == LockOnManager.SelectedEnemy)
                {
                    _target = aux;
                    break;
                }
                if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                {
                    _target = aux;
                    minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
                }
            }
            foundTarget = _target;
            lastSearchTargetTime = Time.time;
        }

        public override void Attack()
        {
            if (Target != null)
            {
                //Shoot a bullet towards it
                BulletMovement bulletScript = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation).GetComponent<BulletMovement>();
                bulletScript.damage = Damage;
                bulletScript.SetTarget(Target.transform.position, Target.gameObject);
                LastAttackTime = Time.time;
            }
        }

        public override void Die()
        {
            Debug.Log("Game over!");
            Destroy(this.gameObject);
        }

        public override void Init()
        {
            //Intentionally left empty
        }
    }
}