using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class ParticleRotator : MonoBehaviour
    {
        public float radius = 4.0f;
        public float speed = 100.0f;
        public float angleToRotate = 360.0f;

        private float angle = 0;

        private void Start()
        {
            transform.position = new Vector3(0.0f, 0.0f, radius);
        }

        private void Update()
        {
            if (angle < angleToRotate)
            {
                float amount = Time.deltaTime * speed;
                angle += amount;
                transform.RotateAround(Vector3.zero, Vector3.up, -amount);
            }
        }
    }
}