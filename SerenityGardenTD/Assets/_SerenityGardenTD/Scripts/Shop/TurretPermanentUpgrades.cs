using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    [CreateAssetMenu(fileName = "PermanentUpgrade", menuName = "ScriptableObjects/TurretPermanentUpgrade")]
    public class TurretPermanentUpgrades : ScriptableObject
    {
        [SerializeField] public TurretType turretType;
        [SerializeField] public PermanentUpgrade[] upgrades;

        public float GetMultiplier(UpgradeType type)
        {
            for(int index = 0; index < upgrades.Length; index++)
            {
                if (upgrades[index].type == type)
                {
                    PermanentUpgrade item = upgrades[index];
                    return item.minMultiplier + (item.maxMultiplier - item.minMultiplier) * item.currentLevel / item.maxLevel;
                }
            }
            return 1;
        }
    }
}