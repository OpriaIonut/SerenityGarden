using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;

namespace SerenityGarden
{
    public class GamePauseManager : MonoBehaviourPunCallbacks, IPunObservable
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

        public delegate void UnpauseGameEvent();
        private UnpauseGameEvent Event_UnpauseGame;
        public void AddUnpauseEvent(UnpauseGameEvent subscriber) { Event_UnpauseGame += subscriber; }
        public void RemoveUnpauseEvent(UnpauseGameEvent unsubscriber) { Event_UnpauseGame -= unsubscriber; }

        private float pauseStartTime;

        private bool netTogglePauseGame = false;

        private InputManager inputManager;
        private void Start()
        {
            inputManager = InputManager.instance;
        }

        public void _PauseGame()
        {
            gamePaused = !gamePaused;
            netTogglePauseGame = true;
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

        private bool quit = false;
        public void OnClick_PopupConfirm()
        {
            if (exitLevel)
                quit = false;
            else
                quit = true;
            PhotonNetwork.Disconnect();
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

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if(stream.IsReading)
            {
                string strReceived = (string)stream.ReceiveNext();

                if(strReceived == "TogglePauseGame")
                {
                    _PauseGame();
                    netTogglePauseGame = false;
                }
            }
            if(stream.IsWriting)
            {
                if (netTogglePauseGame)
                {
                    stream.SendNext("TogglePauseGame");
                    netTogglePauseGame = false;
                }
            }
        }
    }
}