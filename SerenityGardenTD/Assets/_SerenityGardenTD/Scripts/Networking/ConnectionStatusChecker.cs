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
            connectionStatusText.text = connectionStatusMessage + PhotonNetwork.NetworkClientState;
        }
    }
}