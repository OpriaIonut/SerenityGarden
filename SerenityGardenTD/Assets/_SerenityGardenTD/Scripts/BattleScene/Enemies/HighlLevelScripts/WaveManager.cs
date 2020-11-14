using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class WaveManager : LogicProcessBase
    {
        public float spawnDelay = 0.5f;
        public GameObject[] enemyPrefabs;

        //List of spawn points, that will be found based on the grid system
        private List<HexagonalBlock> spawnPoints;
        private HexagonalGrid gridManager;

        private float lastSpawnTime = 0;

        private void Awake()
        {
            gridManager = FindObjectOfType<HexagonalGrid>();
            base.BaseAwakeCalls();
        }

        private void Start()
        {
            base.BaseStartCalls();
        }

        private void Update()
        {
            base.BaseUpdateCalls();
            if (Time.time - lastSpawnTime > spawnDelay)
            {
                int index = Random.Range(0, enemyPrefabs.Length);
                int spawnPointIndex = Random.Range(0, spawnPoints.Count);
                SpawnEnemy(index, spawnPoints[spawnPointIndex]);
            }
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
        private void SpawnEnemy(int index, HexagonalBlock spawnBlock)
        {
            Vector3 spawnPosition = spawnBlock.transform.position;
            EnemyBase clone = Instantiate(enemyPrefabs[index], spawnPosition, Quaternion.identity).GetComponent<EnemyBase>();
            clone.SetStartBlock(spawnBlock);
            clone.transform.position += Vector3.up * 0.5f;
            lastSpawnTime = Time.time;
        }

        public override bool HasAllDependencies()
        {
            //This class is dependent on the grid manager
            return gridManager.isInitialized;
        }
    }
}