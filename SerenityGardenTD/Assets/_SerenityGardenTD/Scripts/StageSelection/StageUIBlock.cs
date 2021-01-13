using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

namespace SerenityGarden
{
    public class StageUIBlock : MonoBehaviour
    {
        public GameObject[] stars;
        public TextMeshProUGUI titleText;

        [HideInInspector] public string generatedDescription;
        [HideInInspector] public StageScriptable stage;


        private void Awake()
        {
            for (int index = 0; index < stars.Length; index++)
                stars[index].SetActive(false);
            GetComponent<Button>().onClick.AddListener(_SelectThisStage);
        }

        public void InitializeBlock(StageScriptable _stage)
        {
            stage = _stage;
            titleText.text = stage.stageName;

            if (stage.starRanking > 0)
                stars[0].SetActive(true);
            if (stage.starRanking > 1)
                stars[1].SetActive(true);
            if (stage.starRanking > 2)
                stars[2].SetActive(true);

            Dictionary<string, int> waveEnemies = new Dictionary<string, int>();
            foreach(WaveScriptable wave in stage.waves)
            {
                foreach(EnemySpawn enemyData in wave.waveEnemies)
                {
                    if (waveEnemies.ContainsKey(enemyData.enemy.name))
                        waveEnemies[enemyData.enemy.name] = waveEnemies[enemyData.enemy.name] + enemyData.count;
                    else
                        waveEnemies[enemyData.enemy.name] = enemyData.count;
                }
            }


            generatedDescription = stage.stageName + "\n\n";

            generatedDescription += "Enemies encountered: \n";
            foreach (KeyValuePair<string, int> entry in waveEnemies)
                generatedDescription += "-" + entry.Key + " x" + entry.Value + "\n";

            generatedDescription += "\nReward: $" + stage.stageReward;
        }

        public void _SelectThisStage()
        {
            StageSelectionManagement.instance.SelectStage(this);
        }
    }
}