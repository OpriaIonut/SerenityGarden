using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

namespace SerenityGarden
{
    public class StageSelectionManagement : LogicProcessBase
    {
        //Default singleton
        #region Singleton + BaseAwakeCall

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

            BaseAwakeCalls();
        }

        #endregion

        public TextMeshProUGUI descriptionText;
        public TextMeshProUGUI moneyText;

        private StageScriptable selectedStage;

        private void Start()
        {
            BaseStartCalls();
        }

        public override void Init()
        {
            moneyText.text = "$ " + PlayerDataSaver.instance.playerData.Money;
        }

        public override bool HasAllDependencies()
        {
            return PlayerDataSaver.instance != null && PlayerDataSaver.instance.isInitialized;
        }

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