using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

namespace SerenityGarden
{
    public class ShopManager : LogicProcessBase
    {
        [Tooltip("Object under which we will spawn the buttons with turret categories.")]
        public GameObject headerObj;
        public GameObject headerBtnPrefab;
        public UIUpgradeRow[] upgradeRows;  //Reference to all upgrade rows scripts (there should be 3 of them)
        public TextMeshProUGUI moneyText;

        private int selectedTurretIndex = -1;   //Current selected turret. Set by button click
        private SceneDataRetainer dataRetainer;
        private PlayerDataSaver dataSaver;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
        }

        public override void Init()
        {
            dataRetainer = SceneDataRetainer.instance;
            dataSaver = PlayerDataSaver.instance;
            moneyText.text = "$ " + dataSaver.playerData.Money;
            SpawnHeaders();
            UpdateUI();
        }

        public override bool HasAllDependencies()
        {
            return SceneDataRetainer.instance != null && PlayerDataSaver.instance != null && PlayerDataSaver.instance.isInitialized;
        }

        /// <summary>
        /// Spawn all turret headers
        /// </summary>
        private void SpawnHeaders()
        {
            int count = dataRetainer.GetPermanentUpgradesCount();
            for(int index = 0; index < count; index++)
            {
                //onClick.AddListeners stores pointers to parameter values, so we need to pass it a temp variable.
                int turretIndex = index;

                //Add onClick listener with the parameter of the current index, so that we know which button we are clicking on.
                Button btn = Instantiate(headerBtnPrefab, headerObj.transform).GetComponent<Button>();
                btn.onClick.AddListener(delegate() { OnClick_SelectTurretHeader(turretIndex); });

                TextMeshProUGUI text = btn.GetComponentInChildren<TextMeshProUGUI>();
                text.text = dataRetainer.GetPermanentUpgradeTurretType(turretIndex).ToString();
            }
        }

        /// <summary>
        /// Update UI for the upgrade rows.
        /// </summary>
        private void UpdateUI()
        {
            if (selectedTurretIndex < 0 || selectedTurretIndex >= dataRetainer.GetPermanentUpgradesCount())
            {
                foreach (UIUpgradeRow row in upgradeRows)
                    row.gameObject.SetActive(false);
            }
            else
            {
                TurretPermanentUpgrades upgrades = dataRetainer.GetMultipliers(selectedTurretIndex);

                for(int index = 0; index < upgradeRows.Length; index++)
                {
                    upgradeRows[index].gameObject.SetActive(true);
                    upgradeRows[index].Init(upgrades.upgrades[index]);
                }
            }
        }

        /// <summary>
        /// Check to see if we have enough money to buy an upgrade.
        /// </summary>
        /// <param name="upgradeCost"></param>
        /// <returns></returns>
        public bool CheckUpgradeCost(int upgradeCost)
        {
            if (dataSaver.playerData.Money < upgradeCost)
                return false;
            else
                return true;
        }

        /// <summary>
        /// Upgrading is done by UIUpgradeRow. This class takes care of overall behaviour that should happen when we upgrade something
        /// </summary>
        /// <param name="upgradeCost"></param>
        public void UpgradeProperty(int upgradeCost)
        {
            dataSaver.playerData.Money -= upgradeCost;
            moneyText.text = "$ " + dataSaver.playerData.Money;

            foreach (UIUpgradeRow row in upgradeRows)
                row.ColorCostText();

            dataSaver.SaveData();
        }

        public void OnClick_SelectTurretHeader(int headerIndex)
        {
            selectedTurretIndex = headerIndex;
            UpdateUI();
        }

        public void OnClick_Back()
        {
            SceneManager.LoadScene("StageSelection");
        }
    }
}