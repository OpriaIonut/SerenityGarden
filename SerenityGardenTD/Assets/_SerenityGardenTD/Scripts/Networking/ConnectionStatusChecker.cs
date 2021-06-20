using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;

namespace SerenityGarden
{
    public class ConnectionStatusChecker : MonoBehaviour
    {
        [Header("UI References")]
        public TextMeshProUGUI connectionStatusText;

        private string connectionStatusMessage = "Connection Status: ";

        public void Update()
        {
            connectionStatusText.text = connectionStatusMessage;
            switch (PhotonNetwork.NetworkClientState)
            {
                case Photon.Realtime.ClientState.PeerCreated:
                    connectionStatusText.text += "Peer Created";
                    break;
                case Photon.Realtime.ClientState.Authenticating:
                    connectionStatusText.text += "Authenticating";
                    break;
                case Photon.Realtime.ClientState.Authenticated:
                    connectionStatusText.text += "Authenticated";
                    break;
                case Photon.Realtime.ClientState.JoiningLobby:
                    connectionStatusText.text += "Joining Lobby";
                    break;
                case Photon.Realtime.ClientState.JoinedLobby:
                    connectionStatusText.text += "Joined Lobby";
                    break;
                case Photon.Realtime.ClientState.DisconnectingFromMasterServer:
                    connectionStatusText.text += "Disconnecting From Master Server";
                    break;
                case Photon.Realtime.ClientState.ConnectingToGameServer:
                    connectionStatusText.text += "Connecting To Game Server";
                    break;
                case Photon.Realtime.ClientState.ConnectedToGameServer:
                    connectionStatusText.text += "Connected To Game Server";
                    break;
                case Photon.Realtime.ClientState.Joining:
                    connectionStatusText.text += "Joining";
                    break;
                case Photon.Realtime.ClientState.Joined:
                    connectionStatusText.text += "Joined";
                    break;
                case Photon.Realtime.ClientState.Leaving:
                    connectionStatusText.text += "Leaving";
                    break;
                case Photon.Realtime.ClientState.DisconnectingFromGameServer:
                    connectionStatusText.text += "Disconnecting From Game Server";
                    break;
                case Photon.Realtime.ClientState.ConnectingToMasterServer:
                    connectionStatusText.text += "Connecting To Master Server";
                    break;
                case Photon.Realtime.ClientState.Disconnecting:
                    connectionStatusText.text += "Disconnecting";
                    break;
                case Photon.Realtime.ClientState.Disconnected:
                    connectionStatusText.text += "Disconnected";
                    break;
                case Photon.Realtime.ClientState.ConnectedToMasterServer:
                    connectionStatusText.text += "Connected To Master Server";
                    break;
                case Photon.Realtime.ClientState.ConnectingToNameServer:
                    connectionStatusText.text += "Connecting To Name Server";
                    break;
                case Photon.Realtime.ClientState.ConnectedToNameServer:
                    connectionStatusText.text += "Connected To Name Server";
                    break;
                case Photon.Realtime.ClientState.DisconnectingFromNameServer:
                    connectionStatusText.text += "Disconnecting From Name Server";
                    break;
                case Photon.Realtime.ClientState.ConnectWithFallbackProtocol:
                    connectionStatusText.text += "Connect With Fallback Protocol";
                    break;
            }
        }
    }
}