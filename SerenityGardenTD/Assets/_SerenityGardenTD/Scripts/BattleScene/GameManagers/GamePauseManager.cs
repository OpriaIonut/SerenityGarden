using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

namespace SerenityGarden
{
    public class GamePauseManager : MonoBehaviour
    {

        //Default singleton
        #region Singleton

        public static GamePauseManager instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! Multiple instances of GamePauseManager in scene. Deleting from: " + gameObject.name);
                Destroy(this);
            }
            else
                instance = this;
        }

        #endregion

        public GameObject pauseMenu;
        public GameObject confirmationMenu;
        public TextMeshProUGUI confirmationText;

        private static bool gamePaused = false;
        public static bool GamePaused { get { return gamePaused; } }

        private static float pausedTime;
        public static float PausedTime { get { return pausedTime; } }

        public delegate void UnpauseGameEvent();
        private static UnpauseGameEvent Event_UnpauseGame;
        public static void AddUnpauseEvent(UnpauseGameEvent subscriber) { Event_UnpauseGame += subscriber; }
        public static void RemoveUnpauseEvent(UnpauseGameEvent unsubscriber) { Event_UnpauseGame -= unsubscriber; }

        private float pauseStartTime;

        private InputManager inputManager;
        private void Start()
        {
            inputManager = InputManager.instance;
        }

        public void _PauseGame()
        {
            gamePaused = !gamePaused;
            pauseMenu.SetActive(gamePaused);
            if(gamePaused == true)
            {
                pauseStartTime = Time.time;
            }
            else
            {
                pausedTime = Time.time - pauseStartTime;
                if (Event_UnpauseGame != null && Event_UnpauseGame.GetInvocationList().Length != 0)
                    Event_UnpauseGame.Invoke();
            }
        }

        private bool exitLevel = false;
        public void OnClick_ExitLevel()
        {
            exitLevel = true;
            confirmationMenu.SetActive(true);
            confirmationText.text = "Are you sure you want to exit the level?";
        }

        public void OnClick_ExitGame()
        {
            exitLevel = false;
            confirmationMenu.SetActive(true);
            confirmationText.text = "Are you sure you want to quit the game?";
        }

        public void OnClick_PopupConfirm()
        {
            if (exitLevel)
                SceneManager.LoadScene("StageSelection");
            else
                Application.Quit();
        }
        
        public void OnClick_PopupCancel()
        {
            confirmationMenu.SetActive(false);
        }
    }
}