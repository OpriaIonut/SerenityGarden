using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

namespace SerenityGarden
{
    public class TurretBuildManager : MonoBehaviour
    {
        #region Singleton
        public static TurretBuildManager instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! There are multiple instances of TurretBuildManager in the scene. Deleting from: " + gameObject.name);
                Destroy(this.gameObject);
            }
            else
                instance = this;
        }
        #endregion

        public int startMoney;

        private int money;
        public int Money
        {
            get { return money; }
            set 
            {
                money = value;
                moneyText.text = "$" + money;
            }
        }

        [Header("UI components")]
        public GameObject buildMenuUI;
        public GameObject inspectTurretUI;
        public GameObject buildableTurretsUI;
        public GameObject excavatorUI;
        public GameObject removeCommanderButton;

        [Header("Money texts")]
        public TextMeshProUGUI moneyText;
        public TextMeshProUGUI sellText;
        public TextMeshProUGUI repairText;
        public TextMeshProUGUI upgradeText;

        [Tooltip("Be careful to put them in the right order (the order from the next field.")]
        public TextMeshProUGUI[] turretBuildCostText;

        //The prefabs for the turrets that we can build
        public GameObject[] turretPrefabs;

        //Reference to the click manager, because it is dependent on it, to know where to build the turret or what turret to inspect
        private SceneClickManager sceneClickManager;
        private CommanderUI commanderUI;

        private void Start()
        {
            sceneClickManager = FindObjectOfType<SceneClickManager>();
            commanderUI = FindObjectOfType<CommanderUI>();
            for (int index = 0; index < turretPrefabs.Length; index++)
            {
                turretBuildCostText[index].text = "$" + turretPrefabs[index].GetComponent<BuildableTurret>().GetBuildCost();
            }
            Money = startMoney;
        }

        private void Update()
        {
            if (!GamePauseManager.GamePaused)
            { 
                if (inspectTurretUI.activeInHierarchy && sceneClickManager.selectedTurret != null)
                {
                    BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
                    if (buildable != null)
                    {
                        repairText.text = "$" + buildable.GetRecoveryCost();
                    }
                }
            }
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

                BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
                if (buildable != null)
                {
                    if (buildable.GetUpgradeCost() == 0)
                        upgradeText.text = "MAX";
                    else
                        upgradeText.text = "$" + buildable.GetUpgradeCost();
                    sellText.text = "$" + buildable.DestroyReward;

                    if (buildable.HasCommander)
                        removeCommanderButton.SetActive(true);
                    else
                        removeCommanderButton.SetActive(false);
                }
                else //It means that we selected the player base, and we don't have options for it yet
                    inspectTurretUI.SetActive(false);   
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
        public void _BuildTurret(int index)
        {
            if (sceneClickManager.selectedHexagon.Type != HexagonType.TurretBuildable && sceneClickManager.selectedHexagon.Type != HexagonType.ResourceExtraction)
                return;

            if (turretPrefabs[index].GetComponent<BuildableTurret>().GetBuildCost() > Money)
                return;

            //Set the grid to be occupied, so that we can't build on it
            sceneClickManager.selectedHexagon.Type = HexagonType.Occupied;

            //Build the turret
            Transform clone = Instantiate(turretPrefabs[index]).transform;
            clone.position = sceneClickManager.selectedHexagon.transform.position;
            BuildableTurret script = clone.GetComponent<BuildableTurret>();
            script.hexagonBlock = sceneClickManager.selectedHexagon;

            Money -= script.GetBuildCost();

            //Deselect the hexagon in the scene
            sceneClickManager.selectedHexagon = null;
            buildMenuUI.SetActive(false);
        }

        /// <summary>
        /// Sell the selected turret
        /// </summary>
        public void _SellTurret()
        {
            BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
            if (buildable != null)
            {
                Money += buildable.DestroyReward;

                //Reset the grid block to what it was before
                if (buildable.turretType == TurretType.Excavator)
                    buildable.hexagonBlock.Type = HexagonType.ResourceExtraction;
                else
                    buildable.hexagonBlock.Type = HexagonType.TurretBuildable;

                if (buildable.HasCommander)
                    commanderUI._UnpowerupTurret();

                //Deselect and destroy the turret
                buildable.DrawRange(false);
                Destroy(buildable.gameObject);
                sceneClickManager.selectedTurret = null;
                inspectTurretUI.SetActive(false);
            }
        }

        public void _RepairTurret()
        {
            if(sceneClickManager.selectedTurret != null)
            {
                BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
                if(buildable != null)
                {
                    int recoveryCost = buildable.GetRecoveryCost();
                    if (recoveryCost <= Money && buildable.StartRecovery())
                        Money -= recoveryCost;
                }
            }
        }

        public void _UpgradeTurret()
        {
            if (sceneClickManager.selectedTurret != null)
            {
                BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
                if (buildable != null)
                {
                    int upgradeCost = buildable.GetUpgradeCost();
                    if (upgradeCost <= Money && buildable.Upgrade())
                    {
                        Money -= upgradeCost;

                        sceneClickManager.selectedTurret.DrawRange(false);
                        sceneClickManager.selectedTurret = null;
                        inspectTurretUI.SetActive(false);
                    }
                }
            }
        }
    }
}