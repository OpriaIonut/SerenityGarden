using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace SerenityGarden
{
    [System.Serializable]
    public enum FireDemonActions
    {
        IdleStretch,
        TurretDestroyer,
        Sweep,
        TimeBasedAttack
    }

    public class FireDemon : BossBase
    {
        public float turretDestroyerDamage = 1000.0f;
        public float sweepDamage = 25.0f;
        public float timeBasedAttackDamage = 100.0f;

        
        public GameObject meteoritePrefab;


        private void Start()
        {
            health = maxHealth;
            SetHealthbar(1.0f);
        }

        public override void TakeDamage(float ammount)
        {
            base.TakeDamage(ammount);
        }

        protected override void Die()
        {
            base.Die();
        }
    }
}