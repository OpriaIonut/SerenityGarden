using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class SceneDataRetainer : MonoBehaviour
    {
        //Default singleton
        #region Singleton + DontDestroyOnLoad

        public static SceneDataRetainer instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! Multiple instances of SceneDataRetainer in scene. Deleting from: " + gameObject.name);
                Destroy(this);
            }
            else
                instance = this;

            DontDestroyOnLoad(this.gameObject);
        }

        #endregion

        private StageScriptable selectedStage;
        private BossScriptableObject selectedBossDifficulty;
        private TurretPermanentUpgrades[] permanentUpgrades;

        public void SelectStage(StageScriptable stage)
        {
            selectedStage = stage;
        }

        public StageScriptable GetStage()
        {
            return selectedStage;
        }

        public BossScriptableObject SelectedBossDifficulty { get { return selectedBossDifficulty; } set { selectedBossDifficulty = value; } }

        public void SetPermanentUpgrades(TurretPermanentUpgrades[] _permanentUpgrades)
        {
            permanentUpgrades = _permanentUpgrades;
        }

        public int GetPermanentUpgradesCount()
        {
            return permanentUpgrades.Length;
        }

        public TurretPermanentUpgrades[] GetPermanentUpgrades()
        {
            return permanentUpgrades;
        }

        public TurretType GetPermanentUpgradeTurretType(int turretIndex)
        {
            return permanentUpgrades[turretIndex].turretType;
        }

        public TurretPermanentUpgrades GetMultipliers(TurretType _turretType)
        {
            for(int index = 0; index < permanentUpgrades.Length; index++)
            {
                if (permanentUpgrades[index].turretType == _turretType)
                    return permanentUpgrades[index];
            }
            return null;
        }

        public TurretPermanentUpgrades GetMultipliers(int turretIndex)
        {
            return permanentUpgrades[turretIndex];
        }

        public void SetMultiplier(TurretType turret, UpgradeType type, float newMultiplier)
        {
            foreach(TurretPermanentUpgrades perma in permanentUpgrades)
            {
                if(perma.turretType == turret)
                {
                    foreach(PermanentUpgrade item in perma.upgrades)
                    {
                        if(item.type == type)
                        {
                            item.minMultiplier = newMultiplier;
                            return;
                        }
                    }
                }
            }
            Debug.LogWarning("Warning! could not find multiplier");
        }
    }
}