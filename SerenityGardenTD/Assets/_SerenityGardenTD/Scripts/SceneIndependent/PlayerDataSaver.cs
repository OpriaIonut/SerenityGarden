using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using Newtonsoft.Json;

namespace SerenityGarden
{
    public class PlayerDataSaver : LogicProcessBase
    {
        //Default singleton
        #region Singleton + DontDestroyOnLoad

        public static PlayerDataSaver instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! Multiple instances of PlayerDataSaver in scene. Deleting from: " + gameObject.name);
                Destroy(this);
            }
            else
                instance = this;

            DontDestroyOnLoad(this.gameObject);
            BaseAwakeCalls();
        }

        #endregion

        public PlayerData playerData;

        private SceneDataRetainer dataRetainer;
        private StageScriptable[] stages;
        public void SetStages(StageScriptable[] _stages) { stages = _stages; }


        private void Start()
        {
            BaseStartCalls();
        }

        public override void Init()
        {
            dataRetainer = SceneDataRetainer.instance;
            LoadData();
        }

        public override bool HasAllDependencies()
        {
            return SceneDataRetainer.instance != null;
        }

        public void UpdatePlayerData(StageScriptable stage, int starsWon, int moneyWon)
        {
            stage.starRanking = starsWon;
            playerData.Money += moneyWon;
            foreach(StageSaveData data in playerData.stageData)
            {
                if(data.stageName == stage.name)
                {
                    data.stageStars = starsWon;
                    break;
                }
            }
            SaveData();
        }

        public void SaveData()
        {
            string playerFileData = JsonConvert.SerializeObject(playerData, Formatting.Indented);
            string permanentUpgradesFileData = JsonConvert.SerializeObject(dataRetainer.GetPermanentUpgrades(), Formatting.Indented);

            playerFileData = DataEncryption.EncryptDecrypt(playerFileData);
            permanentUpgradesFileData = DataEncryption.EncryptDecrypt(permanentUpgradesFileData);

            FileManager.SetFileContents(false, playerFileData, "PlayerSaveData.json");
            FileManager.SetFileContents(false, permanentUpgradesFileData, "PermanentUpgradesSaveData.json");
        }

        public void LoadData()
        {
            try
            {
                string playerFileData = FileManager.GetFileContents(false, "PlayerSaveData.json");
                playerFileData = DataEncryption.EncryptDecrypt(playerFileData);

                playerData = JsonConvert.DeserializeObject<PlayerData>(playerFileData);
                foreach (StageScriptable stage in stages)
                {
                    stage.starRanking = 0;
                    for (int index = 0; index < playerData.stageData.Count; index++)
                    {
                        if (playerData.stageData[index].stageName == stage.name)
                        {
                            stage.starRanking = playerData.stageData[index].stageStars;
                            break;
                        }
                    }
                }
            }
            catch(FileNotFoundException)
            {
                Debug.LogWarning("PlayerSaveData.json was not found");
                ClearSavedData();
            }
            catch(Exception)
            {
                Debug.LogWarning("PlayerSaveData.json was corrupted");
                ClearSavedData();
            }

            try
            {
                string permanentUpgradesFileData = FileManager.GetFileContents(false, "PermanentUpgradesSaveData.json");
                permanentUpgradesFileData = DataEncryption.EncryptDecrypt(permanentUpgradesFileData);
                TurretPermanentUpgrades[] loadedUpgrades = JsonConvert.DeserializeObject<TurretPermanentUpgrades[]>(permanentUpgradesFileData);

                TurretPermanentUpgrades[] dataRetainerUpgrades = dataRetainer.GetPermanentUpgrades();
                for (int index = 0; index < loadedUpgrades.Length; index++)
                {
                    dataRetainerUpgrades[index].upgrades[0] = loadedUpgrades[index].upgrades[0];
                    dataRetainerUpgrades[index].upgrades[1] = loadedUpgrades[index].upgrades[1];
                    dataRetainerUpgrades[index].upgrades[2] = loadedUpgrades[index].upgrades[2];
                }
            }
            catch (FileNotFoundException)
            {
                Debug.LogWarning("PermanentUpgradesSaveData.json was not found!");
                ClearSavedData();
            }
            catch (Exception)
            {
                Debug.LogWarning("PermanentUpgradesSaveData.json was corrupted");
                ClearSavedData();
            }
        }

        public void ClearSavedData()
        {
            foreach (StageScriptable data in stages)
                data.starRanking = 0;

            playerData = new PlayerData();
            for (int index = 0; index < stages.Length; index++)
            {
                playerData.stageData.Add(new StageSaveData(stages[index].name, 0));
            }
            playerData.Money = 0;

            TurretPermanentUpgrades[] upgrades = dataRetainer.GetPermanentUpgrades();
            foreach (TurretPermanentUpgrades item in upgrades)
            {
                item.upgrades[0].currentLevel = 0;
                item.upgrades[1].currentLevel = 0;
                item.upgrades[2].currentLevel = 0;
            }

            SaveData();
        }
    }
}
