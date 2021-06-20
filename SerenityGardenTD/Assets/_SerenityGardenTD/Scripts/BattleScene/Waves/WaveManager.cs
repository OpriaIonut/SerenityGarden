using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;
using UnityEngine.UI;

namespace SerenityGarden
{
    public class WaveManager : LogicProcessBase
    {
        #region Singleton
        public static WaveManager instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! There are multiple instances of WaveManager in the scene. Deleting from: " + gameObject.name);
                Destroy(this.gameObject);
            }
            else
                instance = this;

            gridManager = FindObjectOfType<HexagonalGrid>();
            base.BaseAwakeCalls();
        }
        #endregion

        public TextMeshProUGUI waveProgressText;
        public Image waveProgressBar;

        public GameObject waveSkipButton;       //Button that will display the remaining time before the next wave
        public GameObject stageStartButton;     //Button that when clicked, will start the game
        public float moneyPerSecondSkip = 3;    //If you choose to skip the wave ddelay, you will receive money based on this
        public float enemySpawnDelay = 1f;      //The delay between each enemy gets spawned
        public float waveDelay = 30.0f;         //The delay between waves

        private float lastWaveEndTime;      //The time the last wave ended at
        private bool startedWave = false;   //Are we spawning a wave or waiting for the delay

        private StageScriptable selectedStage;   //The current stage containing waves
        //List of spawn points, that will be found based on the grid system
        private List<HexagonalBlock> spawnPoints;   //Will contain all spawn points in a scene
        private HexagonalGrid gridManager;
        private TurretBuildManager buildManager;
        private BattleStageStateManager stageManager;

        private TextMeshProUGUI waveSkipText;       //Text component that will display the remaining time before the next wave

        private int currentWaveIndex = 0;   //The current wave
        [HideInInspector] public bool spawnWaves = false;    //Will be set to false when we finished spawning all waves

        private int enemyIndex = 0;

        private void Start()
        {
            base.BaseStartCalls();
            buildManager = TurretBuildManager.instance;
            stageManager = BattleStageStateManager.instance;
            stageStartButton.SetActive(true);
            waveSkipButton.SetActive(false);
            waveSkipText = waveSkipButton.GetComponentInChildren<TextMeshProUGUI>();

            selectedStage = SceneDataRetainer.instance.GetStage();
            if (!selectedStage.isBossStage)
            {
                waveProgressBar.fillAmount = 0;
                waveProgressText.text = "";
            }

            if (PhotonNetwork.IsConnected)
                stageStartButton.SetActive(false);

            //When the game is paused Time.time will continue to increase, which will mess with the wave spawning, so subscribe an event that is responsible for correcting that problem
            GamePauseManager.instance.AddUnpauseEvent(OnResumeGame);
        }

        private void Update()
        {
            if (!GamePauseManager.instance.GamePaused)
            {
                //If we can/want to spawn a wave
                if (spawnWaves && startedWave == false && currentWaveIndex < selectedStage.waves.Length - 1)
                {
                    //See if enough time passed
                    if (Time.time - lastWaveEndTime >= waveDelay)
                    {
                        //And if so, start spawning the next wave
                        startedWave = true;
                        currentWaveIndex++;
                        StartCoroutine(WaveSpawner(selectedStage.waves[currentWaveIndex]));
                    }
                    else
                    {
                        //If not, display the remaining time to the screen
                        waveSkipText.text = string.Format("{0:00.00}", waveDelay - (Time.time - lastWaveEndTime));
                    }
                }
            }
        }

        private void OnResumeGame()
        {
            lastWaveEndTime += GamePauseManager.instance.PausedTime;
        }

        private IEnumerator WaveSpawner(WaveScriptable wave)
        {
            waveProgressText.text = "Wave " + (currentWaveIndex + 1) + "/" + selectedStage.waves.Length;

            //Find a list of spawn points on which we can spawn enemies to. Some enemies will only spawn at certain spawn points, so we should find those specific points based on their SpawnPointsID.
            waveSkipButton.SetActive(false);
            List<HexagonalBlock> targetSpawnPoints = new List<HexagonalBlock>();
            for (int index = 0; index < spawnPoints.Count; index++)
            {
                if (wave.spawnPointsID == SpawnPointsID.All || spawnPoints[index].spawnPointsID == wave.spawnPointsID)
                    targetSpawnPoints.Add(spawnPoints[index]);
            }
            //Even if we take elements randomly, they are still next to eachother, so shuffling it would improve the rng.
            targetSpawnPoints.Shuffle();

            int enemyCount = 0;
            int currentSpawnIndex = 0;
            foreach (EnemySpawn item in wave.waveEnemies)
                enemyCount += item.count;

            if (wave.spawnRandomly == false)
            {
                //If we don't want to spawn them randomly
                foreach (EnemySpawn item in wave.waveEnemies)
                {
                    for (int index = 0; index < item.count; index++)
                    {
                        //Then spawn them normally, but randomize the spawn point
                        int randIndex = Random.Range(0, targetSpawnPoints.Count);
                        HexagonalBlock block = targetSpawnPoints[randIndex];

                        SpawnEnemy(item.enemy, block);

                        if (!selectedStage.isBossStage)
                        {
                            currentSpawnIndex++;
                            waveProgressBar.fillAmount = (float)currentSpawnIndex / enemyCount;
                        }

                        if (GamePauseManager.instance.GamePaused)
                            yield return null;

                        yield return new WaitForSeconds(enemySpawnDelay);
                    }
                }
            }
            else
            {
                //Otherwise, in order to spawn randomly, add all enemies to a list
                List<GameObject> enemyToSpawn = new List<GameObject>();
                foreach (EnemySpawn item in wave.waveEnemies)
                {
                    for (int index = 0; index < item.count; index++)
                    {
                        enemyToSpawn.Add(item.enemy);
                    }
                }
                //Shuffle the list
                enemyToSpawn.Shuffle();

                while(enemyToSpawn.Count != 0)
                {
                    //And spawn the enemies in shuffled order
                    int randIndex = Random.Range(0, targetSpawnPoints.Count);
                    HexagonalBlock block = targetSpawnPoints[randIndex];
                    SpawnEnemy(enemyToSpawn[0], block);
                    enemyToSpawn.RemoveAt(0);


                    if (!selectedStage.isBossStage)
                    {
                        currentSpawnIndex++;
                        waveProgressBar.fillAmount = (float)currentSpawnIndex / enemyCount;
                    }

                    if (GamePauseManager.instance.GamePaused)
                        yield return null;

                    yield return new WaitForSeconds(enemySpawnDelay);
                }
            }

            //The wave ended, so if it wasn't the last wave, then show the skip button
            if(currentWaveIndex != selectedStage.waves.Length - 1)
            {
                waveSkipButton.SetActive(true);
                if (PhotonNetwork.IsConnected && !PhotonNetwork.IsMasterClient)
                    waveSkipButton.GetComponent<Button>().interactable = false;
            }
            else
            {
                //Else, tell the stage manager that we finished spawning, so that he will know when to consider the game as won.
                stageManager.SpawnedAllEnemies();
            }

            startedWave = false;
            lastWaveEndTime = Time.time;
        }

        public override void Init()
        {
            spawnPoints = new List<HexagonalBlock>();
            FindSpawnPoints();
        }

        /// <summary>
        /// Find the spawn points based on the grid system.
        /// </summary>
        private void FindSpawnPoints()
        {
            foreach(HexagonalBlock item in gridManager.gridCells)
            {
                if(item.Type == HexagonType.SpawnPoint)
                {
                    spawnPoints.Add(item);
                }
            }
        }

        /// <summary>
        /// Spawn an enemy at a certain location
        /// </summary>
        /// <param name="index"></param>
        /// <param name="spawnBlock"></param>
        private void SpawnEnemy(GameObject enemyPrefab, HexagonalBlock spawnBlock)
        {
            if (PhotonNetwork.IsConnected && !PhotonNetwork.IsMasterClient)
                return;

            PhotonObj photonObj = PhotonObj.Bullet;

            EnemyBase enemy = enemyPrefab.GetComponent<EnemyMelee>();
            if (enemy != null)
                photonObj = PhotonObj.EnemyMelee;

            enemy = enemyPrefab.GetComponent<EnemyRanged>();
            if (enemy != null)
                photonObj = PhotonObj.EnemyRanged;

            enemy = enemyPrefab.GetComponent<EnemyAmbusher>();
            if (enemy != null)
                photonObj = PhotonObj.EnemyAmbusher;

            enemy = enemyPrefab.GetComponent<EnemyFlying>();
            if (enemy != null)
                photonObj = PhotonObj.EnemyFlying;

            Vector3 spawnPosition = spawnBlock.transform.position;
            EnemyBase clone = InstantiationManager.instance.InstantiateWithCheck(enemyPrefab, spawnPosition, Quaternion.identity, photonObj).GetComponent<EnemyBase>();
            clone.SetStartBlock(spawnBlock);
            clone.transform.position += Vector3.up * 0.5f;
            clone.name = clone.name.Replace("Clone", enemyIndex.ToString());
            enemyIndex++;
        }

        /// <summary>
        /// Called by button click in order to start the game stage
        /// </summary>
        public void _StartStage()
        {
            spawnWaves = true;
            startedWave = true;
            stageStartButton.SetActive(false);
            StartCoroutine(WaveSpawner(selectedStage.waves[currentWaveIndex]));
        }

        /// <summary>
        /// Called by button click, when you want to skip a wave delay.
        /// </summary>
        public void _SkipWaveDelay()
        {
            //Calculate the money reward from the skip
            float timeDiff = waveDelay - (Time.time - lastWaveEndTime);
            buildManager.Money += (int)(timeDiff * moneyPerSecondSkip);

            //And start the wave
            startedWave = true;
            currentWaveIndex++;
            StartCoroutine(WaveSpawner(selectedStage.waves[currentWaveIndex]));
        }

        public override bool HasAllDependencies()
        {
            //This class is dependent on the grid manager
            return gridManager.isInitialized;
        }
    }
}