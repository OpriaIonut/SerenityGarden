using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
                inputManager.AddOnPressEvent(_PauseGame);
            }
            else
            {
                inputManager.RemoveOnPressEvent(_PauseGame);
                pausedTime = Time.time - pauseStartTime;
                if (Event_UnpauseGame != null && Event_UnpauseGame.GetInvocationList().Length != 0)
                    Event_UnpauseGame.Invoke();
            }
        }
    }
}