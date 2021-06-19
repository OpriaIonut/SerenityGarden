using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class StageUISpawner : LogicProcessBase
    {
        public GameObject stageUIPrefab;
        public Transform spawnParent;

        public void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
        }

        private void Update()
        {
            BaseUpdateCalls();
        }

        public override bool HasAllDependencies()
        {
            return PlayerDataSaver.instance != null && PlayerDataSaver.instance.isInitialized;
        }

        public override void Init()
        {
            StageScriptable[] allStages = PlayerDataSaver.instance.GetStages();
            foreach (StageScriptable item in allStages)
            {
                StageUIBlock script = Instantiate(stageUIPrefab, spawnParent).GetComponent<StageUIBlock>();
                script.InitializeBlock(item);
            }
        }
    }
}