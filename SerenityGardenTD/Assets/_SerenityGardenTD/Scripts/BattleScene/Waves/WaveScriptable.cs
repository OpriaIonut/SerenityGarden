using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    [System.Serializable]
    public class EnemySpawn
    {
        public GameObject enemy;
        public int count;
    }

    [CreateAssetMenu(fileName = "Wave", menuName = "ScriptableObjects/Wave")]
    public class WaveScriptable : ScriptableObject
    {
        public EnemySpawn[] waveEnemies;
        public SpawnPointsID spawnPointsID;
        public bool spawnRandomly;
    }
}