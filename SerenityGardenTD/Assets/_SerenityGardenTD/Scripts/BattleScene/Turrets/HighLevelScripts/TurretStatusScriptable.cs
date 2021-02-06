using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    /// <summary>
    /// Will hold the properties for a turret at a specific level
    /// </summary>
    [System.Serializable]
    public class TurretLevel
    {
        public float health;
        public float damage;
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