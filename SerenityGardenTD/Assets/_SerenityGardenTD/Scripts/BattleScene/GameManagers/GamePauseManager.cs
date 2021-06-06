using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;

namespace SerenityGarden
{
    public class GamePauseManager : MonoBehaviourPunCallbacks
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

        private bool gamePaused = false;
        public bool GamePaused { get { return gamePaused; } }

        private float pausedTime;
        public float PausedTime { get { return pausedTime; } }

        public delegate void PauseGameEvent();
        private PauseGameEvent Event_PauseGame;
        public void AddPauseEvent(PauseGameEvent subscriber) { Event_PauseGame += subscriber; }
        public void RemovePauseEvent(PauseGameEvent unsubscriber) { Event_PauseGame -= unsubscriber; }

        public delegate void UnpauseGameEvent();
        private UnpauseGameEvent Event_UnpauseGame;
        public void AddUnpauseEvent(UnpauseGameEvent subscriber) { Event_UnpauseGame += subscriber; }
        public void RemoveUnpauseEvent(UnpauseGameEvent unsubscriber) { Event_UnpauseGame -= unsubscriber; }

        private float pauseStartTime;
        public float PauseStartTime { get { return pauseStartTime; } }

        [HideInInspector] public bool netReceivedEvent = false;

        public void _PauseGame()
        {
            gamePaused = !gamePaused;
            pauseMenu.SetActive(gamePaused);
            if(gamePaused == true)
            {
                pauseStartTime = Time.time;
                if (Event_PauseGame != null && Event_PauseGame.GetInvocationList().Length != 0)
                    Event_PauseGame.Invoke();
            }
            else
            {
                pausedTime = Time.time - pauseStartTime;
                if (Event_UnpauseGame != null && Event_UnpauseGame.GetInvocationList().Length != 0)
                    Event_UnpauseGame.Invoke();
            }

            if (netReceivedEvent)
            {
                netReceivedEvent = false;
                return;
            }

            if (PhotonNetwork.IsConnectedAndReady)
            {
                NetworkPlayer[] players = FindObjectsOfType<NetworkPlayer>();
                foreach (NetworkPlayer player in players)
                {
                    if (player.view.IsMine)
                    {
                        player.SendNetworkEvent("PauseGame");
                        break;
                    }
                }
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

        private bool quit = false;
        public void OnClick_PopupConfirm()
        {
            if (PhotonNetwork.IsConnected)
            {
                if (exitLevel)
                    quit = false;
                else
                    quit = true;
                PhotonNetwork.Disconnect();
            }
            else
            {
                if (exitLevel)
                    SceneManager.LoadScene("StageSelection");
                else
                    Application.Quit();
            }
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            if(quit)
                Application.Quit();
            else
                SceneManager.LoadScene("StageSelection");
        }

        public void OnClick_PopupCancel()
        {
            confirmationMenu.SetActive(false);
        }
    }
}