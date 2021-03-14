using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

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

        [Header("Selection Materials")]
        public float powIntensity = 3;
        public Material selectedHexagonMaterial;

        //Reference to systems that are dependent on what we clicked 
        private InputManager inputManager;
        private TurretBuildManager buildManager;
        private LockOnManager lockOnManager;
        private CommanderUI commanderUI;

        private Material previousHexagonMaterial;

        private void Start()
        {
            inputManager = FindObjectOfType<InputManager>();
            buildManager = FindObjectOfType<TurretBuildManager>();
            lockOnManager = FindObjectOfType<LockOnManager>();
            commanderUI = FindObjectOfType<CommanderUI>();

            inputManager.AddNonUIOnPressEvent(OnPressHandler);
        }

        /// <summary>
        /// Called when we clicked anywhere
        /// </summary>
        private void OnPressHandler()
        {
            if (!GamePauseManager.GamePaused)
            {
                Debug.Log(selectedCommander);
                //If we clicked a turret in the previous click, then disable it
                DisablePreviousStates();
                FindCurrentSelected();
                Debug.Log(selectedCommander);

                bool updateSelected = true;
                if (commanderUI.selectDestination)
                {
                    if (selectedHexagon != null && selectedHexagon.Type != HexagonType.Occupied)
                    {
                        commanderUI.SetCommanderDestination(selectedHexagon);
                        selectedHexagon = null;
                        updateSelected = false;
                        commanderUI.selectDestination = false;
                    }
                    else if(selectedTurret != null && selectedTurret.turretType != TurretType.PlayerBase)
                    {
                        if(commanderUI.SelectPowerupTarget(selectedTurret))
                        {
                            selectedTurret = null;
                            updateSelected = true;
                            commanderUI.selectDestination = false;
                        }
                        else
                        {
                            updateSelected = false;
                        }
                    }
                }
                if(updateSelected)
                {
                    UpdateSelectedReferences();
                }
            }
        }

        public void DisablePreviousStates()
        {
            if (selectedTurret != null)
            {
                selectedTurret.DrawRange(false);
                selectedTurret = null;
            }
            if (selectedCommander != null && commanderUI.selectDestination == false)
            {
                selectedCommander.DrawRange(false);
                selectedCommander = null;
            }
            if (selectedHexagon != null)
            {
                if (previousHexagonMaterial != null)
                    selectedHexagon.gameObject.GetComponent<MeshRenderer>().material = previousHexagonMaterial;
                selectedHexagon = null;
            }
        }

        public void FindCurrentSelected()
        {
            if (inputManager.clickedObject != null)
            {
                //For the hexagon we don't want to get the parent, because it is an empty GameObject
                selectedHexagon = inputManager.clickedObject.GetComponent<HexagonalBlock>();
                if(selectedHexagon != null)
                {
                    MeshRenderer rend = selectedHexagon.gameObject.GetComponent<MeshRenderer>();
                    previousHexagonMaterial = rend.material;

                    float intensity = Mathf.Pow(2, powIntensity);
                    Color color = Color.red * intensity;
                    switch (selectedHexagon.Type)
                    {
                        case HexagonType.Walkable:
                            color = Color.gray * intensity;
                            break;
                        case HexagonType.TurretBuildable:
                            color = Color.cyan * intensity;
                            break;
                        case HexagonType.ResourceExtraction:
                            color = Color.green * intensity;
                            break;
                    }

                    rend.material = selectedHexagonMaterial;
                    rend.material.SetColor("Color_EE45A1F6", color);
                }
            }
            if (inputManager.clickedParent != null)
            {
                //For the turret and enemies, we want to get the parent, because they will have GFX child objects, that will contain the actual colliders, but the scripts will sit on the parent objects
                selectedTurret = inputManager.clickedParent.GetComponent<TurretBase>();
                selectedEnemy = inputManager.clickedParent.GetComponent<EnemyBase>();
                selectedCommander = inputManager.clickedParent.GetComponent<Commander>();

                if (selectedTurret != null)
                {
                    PhotonView view = selectedTurret.GetComponent<PhotonView>();
                    if (view != null && !view.IsMine)
                        selectedTurret = null;
                }

                if (selectedCommander != null)
                {
                    PhotonView view = selectedCommander.GetComponent<PhotonView>();
                    if (view != null && !view.IsMine)
                        selectedCommander = null;
                }
            }
        }

        public void UpdateSelectedReferences()
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