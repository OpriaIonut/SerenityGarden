using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;

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
            string fileData = "" + playerData.Money;
            fileData += "\n" + playerData.stageData.Count;
            foreach(StageSaveData data in playerData.stageData)
            {
                fileData += "\n" + data.stageName + " " + data.stageStars;
            }

            TurretPermanentUpgrades[] upgrades = dataRetainer.GetPermanentUpgrades();

            fileData += "\n" + upgrades.Length;
            foreach (TurretPermanentUpgrades item in upgrades)
            {
                fileData += "\n" + item.turretType.ToString() + " " + item.upgrades[0].currentLevel + " " + item.upgrades[1].currentLevel + " " + item.upgrades[2].currentLevel;
            }
            FileManager.SetFileContents(false, fileData, "saveData.txt");
        }

        private void LoadData()
        {
            string contents = FileManager.GetFileContents(false, "saveData.txt");

            //If we have a save file
            if (contents != null && contents != "")
            {
                try
                {
                    string[] rows = contents.Split('\n');

                    //Load the data from it
                    playerData = new PlayerData();
                    playerData.Money = int.Parse(rows[0]);
                    int stageCount = int.Parse(rows[1]);
                    for (int rowIndex = 2; rowIndex < 2 + stageCount; rowIndex++)
                    {
                        string[] rowSplit = rows[rowIndex].Split(' ');
                        playerData.stageData.Add(new StageSaveData(rowSplit[0], int.Parse(rowSplit[1])));
                    }
                    foreach (StageScriptable stage in stages)
                    {
                        for (int index = 0; index < playerData.stageData.Count; index++)
                        {
                            if (playerData.stageData[index].stageName == stage.name)
                            {
                                stage.starRanking = playerData.stageData[index].stageStars;
                                break;
                            }
                        }
                    }

                    TurretPermanentUpgrades[] upgrades = dataRetainer.GetPermanentUpgrades();
                    foreach (TurretPermanentUpgrades item in upgrades)
                    {
                        item.upgrades[0].currentLevel = 0;
                        item.upgrades[1].currentLevel = 0;
                        item.upgrades[2].currentLevel = 0;
                    }

                    int permanentUpgradeCount = int.Parse(rows[2 + stageCount]) + 2 + stageCount;
                    for(int index = 2 + stageCount; index < permanentUpgradeCount; index++)
                    {
                        string[] rowSplit = rows[index].Split(' ');
                        foreach (TurretPermanentUpgrades item in upgrades)
                        {
                            if(rowSplit[0] == item.turretType.ToString())
                            {
                                item.upgrades[0].currentLevel = int.Parse(rowSplit[1]);
                                item.upgrades[1].currentLevel = int.Parse(rowSplit[2]);
                                item.upgrades[2].currentLevel = int.Parse(rowSplit[3]);
                            }
                        }
                    }
                }
                catch (Exception)
                {
                    Debug.LogWarning("Save file was corrupted. Reseting data...");

                    //If the file doesn't exist, initialize all data with default values
                    playerData = new PlayerData();
                    for (int index = 0; index < stages.Length; index++)
                    {
                        playerData.stageData.Add(new StageSaveData(stages[index].name, 0));
                    }
                    playerData.Money = 0;

                    ClearSavedData();
                }
            }
            else
            {
                //If the file doesn't exist, initialize all data with default values
                playerData = new PlayerData();
                for(int index = 0; index < stages.Length; index++)
                {
                    playerData.stageData.Add(new StageSaveData(stages[index].name, 0));
                }
                playerData.Money = 0;
            }
        }

        public void ClearSavedData()
        {
            foreach (StageScriptable data in stages)
                data.starRanking = 0;

            foreach (StageSaveData data in playerData.stageData)
                data.stageStars = 0;

            TurretPermanentUpgrades[] upgrades = dataRetainer.GetPermanentUpgrades();
            foreach (TurretPermanentUpgrades item in upgrades)
            {
                item.upgrades[0].currentLevel = 0;
                item.upgrades[1].currentLevel = 0;
                item.upgrades[2].currentLevel = 0;
            }

            playerData.Money = 0;
            SaveData();
        }
    }
}
