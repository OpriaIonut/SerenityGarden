using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    [CreateAssetMenu(fileName = "Stage", menuName = "ScriptableObjects/Stage")]
    public class StageScriptable : ScriptableObject
    {
        [Header("Stage init variables")]
        public string stageName;
        public string stageFilePath;
        public GameObject mapObj;
        public WaveScriptable[] waves;

        [Header("Raid stage")]
        public bool isBossStage;

        [Header("Stage end variables")]
        public int baseReward;
        public int starRanking;
        public int rewardPerStar;
    }
}