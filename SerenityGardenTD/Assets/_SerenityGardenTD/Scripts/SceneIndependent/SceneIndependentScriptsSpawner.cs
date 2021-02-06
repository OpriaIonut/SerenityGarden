using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class SceneIndependentScriptsSpawner : MonoBehaviour
    {
        public StageScriptable[] stages;
        public TurretPermanentUpgrades[] permanentUpgrades;

        private void Start()
        {
            if (SceneDataRetainer.instance == null && PlayerDataSaver.instance == null)
            {
                GameObject newObj = new GameObject("SceneIndependentScripts");
                SceneDataRetainer dataRetainer = newObj.AddComponent<SceneDataRetainer>();
                PlayerDataSaver dataSaver = newObj.AddComponent<PlayerDataSaver>();

                dataRetainer.SetPermanentUpgrades(permanentUpgrades);
                dataSaver.SetStages(stages);
            }
            Destroy(this.gameObject);
        }
    }
}