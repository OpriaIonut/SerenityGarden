using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System.IO;

namespace SerenityGarden
{
    public class GameSetupController : MonoBehaviour
    {
        private void Start()
        {
            CreatePlayer();
        }

        private void CreatePlayer()
        {
            InstantiationManager.instance.InstantiateWithCheck(null, Vector3.zero, Quaternion.identity, PhotonObj.PhotonPlayer);
        }
    }
}