using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class Meteorite : MonoBehaviour
    {
        public float speed = 10.0f;
        public GameObject explosionVFX;

        private float damage;
        private bool aoe;

        private TurretBase target;
        private Rigidbody rb;

        private void Start()
        {
            rb = GetComponent<Rigidbody>();
        }

        private void FixedUpdate()
        {
            if(target != null)
            {
                Vector3 direction = target.transform.position - transform.position; //Calculate the image that you need to shot towards
                rb.velocity += direction.normalized * speed * Time.fixedDeltaTime;
            }
        }

        public void SetTarget(TurretBase _target, float _damage, bool _aoe)
        {
            target = _target;
            damage = _damage;
            aoe = _aoe;
        }

        private bool calledDestroy = false;

        private void OnTriggerEnter(Collider other)
        {
            if (!aoe)
            {
                if (target != null && other.transform.root.gameObject == target.gameObject)
                {
                    target.Health -= damage;
                    Destroy(gameObject);
                }
            }
            else
            {
                TurretBase turret = other.transform.root.gameObject.GetComponent<TurretBase>();
                if(turret != null)
                {
                    turret.Health -= damage;
                    if(!calledDestroy)
                    {
                        Destroy(gameObject, 0.5f);
                        calledDestroy = true;

                        GameObject explosion = Instantiate(explosionVFX);
                        explosion.transform.position = transform.position;
                        Destroy(explosion, 1.0f);
                        explosionVFX.GetComponent<ParticleSystemRenderer>().maxParticleSize = 1.0f;
                    }
                }
            }
        }
    }
}