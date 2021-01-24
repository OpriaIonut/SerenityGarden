using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class StageUISpawner : LogicProcessBase
    {
        public GameObject stageUIPrefab;
        public Transform spawnParent;

        public List<StageScriptable> allStages;

        public void Awake()
        {
            BaseAwakeCalls();
        }

        public override bool HasAllDependencies()
        {
            return PlayerDataSaver.instance != null && PlayerDataSaver.instance.isInitialized;
        }

        public override void Init()
        {
            foreach (StageScriptable item in allStages)
            {
                StageUIBlock script = Instantiate(stageUIPrefab, spawnParent).GetComponent<StageUIBlock>();
                script.InitializeBlock(item);
            }
        }
    }
}