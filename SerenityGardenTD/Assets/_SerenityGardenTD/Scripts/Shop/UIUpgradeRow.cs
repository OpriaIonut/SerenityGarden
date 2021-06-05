using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

namespace SerenityGarden
{
    public class UIUpgradeRow : MonoBehaviour
    {
        public TextMeshProUGUI costText;
        public TextMeshProUGUI upgradeText;
        public Image[] upgradeImages;
        public ShopManager shopManager;

        public Color costValidColor;
        public Color costInvalidColor;
        public Color maxLevelColor;

        private PermanentUpgrade upgrade;
        private int upgradeCost;

        private void Start()
        {
            UpdateUIImages(true);
        }

        public void Init(PermanentUpgrade _permanentUpgrade)
        {
            upgrade = _permanentUpgrade;
            upgradeText.text = _permanentUpgrade.type.ToString();

            CalculateCost();
            StartCoroutine("UpdateUIWithDelay");
        }

        /// <summary>
        /// Calculate the cost of the current upgrade and display it
        /// </summary>
        private void CalculateCost()
        {
            if (upgrade.currentLevel == upgrade.maxLevel)
            {
                costText.text = "MAX";
                costText.color = maxLevelColor;
            }
            else
            {
                float cost = upgrade.startCost;
                for (int index = 0; index < upgrade.currentLevel; index++)
                    cost *= upgrade.costMultiplierPerLevel;
                upgradeCost = (int)cost; 
                costText.text = "$ " + upgradeCost;
                ColorCostText();
            }
        }

        /// <summary>
        /// Activate/deactivate upgrade images based on how many upgrades you bought.
        /// </summary>
        /// <param name="deactivateAll"></param>
        private void UpdateUIImages(bool deactivateAll)
        {
            if(deactivateAll)
            {
                foreach (Image img in upgradeImages)
                    img.gameObject.SetActive(false);
            }
            else
            {
                for(int index = 0; index < upgrade.currentLevel; index++)
                {
                    upgradeImages[index].gameObject.SetActive(true);
                }
                for(int index = upgrade.currentLevel; index < upgradeImages.Length; index++)
                {
                    upgradeImages[index].gameObject.SetActive(false);
                }
            }
        }

        private IEnumerator UpdateUIWithDelay()
        {
            yield return new WaitForSeconds(0.01f);
            UpdateUIImages(false);
        }

        /// <summary>
        /// Give color to the cost component based on if we have enough money or not.
        /// </summary>
        public void ColorCostText()
        {
            if (shopManager.CheckUpgradeCost(upgradeCost))
                costText.color = costValidColor;
            else
                costText.color = costInvalidColor;
        }

        public void OnClick_Upgrade()
        {
            if(upgrade.currentLevel < upgrade.maxLevel && shopManager.CheckUpgradeCost(upgradeCost))
            {
                upgrade.currentLevel++;
                shopManager.UpgradeProperty(upgradeCost);
                CalculateCost();
                UpdateUIImages(false);
            }
        }
    }
}