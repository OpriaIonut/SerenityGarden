using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class WaveManager : MonoBehaviour
    {
        public GameObject enemyPrefab;

        private HexagonalGrid gridManager;

        private void Start()
        {
            gridManager = FindObjectOfType<HexagonalGrid>();
            SpawnEnemy(gridManager.gridCells[0]);
        }

        private void SpawnEnemy(HexagonalBlock spawnBlock)
        {
            Vector3 spawnPosition = spawnBlock.transform.position + Vector3.up * 0.5f;
            EnemyBase clone = Instantiate(enemyPrefab, spawnPosition, Quaternion.identity).GetComponent<EnemyBase>();
            clone.SetStartBlock(spawnBlock);
        }
    }
}