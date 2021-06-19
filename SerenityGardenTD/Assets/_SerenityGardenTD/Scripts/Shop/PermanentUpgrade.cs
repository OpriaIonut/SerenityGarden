using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    [System.Serializable]
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
        [SerializeField] public UpgradeType type;
        [SerializeField] public float minMultiplier = 1;
        [SerializeField] public float maxMultiplier = 3;

        [SerializeField] public int startCost;
        [SerializeField] public float costMultiplierPerLevel = 1.7f;

        [SerializeField] public int currentLevel = 0;
        [SerializeField] public int maxLevel = 10;
    }
}