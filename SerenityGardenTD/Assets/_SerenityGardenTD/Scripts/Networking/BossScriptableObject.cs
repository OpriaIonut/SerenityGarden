using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    [CreateAssetMenu(fileName = "BossStatus", menuName = "ScriptableObjects/BossStatus")]
    public class BossScriptableObject : ScriptableObject
    {
        public float maxHealth;
        public float timeBetweenDecisions;
        public float moneyPerHP;

        public float sweepDamage;
        public int turretDestroyerCount;
        public float turretDestroyerDamage;

        public float timeBasedAttackInterruptAmount;
        public float timeBasedAttackDamage;
    }
}