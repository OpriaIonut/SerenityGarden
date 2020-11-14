using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    [CreateAssetMenu(fileName = "Stage", menuName = "ScriptableObjects/Stage")]
    public class StageScriptable : ScriptableObject
    {
        public WaveScriptable[] waves;
        public int stageReward;
        public int starRanking;
        public int rewardPerStar;
    }
}