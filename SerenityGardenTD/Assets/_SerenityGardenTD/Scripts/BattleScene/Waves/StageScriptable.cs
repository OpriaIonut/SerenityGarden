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
        public GameObject mapObj;
        public WaveScriptable[] waves;

        [Header("Stage end variables")]
        public int stageReward;
        public int starRanking;
        public int rewardPerStar;
    }
}