using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace SerenityGarden
{
    public class NetworkPlayer : MonoBehaviourPun, IPunObservable
    {
        [HideInInspector] public PhotonView view;

        private string eventsToSend = "";

        private void Start()
        {
            view = GetComponent<PhotonView>();
        }

        public void SendNetworkEvent(string eventName)
        {
            eventsToSend = eventName;
        }

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                stream.SendNext(eventsToSend);
                eventsToSend = "";
            }
            if (stream.IsReading)
            {
                string receivedEvents = stream.ReceiveNext().ToString();
                if (receivedEvents == "GameWon")
                {
                    BattleStageStateManager.instance.netReceivedEvent = true;
                    BattleStageStateManager.instance.GameWon();
                }
                else if (receivedEvents == "PauseGame")
                {
                    GamePauseManager.instance.netReceivedEvent = true;
                    GamePauseManager.instance._PauseGame();
                }
            }
        }
    }
}