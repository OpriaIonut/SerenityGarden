using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    [CreateAssetMenu(fileName = "CommanderStatus", menuName = "ScriptableObjects/Commander")]
    public class CommanderScriptable : ScriptableObject
    {
        public float speed;
        public int damage;
        public float range;
        public float attackCooldown;
    }
}