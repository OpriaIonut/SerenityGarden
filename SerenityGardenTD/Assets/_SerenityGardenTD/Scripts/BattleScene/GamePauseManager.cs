using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class GamePauseManager : MonoBehaviour
    {
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
    }
}