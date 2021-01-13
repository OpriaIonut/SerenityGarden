using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

namespace SerenityGarden
{
    public class StageSelectionManagement : MonoBehaviour
    {
        //Default singleton
        #region Singleton

        public static StageSelectionManagement instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! Multiple instances of StageSelectionManagement in scene. Deleting from: " + gameObject.name);
                Destroy(this);
            }
            else
                instance = this;
        }

        #endregion

        public TextMeshProUGUI descriptionText;

        private StageScriptable selectedStage;

        public void SelectStage(StageUIBlock stageBlock)
        {
            descriptionText.text = stageBlock.generatedDescription;
            selectedStage = stageBlock.stage;
        }

        public void _StartStage()
        {
            if (selectedStage != null)
            {
                SceneDataRetainer.instance.SelectStage(selectedStage);
                SceneManager.LoadScene("BattleScene");
            }
        }

        public void _BackButtonClick()
        {
            SceneManager.LoadScene("MainMenu");
        }

        public void _ShopButtonClick()
        {
            SceneManager.LoadScene("Shop");
        }
    }
}