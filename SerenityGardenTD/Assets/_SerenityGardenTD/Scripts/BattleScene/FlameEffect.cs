using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class FlameEffect : MonoBehaviour
    {
        public float damageOverTime = 1.0f;
        public bool hitEnemies = true;

        private BoxCollider boxCol;

        private void Awake()
        {
            boxCol = GetComponent<BoxCollider>();   
        }

        public void SetColliderSize(Vector3 size, Vector3 center)
        {
            boxCol.size = size;
            boxCol.center = center;
        }

        public void Activate(bool activate)
        {
            boxCol.enabled = activate;
        }

        private void OnTriggerStay(Collider other)
        {
            if (hitEnemies)
            {
                EnemyBase enemy = other.transform.root.gameObject.GetComponent<EnemyBase>();
                if (enemy != null)
                    enemy.Health -= damageOverTime * Time.deltaTime;
            }
            else
            {
                TurretBase turret = other.transform.root.gameObject.GetComponent<TurretBase>();
                if (turret != null)
                    turret.Health -= damageOverTime * Time.deltaTime;
            }
        }
    }
}
