using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class WaveManager : LogicProcessBase
    {
        public float spawnDelay = 0.5f;
        public GameObject[] enemyPrefabs;

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

        private void SpawnEnemy(int index, HexagonalBlock spawnBlock)
        {
            Vector3 spawnPosition = spawnBlock.transform.position;
            EnemyBase clone = Instantiate(enemyPrefabs[index], transform).GetComponent<EnemyBase>();
            clone.transform.position = spawnPosition;
            clone.SetStartBlock(spawnBlock);
            lastSpawnTime = Time.time;
        }

        public override bool HasAllDependencies()
        {
            return gridManager.isInitialized;
        }
    }
}