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