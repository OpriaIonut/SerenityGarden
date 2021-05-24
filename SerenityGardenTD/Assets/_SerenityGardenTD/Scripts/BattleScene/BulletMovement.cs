using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace SerenityGarden
{
    public class BulletMovement : MonoBehaviour
    {
        //Variables used to move the bullet using the physics system
        public float speed = 10.0f;
        private Rigidbody rb;

        public GameObject hitVfx;
        public float vfxDeathTime;
        public float vfxMaxParticleSize;

        private GameObject target;

        private float initTime;

        private bool hitTarget = false;

        private void Start()
        {
            rb = GetComponent<Rigidbody>();
            initTime = Time.time;

            Destroy(this.gameObject, 10.0f);
        }

        private void FixedUpdate()
        {
            if (target == null)
            {
                DestroyImmediate(this.gameObject);
                return;
            }

            Vector3 direction = target.transform.position - transform.position; //Calculate the image that you need to shot towards
            rb.velocity += direction.normalized * speed * Time.fixedDeltaTime;
        }

        /// <summary>
        /// Should be called by the script that instantiates the bullet.
        /// </summary>
        /// <param name="targetPos"></param>
        public void SetTarget(GameObject _target)
        {
            target = _target;
        }

        public float damage;
        private void OnTriggerEnter(Collider other)
        {
            //Ignore vfx collisions
            if (other.transform.gameObject.layer == 9)
                return;

            if (Time.time - initTime > 0.1f && hitTarget == false)
            {
                //If it is a bullet that was shot by an enemy, then check if it collided with a turret
                TurretBase turret = other.transform.root.gameObject.GetComponent<TurretBase>();
                if (turret != null)
                {
                    if (hitVfx)
                    {
                        GameObject explosion = Instantiate(hitVfx);
                        explosion.transform.position = transform.position;
                        Destroy(explosion, vfxDeathTime);
                        explosion.GetComponent<ParticleSystemRenderer>().maxParticleSize = vfxMaxParticleSize;
                    }

                    //If we hit a turret, then damage it and destroy the bullet.
                    turret.Health -= damage;
                    hitTarget = true;
                    Destroy(this.gameObject);
                }
                else
                {
                    //If it is a bullet that was shot by a turret, then check if it collided with an enemy
                    EnemyBase enemy = other.transform.root.gameObject.GetComponent<EnemyBase>();
                    if (enemy != null)
                    {
                        if (hitVfx)
                        {
                            GameObject explosion = Instantiate(hitVfx);
                            explosion.transform.position = transform.position;
                            Destroy(explosion, vfxDeathTime);
                            explosion.GetComponent<ParticleSystemRenderer>().maxParticleSize = vfxMaxParticleSize;
                        }

                        enemy.Health -= damage;
                        hitTarget = true;
                        Destroy(this.gameObject);
                    }
                }
            }
        }
    }
}