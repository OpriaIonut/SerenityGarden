using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using Photon.Pun;
using Photon.Realtime;

namespace SerenityGarden
{
    public class BattleStageStateManager : MonoBehaviourPunCallbacks
    {
        //Default singleton
        #region Singleton

        public static BattleStageStateManager instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! Multiple instances of BattleStageStateManager in scene. Deleting from: " + gameObject.name);
                Destroy(this);
            }
            else
                instance = this;
        }

        #endregion

        public GameObject gameWonCanvas;
        public GameObject gameOverCanvas;
        public GameObject starsPanel;
        public GameObject[] starsUI;
        public TextMeshProUGUI moneyWonText;

        private InputManager inputManager;
        private bool spawnedAllEnemies = false;

        #region Networking

        private bool netSatrtGame = false;

        #endregion

        private void Start()
        {
            inputManager = InputManager.instance;

            gameOverCanvas.SetActive(false);
            gameWonCanvas.SetActive(false);
        }

        private float lastCheckTime = 0;
        private void Update()
        {
            if (spawnedAllEnemies && Time.time - lastCheckTime > 0.5f)
            {
                EnemyBase[] enemies = FindObjectsOfType<EnemyBase>();
                if(enemies.Length == 0)
                {
                    GameWon();
                    spawnedAllEnemies = false;
                }
            }
        }

        public void SpawnedAllEnemies()
        {
            spawnedAllEnemies = true;
        }

        public void GameOver()
        {
            inputManager.AddOnPressEvent(ReloadScene);
            gameOverCanvas.SetActive(true);
            starsPanel.SetActive(true);
            //pauseManager._PauseGame();

            int moneyWon = GetMoneyWon(false, 0);
            moneyWonText.text = "Money won: $" + moneyWon;

            PlayerDataSaver.instance.UpdatePlayerData(SceneDataRetainer.instance.GetStage(), 0, moneyWon);
        }

        private void GameWon()
        {
            inputManager.AddOnPressEvent(ReloadScene);
            gameWonCanvas.SetActive(true);
            starsPanel.SetActive(true);
            //pauseManager._PauseGame();

            int starsWon = GetStarsWon();
            int moneyWon = GetMoneyWon(true, starsWon);

            for (int index = 0; index < starsWon; index++)
                starsUI[index].SetActive(true);
            moneyWonText.text = "Money won: $" + moneyWon;

            PlayerDataSaver.instance.UpdatePlayerData(SceneDataRetainer.instance.GetStage(), starsWon, moneyWon);
        }

        private int GetStarsWon()
        {
            PlayerBase playerBase = FindObjectOfType<PlayerBase>();
            int starsWon = 0;
            if(playerBase != null)
            {
                starsWon++;
                if(playerBase.Health > playerBase.MaxHealth * 0.4f)
                {
                    starsWon++;
                    if(playerBase.Health > playerBase.MaxHealth * 0.9f)
                        starsWon++;
                }
            }
            return starsWon;
        }

        private int GetMoneyWon(bool gameWon, int starsWon)
        {
            //To do: take into account the number of enemies killed too, so that you get something when you die too

            int rewardMoney = 0;
            if(gameWon)
            {
                StageScriptable selectedStage = SceneDataRetainer.instance.GetStage();
                rewardMoney += selectedStage.baseReward;

                int starDiff = Mathf.Abs(selectedStage.starRanking - starsWon);
                if(starDiff != 0)
                {
                    rewardMoney += selectedStage.rewardPerStar * starDiff;
                }
            }
            return rewardMoney;
        }

        private void ReloadScene()
        {
            if (PhotonNetwork.IsConnected)
                PhotonNetwork.Disconnect();
            else
                SceneManager.LoadScene("StageSelection");
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            SceneManager.LoadScene("CoopLobby");
        }
    }
}