using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class CommanderUI : LogicProcessBase
    {
        public bool selectDestination = false;
        public GameObject commanderUI;

        private SceneClickManager clickManager;
        private Commander commander;

        private void Awake()
        {
            base.BaseAwakeCalls();
        }

        private void Start()
        {
            clickManager = FindObjectOfType<SceneClickManager>();
            base.BaseStartCalls();
        }

        private void Update()
        {
            if (!GamePauseManager.GamePaused)
                base.BaseUpdateCalls();
        }

        public void SelectCommander()
        {
            if (!GamePauseManager.GamePaused)
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

        public bool PowerupTurret(TurretBase selectedTurret)
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
            if (!GamePauseManager.GamePaused)
            {
                commander.EndBlock = destination;
                commander.ReachedDestination = false;
            }
        }

        /// <summary>
        /// Called by button press, in order to start moving the target
        /// </summary>
        public void _StartDestinationSearch()
        {
            if (!GamePauseManager.GamePaused)
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
                    commander.gameObject.SetActive(true);

                    //Find the place to position the commander;
                    HexagonalBlock closestPos = null;
                    for(float range = 1; true; range += 1)
                    {
                        Collider[] hits = Physics.OverlapSphere(buildable.transform.position, range);
                        foreach(Collider item in hits)
                        {
                            HexagonalBlock current = item.transform.gameObject.GetComponent<HexagonalBlock>();
                            if(current != null && current.Type == HexagonType.Walkable)
                            {
                                closestPos = current;
                                break;
                            }
                        }
                        if (closestPos != null)
                            break;
                    }
                    commander.CurrentBlock = closestPos;
                    commander.EndBlock = closestPos;
                    commander.ReachedDestination = false;
                    commander.FindNextBlock();

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