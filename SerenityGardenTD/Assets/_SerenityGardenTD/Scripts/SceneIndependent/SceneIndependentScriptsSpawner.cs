using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class SceneIndependentScriptsSpawner : MonoBehaviour
    {
        public StageScriptable[] stages;
        private void Start()
        {
            if (SceneDataRetainer.instance == null && PlayerDataSaver.instance == null)
            {
                GameObject newObj = new GameObject("SceneIndependentScripts");
                newObj.AddComponent<SceneDataRetainer>();
                PlayerDataSaver dataSaver = newObj.AddComponent<PlayerDataSaver>();
                dataSaver.SetStages(stages);
            }
            Destroy(this.gameObject);
        }
    }
}