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

        public override void OnPlayerEnteredRoom(Player newPlayer)
        {
            Debug.Log("Player entered room");
            base.OnPlayerEnteredRoom(newPlayer);
        }

        public override void OnConnected()
        {
            Debug.Log("OnConnected");
            base.OnConnected();
        }

        public override void OnConnectedToMaster()
        {
            Debug.Log("OnConnectedToMaster");
            base.OnConnectedToMaster();
        }

        public override void OnCreatedRoom()
        {
            Debug.Log("OnCreatedRoom");
            base.OnCreatedRoom();
        }

        public override void OnCreateRoomFailed(short returnCode, string message)
        {
            Debug.Log("OnCreateRoomFailed");
            base.OnCreateRoomFailed(returnCode, message);
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            Debug.Log("OnDisconnected");
            base.OnDisconnected(cause);
        }

        public override void OnJoinedLobby()
        {
            Debug.Log("OnJoinedLobby");
            base.OnJoinedLobby();
        }

        public override void OnJoinRandomFailed(short returnCode, string message)
        {
            Debug.Log("OnJoinRandomFailed");
            base.OnJoinRandomFailed(returnCode, message);
        }

        public override void OnLeftLobby()
        {
            Debug.Log("OnLeftLobby");
            base.OnLeftLobby();
        }

        public override void OnLeftRoom()
        {
            Debug.Log("OnLeftRoom");
            base.OnLeftRoom();
        }

        public override void OnJoinRoomFailed(short returnCode, string message)
        {
            Debug.Log("OnJoinRoomFailed");
            base.OnJoinRoomFailed(returnCode, message);
        }

        public override void OnErrorInfo(ErrorInfo errorInfo)
        {
            Debug.Log("OnErrorInfo");
            base.OnErrorInfo(errorInfo);
        }

        public override void OnJoinedRoom()
        {
            Debug.Log("Player left room");
            base.OnJoinedRoom();
        }

        public override void OnPlayerLeftRoom(Player otherPlayer)
        {
            Debug.Log("Player left room");
            base.OnPlayerLeftRoom(otherPlayer);
        }
    }
}