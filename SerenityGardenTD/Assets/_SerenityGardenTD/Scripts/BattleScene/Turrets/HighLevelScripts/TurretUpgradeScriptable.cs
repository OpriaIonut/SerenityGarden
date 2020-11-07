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
        public int range;
        public float upgradeCost;
        public float sellReward;
        public GameObject gfx;
    }

    [CreateAssetMenu(fileName = "TurretUpgrade", menuName = "ScriptableObjects/TurretUpgrade")]
    public class TurretUpgradeScriptable : ScriptableObject
    {
        public TurretType turretType;
        public TurretLevel[] levelProp;
    }
}