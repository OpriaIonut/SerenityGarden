using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class BulletMovement : MonoBehaviour
    {
        //Variables used to move the bullet using the physics system
        public float speed = 10.0f;
        private Rigidbody rb;

        private GameObject target;

        private void Start()
        {
            rb = GetComponent<Rigidbody>();
            Destroy(this.gameObject, 10.0f);
        }

        private void FixedUpdate()
        {
            if (target == null)
                Destroy(this);

            Vector3 direction = target.transform.position - transform.position; //Calculate the image that you need to shot towards
            rb.velocity += direction * speed * Time.fixedDeltaTime;
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
            if(other.transform.root.gameObject == target)
            {
                //If it is a bullet that was shot by an enemy, then check if it collided with a turret
                TurretBase turret = other.transform.root.gameObject.GetComponent<TurretBase>();
                if (turret != null)
                {
                    //If we hit a turret, then damage it and destroy the bullet.
                    turret.Health -= damage;
                    Destroy(this.gameObject);
                }
                else
                {
                    //If it is a bullet that was shot by a turret, then check if it collided with an enemy
                    EnemyBase enemy = other.transform.root.gameObject.GetComponent<EnemyBase>();
                    if (enemy != null)
                    {
                        enemy.Health -= damage;
                        Destroy(this.gameObject);
                    }
                }
            }
        }
    }
}