using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public enum UpgradeType
    {
        FireRate,
        Damage,
        Range,
        Health
    }

    [System.Serializable]
    public class PermanentUpgrade
    {
        public UpgradeType type;
        public float minMultiplier = 1;
        public float maxMultiplier = 3;

        public int currentLevel = 0;
        public int maxLevel = 5;
    }
}