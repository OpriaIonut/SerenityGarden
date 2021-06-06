﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretVulkan : BuildableTurret
    {
        public GameObject bulletPrefab;
        public GameObject explosionVfx;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
        }

        private void Update()
        {
            if (!GamePauseManager.instance.GamePaused)
                BaseUpdateCalls();
        }

        public override void Attack()
        {
            if (Target != null)
            {
                HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);

                //Shoot a bullet towards it
                BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.transform.position, firePoint.transform.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
                bulletScript.damage = Damage;
                bulletScript.SetTarget(Target.gameObject);
                LastAttackTime = Time.time;

                bulletScript.hitVfx = explosionVfx;
                bulletScript.vfxDeathTime = 1.0f;
                bulletScript.vfxMaxParticleSize = CurrentLevel * 0.05f + 0.1f;
            }
        }

        public override void AttackBoss()
        {
            HelperMethods.RotateObjTowardsTarget(partToRotate.transform, boss.transform.position, true);

            //Shoot a bullet towards it
            BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.transform.position, firePoint.transform.rotation, PhotonObj.VulkanBullet).GetComponent<BulletMovement>();
            bulletScript.damage = Damage;
            bulletScript.SetTarget(boss.gameObject);
            LastAttackTime = Time.time;

            bulletScript.hitVfx = explosionVfx;
            bulletScript.vfxDeathTime = 1.0f;
            bulletScript.vfxMaxParticleSize = CurrentLevel * 0.05f + 0.1f;
        }

        public override void FindTarget()
        {
            //Can attack only flying and ambusher enemies.
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
            EnemyBase _target = null;
            EnemyBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
                if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                {
                    if (aux.EnemyType == EnemyType.Flying || aux.EnemyType == EnemyType.Ambusher)
                    {
                        _target = aux;
                        minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
                    }

                    if (aux == LockOnManager.SelectedEnemy)
                        break;
                }
            }
            foundTarget = _target;
            lastSearchTargetTime = Time.time;
        }
    }
}