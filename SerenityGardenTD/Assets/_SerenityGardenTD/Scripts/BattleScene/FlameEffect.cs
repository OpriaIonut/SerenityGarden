using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public enum HitObjectType
    {
        Turret,
        Enemy,
        Boss
    }
       
    public class FlameEffect : MonoBehaviour
    {
        public float damageOverTime = 1.0f;
        public HitObjectType objTohit;

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
            if (GamePauseManager.instance.GamePaused)
                return;

            if (objTohit == HitObjectType.Enemy)
            {
                EnemyBase enemy = other.transform.root.gameObject.GetComponent<EnemyBase>();
                if (enemy != null)
                    enemy.Health -= damageOverTime * Time.deltaTime;
            }
            else if (objTohit == HitObjectType.Turret)
            {
                Debug.Log("Hit: " + other.transform.root.name);
                TurretBase turret = other.transform.root.gameObject.GetComponent<TurretBase>();
                if (turret != null)
                    turret.Health -= damageOverTime * Time.deltaTime;
            }
        }
    }
}
