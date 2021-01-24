using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class SceneDataRetainer : MonoBehaviour
    {
        //Default singleton
        #region Singleton + DontDestroyOnLoad

        public static SceneDataRetainer instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! Multiple instances of SceneDataRetainer in scene. Deleting from: " + gameObject.name);
                Destroy(this);
            }
            else
                instance = this;

            DontDestroyOnLoad(this.gameObject);
        }

        #endregion

        private StageScriptable selectedStage;

        public void SelectStage(StageScriptable stage)
        {
            selectedStage = stage;
        }

        public StageScriptable GetStage()
        {
            return selectedStage;
        }
    }
}