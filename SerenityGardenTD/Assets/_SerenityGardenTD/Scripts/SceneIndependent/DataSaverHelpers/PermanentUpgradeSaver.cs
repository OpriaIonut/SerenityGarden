using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    [System.Serializable]
    public class PermanentUpgradeSaveData
    {
        [SerializeField] public TurretType turretType;
        [SerializeField] public PermanentUpgrade[] upgrades;
    }

    /// <summary>
    /// Helper class for saving turret permanent upgrade, because it doesn't work with ScriptableObjects that easily
    /// </summary>
    [System.Serializable]
    public class PermanentUpgradeSaver
    {
        [SerializeField] public List<PermanentUpgradeSaveData> saveData;

        public PermanentUpgradeSaver()
        {
            saveData = new List<PermanentUpgradeSaveData>();
        }
    }
}