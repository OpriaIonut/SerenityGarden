using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class BulletMovement : MonoBehaviour
    {
        //Variables used to move the bullet using the physics system
        public float force = 100.0f;
        private Rigidbody rb;

        /// <summary>
        /// Should be called by the script that instantiates the bullet.
        /// </summary>
        /// <param name="targetPos"></param>
        public void SetTarget(Vector3 targetPos)
        {
            rb = GetComponent<Rigidbody>();
            Vector3 direction = targetPos - transform.position; //Calculate the image that you need to shot towards
            rb.AddForce(direction * force);
        }

        public int damage;
        private void OnTriggerEnter(Collider other)
        {
            TurretBase turret = other.transform.root.gameObject.GetComponent<TurretBase>();
            if (turret != null)
            {
                //If we hit a turret, then damage it and destroy the bullet.
                turret.Health -= damage;
                Destroy(this.gameObject);
            }
        }
    }
}