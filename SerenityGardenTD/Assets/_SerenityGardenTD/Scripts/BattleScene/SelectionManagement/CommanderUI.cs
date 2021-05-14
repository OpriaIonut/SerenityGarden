using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class CommanderUI : LogicProcessBase
    {
        public bool selectDestination = false;
        public GameObject commanderUI;
        public Material powerupMaterial;

        [HideInInspector] public bool netReceivedUnpowerupEvent = false;
        public Commander commander;
        public Commander otherPlayerCommander;

        private SceneClickManager clickManager;

        private List<Material> powerupPreviousMaterials;
        private void Awake()
        {
            base.BaseAwakeCalls();
        }

        private void Start()
        {
            powerupPreviousMaterials = new List<Material>();
            clickManager = FindObjectOfType<SceneClickManager>();
            base.BaseStartCalls();
        }

        private void Update()
        {
            if (!GamePauseManager.instance.GamePaused)
                base.BaseUpdateCalls();
        }

        public void SelectCommander()
        {
            if (!GamePauseManager.instance.GamePaused)
            {
                if (clickManager.selectedCommander == null)
                    commanderUI.SetActive(false);
                else
                {
                    //If he didn't reach the destination, it means that it is still moving, and we want to stop all interaction while that happens
                    if (clickManager.selectedCommander.ReachedDestination == false)
                    {
                        commanderUI.SetActive(false);
                        clickManager.selectedCommander.DrawRange(false);
                        clickManager.selectedCommander = null;
                    }
                    else
                    {
                        commanderUI.SetActive(true);
                        clickManager.selectedCommander.DrawRange(true);
                    }
                }
            }
        }

        public bool SelectPowerupTarget(TurretBase selectedTurret)
        {
            BuildableTurret buildable = selectedTurret.gameObject.GetComponent<BuildableTurret>();
            if (buildable)
            {
                commander.PowerupTurret(buildable);
                return true;
            }
            return false;
        }

        public void SetCommanderDestination(HexagonalBlock destination)
        {
            if (!GamePauseManager.instance.GamePaused)
            {
                commander.EndBlock = destination;
                commander.ReachedDestination = false;
            }
        }

        public void PowerupTarget(GameObject target)
        {
            MeshRenderer[] renderers = target.gameObject.GetComponentsInChildren<MeshRenderer>();
            foreach (MeshRenderer rend in renderers)
            {
                powerupPreviousMaterials.Add(rend.material);
                Color col = rend.material.color;
                rend.material = powerupMaterial;
                rend.material.SetColor("Color_62F993A2", col);
            }
        }

        /// <summary>
        /// Called by button press, in order to start moving the target
        /// </summary>
        public void _StartDestinationSearch()
        {
            if (!GamePauseManager.instance.GamePaused)
            {
                clickManager.selectedCommander.DrawRange(false);
                selectDestination = true;
                commanderUI.SetActive(false);
            }
        }

        /// <summary>
        /// Called by button press on the button that appears when the commander is powering up a turret. It will remove the commander from the turret and move him to the closest available block.
        /// </summary>
        public void _UnpowerupTurret()
        {
            if(clickManager.selectedTurret != null)
            {
                BuildableTurret buildable = clickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
                if(buildable != null)
                {
                    buildable.HasCommander = false;

                    int listIndex = 0;
                    MeshRenderer[] renderers = buildable.gameObject.gameObject.GetComponentsInChildren<MeshRenderer>();
                    foreach (MeshRenderer rend in renderers)
                    {
                        rend.material = powerupPreviousMaterials[listIndex];
                        listIndex++;
                    }

                    Commander commanderToUse = commander;
                    
                    if (netReceivedUnpowerupEvent)
                    {
                        netReceivedUnpowerupEvent = false;
                        commanderToUse = otherPlayerCommander;
                        
                    }
                    else if (PhotonNetwork.IsConnectedAndReady)
                    {
                        NetworkPlayer[] players = FindObjectsOfType<NetworkPlayer>();
                        foreach (NetworkPlayer player in players)
                        {
                            if (player.view.IsMine)
                            {
                                player.SendNetworkEvent("UnpowerupTurret", clickManager.selectedTurret.name);
                                break;
                            }
                        }
                    }

                    commanderToUse.gameObject.SetActive(true);
                    commanderToUse.UnpowerupTurret(buildable);

                    clickManager.DisablePreviousStates();
                    clickManager.selectedTurret = null;
                    clickManager.UpdateSelectedReferences();
                }
            }
        }

        public override void Init()
        {
            //Intentionally left empty. If you have functionality to add here, please do so.
        }

        public override bool HasAllDependencies()
        {
            if (commander == null)
                commander = FindObjectOfType<Commander>();
            return commander != null && commander.isInitialized;
        }
    }
}