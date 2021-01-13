using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace SerenityGarden
{
    public class BattleStageStateManager : MonoBehaviour
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

        private GamePauseManager pauseManager;
        private InputManager inputManager;
        private bool spawnedAllEnemies = false;

        private void Start()
        {
            pauseManager = GamePauseManager.instance;
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
            //pauseManager._PauseGame();
        }

        private void GameWon()
        {
            inputManager.AddOnPressEvent(ReloadScene);
            gameWonCanvas.SetActive(true);
            //pauseManager._PauseGame();
        }

        private void ReloadScene()
        {
            SceneManager.LoadScene("StageSelection");
        }
    }
}