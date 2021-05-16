using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

namespace SerenityGarden
{
    public class NetworkManager : MonoBehaviourPunCallbacks
    {
        #region Singleton
        public static NetworkManager instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! There are multiple instances of NetworkManager in the scene. Deleting from " + gameObject.name);
                return;
            }
            else
                instance = this;
        }
        #endregion

        private void Start()
        {
            PhotonNetwork.SendRate = 20;
            PhotonNetwork.SerializationRate = 10;   //Needs to be lower than send rate
            PhotonNetwork.AutomaticallySyncScene = false;
            PhotonNetwork.ConnectUsingSettings();

            InstantiationManager.instance.InstantiateWithCheck(null, Vector3.zero, Quaternion.identity, PhotonObj.PhotonPlayer);
        }

        public override void OnPlayerLeftRoom(Player otherPlayer)
        {
            base.OnPlayerLeftRoom(otherPlayer);
            BattleStageStateManager.instance.ActivatePlayerDisconnectedPanel();
        }
    }
}