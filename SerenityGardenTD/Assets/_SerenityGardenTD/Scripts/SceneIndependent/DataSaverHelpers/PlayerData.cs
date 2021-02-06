using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class PlayerData
    {
        public List<StageSaveData> stageData;
        public Dictionary<TurretType, TurretUpgradeDataSaver> permanentUpgrades;

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
}