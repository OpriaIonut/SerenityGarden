using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace SerenityGarden
{
    public enum PhotonObj
    {
        PhotonPlayer,
        PlayerBase,
        Commander,
        Bullet, 
        TurretElectricFence,
        TurretExcavator,
        TurretMachineCannon,
        TurretMachineGun,
        TurretLaser,
        TurretVulkan,
        EnemyAmbusher,
        EnemyFlying,
        EnemyMelee,
        EnemyRanged
    }

    public class InstantiationManager : MonoBehaviour
    {
        #region Singleton
        public static InstantiationManager instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! There are multiple instances of InstantiationManager in the scene. Deleting from " + gameObject.name);
                return;
            }
            else
                instance = this;
        }
        #endregion



        public GameObject InstantiateWithCheck(GameObject obj, Vector3 pos, Quaternion rot, PhotonObj objType, object[] initData = null)
        {
            if(NetworkManager.instance != null)
            {
                string path = GetObjPath(objType);
                GameObject clone;
                if(initData == null)
                    clone = PhotonNetwork.Instantiate(path, pos, rot);
                else
                    clone = PhotonNetwork.Instantiate(path, pos, rot, 0, initData);
                clone.name = PhotonNetwork.NetworkingClient.NickName + " " + clone.name;
                return clone;
            }
            else
            {
                return Instantiate(obj, pos, rot);
            }
        }

        private string GetObjPath(PhotonObj obj)
        {
            switch (obj)
            {
                case PhotonObj.PhotonPlayer:
                    return "PhotonPrefabs/PhotonPlayer";
                case PhotonObj.PlayerBase:
                    return "PhotonPrefabs/PhotonPlayerBase";
                case PhotonObj.Commander:
                    return "PhotonPrefabs/PhotonCommander";
                case PhotonObj.Bullet:
                    return "PhotonPrefabs/PhotonBullet";
                case PhotonObj.TurretElectricFence:
                    return "PhotonPrefabs/PhotonElectricFence";
                case PhotonObj.TurretExcavator:
                    return "PhotonPrefabs/PhotonExcavator";
                case PhotonObj.TurretMachineCannon:
                    return "PhotonPrefabs/PhotonMachineCannon";
                case PhotonObj.TurretMachineGun:
                    return "PhotonPrefabs/PhotonMachineGun";
                case PhotonObj.TurretLaser:
                    return "PhotonPrefabs/PhotonLaser";
                case PhotonObj.TurretVulkan:
                    return "PhotonPrefabs/PhotonVulkan";
                case PhotonObj.EnemyAmbusher:
                    return "PhotonPrefabs/PhotonEnemyAmbusher";
                case PhotonObj.EnemyFlying:
                    return "PhotonPrefabs/PhotonEnemyFlying";
                case PhotonObj.EnemyMelee:
                    return "PhotonPrefabs/PhotonEnemyMelee";
                case PhotonObj.EnemyRanged:
                    return "PhotonPrefabs/PhotonEnemyRanged";
                default:
                    return "";
            }
        }
    }
}
