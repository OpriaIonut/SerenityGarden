using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class ObjectRotator : MonoBehaviour
    {
        public float speed = 0.1f;
        public float radius = 0.5f;
        public Transform[] stars;

        private void Start()
        {
            float degrees = 360.0f / stars.Length;
            float currentDegrees = 0.0f;
            foreach(Transform star in stars)
            {
                star.localPosition = new Vector3(Mathf.Sin(currentDegrees * Mathf.Deg2Rad), 0.0f, Mathf.Cos(currentDegrees * Mathf.Deg2Rad)) * radius;
                currentDegrees += degrees;
            }
        }

        private void Update()
        {
            transform.localEulerAngles = new Vector3(0.0f, Time.time * speed, 0.0f);
        }
    }
}