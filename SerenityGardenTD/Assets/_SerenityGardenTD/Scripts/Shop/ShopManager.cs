using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace SerenityGarden
{
    public class ShopManager : LogicProcessBase
    {
        public GameObject headerObj;
        public GameObject headerBtnPrefab;
        public UIUpgradeRow[] upgradeRows;
        public TextMeshProUGUI moneyText;

        private int selectedTurretIndex = -1;
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

        private void SpawnHeaders()
        {
            int count = dataRetainer.GetPermanentUpgradesCount();
            for(int index = 0; index < count; index++)
            {
                //onClick.AddListeners stores pointers to parameter values, so we need to pass it a temp variable.
                int turretIndex = index;

                Button btn = Instantiate(headerBtnPrefab, headerObj.transform).GetComponent<Button>();
                btn.onClick.AddListener(delegate() { OnClick_SelectTurretHeader(turretIndex); });

                TextMeshProUGUI text = btn.GetComponentInChildren<TextMeshProUGUI>();
                text.text = dataRetainer.GetPermanentUpgradeTurretType(turretIndex).ToString();
            }
        }

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

        public bool CheckUpgradeCost(int upgradeCost)
        {
            if (dataSaver.playerData.Money < upgradeCost)
                return false;
            else
                return true;
        }

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
    }
}