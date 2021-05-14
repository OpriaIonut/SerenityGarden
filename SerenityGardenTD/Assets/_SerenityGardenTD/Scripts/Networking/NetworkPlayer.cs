using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

namespace SerenityGarden
{
    public class NetworkPlayer : MonoBehaviourPunCallbacks, IPunObservable
    {
        [HideInInspector] public PhotonView view;

        private CommanderUI commanderUI;
        private SceneClickManager clickManager;

        private string eventsToSend = "";
        private string eventParamToSend = "";

        private void Start()
        {
            view = GetComponent<PhotonView>();
            commanderUI = FindObjectOfType<CommanderUI>();
            clickManager = FindObjectOfType<SceneClickManager>();
        }

        public void SendNetworkEvent(string eventName, string eventParam = "")
        {
            eventsToSend = eventName;
            eventParamToSend = eventParam;
        }

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                stream.SendNext(eventsToSend);
                stream.SendNext(eventParamToSend);
                eventsToSend = "";
                eventParamToSend = "";
            }
            if (stream.IsReading)
            {
                string receivedEvents = stream.ReceiveNext().ToString();
                string receivedEventParam = stream.ReceiveNext().ToString();

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
                else if (receivedEvents == "UnpowerupTurret")
                {
                    GameObject objToFind = GameObject.Find(receivedEventParam); //Name of the turret to unpowerup
                    if (objToFind != null)
                    {
                        clickManager.selectedTurret = objToFind.GetComponent<TurretBase>();
                        commanderUI.netReceivedUnpowerupEvent = true;
                        commanderUI._UnpowerupTurret();
                    }
                }
            }
        }

        private IEnumerator SetCommanderReference()
        {
            yield return new WaitForSeconds(1.0f);

            Commander[] commanders = FindObjectsOfType<Commander>();
            Debug.Log(commanders.Length);
            foreach (Commander chief in commanders)
            {
                if (chief.photonView.IsMine)
                    commanderUI.commander = chief;
                else
                    commanderUI.otherPlayerCommander = chief;
            }
        }

        public override void OnPlayerEnteredRoom(Player newPlayer)
        {
            base.OnPlayerEnteredRoom(newPlayer);
            StartCoroutine("SetCommanderReference");
        }

        public override void OnJoinedRoom()
        {
            base.OnJoinedRoom();
            StartCoroutine("SetCommanderReference");
        }

        public override void OnPlayerLeftRoom(Player otherPlayer)
        {
            base.OnPlayerLeftRoom(otherPlayer);
        }
    }
}