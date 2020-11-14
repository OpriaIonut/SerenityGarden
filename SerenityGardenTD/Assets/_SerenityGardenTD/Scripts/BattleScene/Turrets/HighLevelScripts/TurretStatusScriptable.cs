using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    [System.Serializable]
    public class TurretLevel
    {
        public int health;
        public int damage;
        public float attackCooldown;
        public float range;
        public int upgradeCost;
        public int sellReward;
        public GameObject gfx;
    }

    [CreateAssetMenu(fileName = "TurretUpgrade", menuName = "ScriptableObjects/TurretUpgrade")]
    public class TurretStatusScriptable : ScriptableObject
    {
        public TurretType turretType;
        public TurretLevel[] levelProp;
    }
}