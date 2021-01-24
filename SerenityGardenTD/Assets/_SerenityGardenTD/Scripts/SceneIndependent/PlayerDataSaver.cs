using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

namespace SerenityGarden
{
    public class StageSaveData
    {
        public string stageName;
        public int stageStars;

        public StageSaveData(string _name, int _stars)
        {
            stageName = _name;
            stageStars = _stars;
        }
    }

    public class PlayerData
    {
        public List<StageSaveData> stageData;

        private int money;
        public int Money
        {
            get { return money; }
            set { money = value; }
        }

        public PlayerData()
        {
            stageData = new List<StageSaveData>();
        }
    }

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

        private StageScriptable[] stages;
        public void SetStages(StageScriptable[] _stages) { stages = _stages; }

        private string savePath;


        public override void Init()
        {
            savePath = Application.streamingAssetsPath + "/saveData.txt";
            LoadData();
        }

        public override bool HasAllDependencies()
        {
            return true;
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
            foreach(StageSaveData data in playerData.stageData)
            {
                fileData += "\n" + data.stageName + " " + data.stageStars;
            }
            File.WriteAllText(savePath, fileData);
        }

        private void LoadData()
        {
            //If we have a save file
            if (File.Exists(savePath))
            {
                string fileData = File.ReadAllText(savePath);
                string[] rows = fileData.Split('\n');

                //Load the data from it
                playerData = new PlayerData();
                playerData.Money = int.Parse(rows[0]);
                for(int rowIndex = 1; rowIndex < rows.Length; rowIndex++)
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

            playerData.Money = 0;
            SaveData();
        }
    }
}
