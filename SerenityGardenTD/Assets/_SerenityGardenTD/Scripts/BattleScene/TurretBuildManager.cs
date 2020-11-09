﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretBuildManager : MonoBehaviour
    {
       [Header("UI components")]
        public GameObject buildMenuUI;
        public GameObject inspectTurretUI;
        public GameObject buildableTurretsUI;
        public GameObject excavatorUI;

        //The prefabs for the turrets that we can build
        public GameObject[] turretPrefabs;

        //Reference to the click manager, because it is dependent on it, to know where to build the turret or what turret to inspect
        private SceneClickManager sceneClickManager;

        private void Start()
        {
            sceneClickManager = FindObjectOfType<SceneClickManager>();
        }

        /// <summary>
        /// Called by the click manager, will set/deselect the current turret
        /// </summary>
        public void SelectTurret()
        {
            if (sceneClickManager.selectedTurret == null)
                inspectTurretUI.SetActive(false);
            else
            {
                inspectTurretUI.SetActive(true);
                sceneClickManager.selectedTurret.DrawRange(true);
            }
        }

        /// <summary>
        /// Will select/deselect the current clicked hexagon. It will show the build menu
        /// </summary>
        public void SelectHexagon()
        {
            //If we clicked something that can't be buil on, then hide all ui
            if (sceneClickManager.selectedHexagon == null || (sceneClickManager.selectedHexagon.Type != HexagonType.ResourceExtraction && sceneClickManager.selectedHexagon.Type != HexagonType.TurretBuildable))
            {
                buildMenuUI.SetActive(false);
                excavatorUI.SetActive(false);
                buildableTurretsUI.SetActive(false);
            }
            else
            {
                //Otherwise, check the type of the hexagon that we clicked on
                buildMenuUI.SetActive(true);
                if(sceneClickManager.selectedHexagon.Type == HexagonType.ResourceExtraction)
                {
                    excavatorUI.SetActive(true);
                    buildableTurretsUI.SetActive(false);
                }
                else
                {
                    //If it isn't a resource spot, then it is a normal spot, so show the full build menu
                    excavatorUI.SetActive(false);
                    buildableTurretsUI.SetActive(true);
                }
            }
        }

        /// <summary>
        /// Build the turret on the selected hexagon
        /// </summary>
        /// <param name="index"></param>
        public void BuildTurret(int index)
        {
            if (sceneClickManager.selectedHexagon.Type != HexagonType.TurretBuildable && sceneClickManager.selectedHexagon.Type != HexagonType.ResourceExtraction)
                return;

            //Set the grid to be occupied, so that we can't build on it
            sceneClickManager.selectedHexagon.Type = HexagonType.Occupied;

            //To do: decrease money

            //Build the turret
            Transform clone = Instantiate(turretPrefabs[index]).transform;
            clone.position = sceneClickManager.selectedHexagon.transform.position;
            clone.GetComponent<BuildableTurret>().hexagonBlock = sceneClickManager.selectedHexagon;

            //Deselect the hexagon in the scene
            sceneClickManager.selectedHexagon = null;
            buildMenuUI.SetActive(false);
        }

        /// <summary>
        /// Sell the selected turret
        /// </summary>
        public void SellTurret()
        {
            BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
            if (buildable != null)
            {
                //To do: give a reward

                //Reset the grid block to what it was before
                if (buildable.turretType == TurretType.Excavator)
                    buildable.hexagonBlock.Type = HexagonType.ResourceExtraction;
                else
                    buildable.hexagonBlock.Type = HexagonType.TurretBuildable;

                //Deselect and destroy the turret
                sceneClickManager.selectedTurret.DrawRange(false);
                Destroy(sceneClickManager.selectedTurret.gameObject);
                sceneClickManager.selectedTurret = null;
                inspectTurretUI.SetActive(false);
            }
        }
    }
}