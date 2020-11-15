﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class SceneClickManager : MonoBehaviour
    {
        [Header("Debug")]
        //Objects that we click last
        public TurretBase selectedTurret;
        public HexagonalBlock selectedHexagon;
        public EnemyBase selectedEnemy;
        public Commander selectedCommander;

        //Reference to systems that are dependent on what we clicked 
        private InputManager inputManager;
        private TurretBuildManager buildManager;
        private LockOnManager lockOnManager;
        private CommanderUI commanderUI;

        private void Start()
        {
            inputManager = FindObjectOfType<InputManager>();
            buildManager = FindObjectOfType<TurretBuildManager>();
            lockOnManager = FindObjectOfType<LockOnManager>();
            commanderUI = FindObjectOfType<CommanderUI>();
            inputManager.AddOnPressEvent(OnPressHandler);
        }

        /// <summary>
        /// Called when we clicked anywhere
        /// </summary>
        private void OnPressHandler()
        {
            if (!GamePauseManager.GamePaused)
            {
                //If we clicked a turret in the previous click, then disable it
                if (selectedTurret != null)
                {
                    selectedTurret.DrawRange(false);
                    selectedTurret = null;
                }
                if(selectedCommander != null && commanderUI.selectDestination == false)
                {

                    selectedCommander.DrawRange(false);
                    selectedCommander = null;
                }

                if (inputManager.clickedObject != null)
                {
                    //For the hexagon we don't want to get the parent, because it is an empty GameObject
                    selectedHexagon = inputManager.clickedObject.GetComponent<HexagonalBlock>();
                }
                if (inputManager.clickedParent != null)
                {
                    //For the turret and enemies, we want to get the parent, because they will have GFX child objects, that will contain the actual colliders, but the scripts will sit on the parent objects
                    selectedTurret = inputManager.clickedParent.GetComponent<TurretBase>();
                    selectedEnemy = inputManager.clickedParent.GetComponent<EnemyBase>();
                    selectedCommander = inputManager.clickedParent.GetComponent<Commander>();
                }

                if (commanderUI.selectDestination && selectedHexagon != null)
                {
                    commanderUI.SetCommanderDestination(selectedHexagon);
                }
                else
                {
                    commanderUI.selectDestination = false;

                    //Call the dependent methods, so that they can select/deselect
                    buildManager.SelectTurret();
                    buildManager.SelectHexagon();
                    lockOnManager.SelectEnemy();
                    commanderUI.SelectCommander();
                }
            }
        }
    }
}