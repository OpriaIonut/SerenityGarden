using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace SerenityGarden
{
    public class StageUISpawner : LogicProcessBase
    {
        public bool disableNotReachedLevels = true;
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
            int previousStarRanking = -1;
            foreach (StageScriptable item in allStages)
            {
                StageUIBlock script = Instantiate(stageUIPrefab, spawnParent).GetComponent<StageUIBlock>();
                script.InitializeBlock(item);

                if(disableNotReachedLevels && previousStarRanking == 0)
                    script.gameObject.GetComponent<Button>().interactable = false;
                previousStarRanking = item.starRanking;
            }
        }
    }
}