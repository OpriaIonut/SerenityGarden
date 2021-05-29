using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class Meteorite : MonoBehaviour
    {
        public float speed = 10.0f;

        private float damage;

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

        public void SetTarget(TurretBase _target, float _damage)
        {
            target = _target;
            damage = _damage;
        }

        private void OnTriggerEnter(Collider other)
        {
            if(target != null && other.transform.root.gameObject == target.gameObject)
            {
                target.Health -= damage;
                Destroy(gameObject);
            }
        }
    }
}