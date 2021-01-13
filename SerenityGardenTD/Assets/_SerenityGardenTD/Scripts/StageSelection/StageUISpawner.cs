using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class StageUISpawner : MonoBehaviour
    {
        public GameObject stageUIPrefab;
        public Transform spawnParent;

        public List<StageScriptable> allStages;

        private void Start()
        {
            foreach(StageScriptable item in allStages)
            {
                StageUIBlock script = Instantiate(stageUIPrefab, spawnParent).GetComponent<StageUIBlock>();
                script.InitializeBlock(item);
            }
        }
    }
}