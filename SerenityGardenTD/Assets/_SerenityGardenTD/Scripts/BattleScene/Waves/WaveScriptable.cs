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
        //Each spawn point will have an id, this way we can specify that all enemeis will come from a certain spawn point
        public SpawnPointsID spawnPointsID; 
        public bool spawnRandomly;
    }
}