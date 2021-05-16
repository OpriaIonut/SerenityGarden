using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

namespace SerenityGarden
{
    public class RaidStageSelection : LogicProcessBase
    {
        public StageScriptable stage;

        private bool disconnect = false;
        private float disconnectStartTime = 0;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
        }

        private void Update()
        {
            BaseUpdateCalls();

            //if(disconnect && Time.time - disconnectStartTime > 5.0f)
            //{
            //    SceneManager.LoadScene("MainMenu");
            //}
        }

        public void OnClick_Back()
        {
            if (PhotonNetwork.InLobby || PhotonNetwork.InRoom || PhotonNetwork.IsConnected)
            {
                PhotonNetwork.Disconnect();
                disconnect = true;
                disconnectStartTime = Time.time;
            }
            //else
            //{
                SceneManager.LoadScene("MainMenu");
            //}
        }

        public override bool HasAllDependencies()
        {
            return SceneDataRetainer.instance != null;
        }

        public override void Init()
        {
            SceneDataRetainer.instance.SelectStage(stage);
        }
    }
}