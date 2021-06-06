using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    [CreateAssetMenu(fileName = "Enemy", menuName = "ScriptableObjects/Enemy")]
    public class EnemyScriptable : ScriptableObject
    {
        public EnemyType enemyType;
        public int health;
        public float speed;
        public int damage;
        public float range;
        public int attackCooldown;
        public int killReward;
        public float initScaleMultiplier;
    }
}