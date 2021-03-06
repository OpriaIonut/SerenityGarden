using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace SerenityGarden
{
    public class MainMenuClickEvents : MonoBehaviour
    {
        public GameObject confirmPopup;

        public void OnClick_StartGame()
        {
            SceneManager.LoadScene("StageSelection");
        }

        public void OnClick_Coop()
        {
            SceneManager.LoadScene("CoopLobby");
        }

        public void OnClick_Options()
        {
            //To do: crete this menu
        }

        public void OnClick_Credits()
        {
            //To do: create this menu
        }

        public void OnClick_ExitGame()
        {
            Application.Quit();
        }

        public void OnClick_ResetProgress()
        {
            confirmPopup.SetActive(true);
        }

        public void OnClick_PopupConfirm()
        {
            PlayerDataSaver.instance.ClearSavedData();
             confirmPopup.SetActive(false);
        }

        public void OnClick_PopupCancel()
        {
            confirmPopup.SetActive(false);
        }
    }
}