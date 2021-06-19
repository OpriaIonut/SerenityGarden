using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    /// <summary>
    /// Class that will hold all player-related data so it can be saved to the disk.
    /// </summary>
    [System.Serializable]
    public class PlayerData
    {
        [SerializeField] public List<StageSaveData> stageData;

        [SerializeField] private int money;
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
}