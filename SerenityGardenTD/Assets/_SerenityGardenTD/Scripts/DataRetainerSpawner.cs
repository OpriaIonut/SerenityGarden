using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class DataRetainerSpawner : MonoBehaviour
    {
        private void Start()
        {
            if (SceneDataRetainer.instance == null)
            {
                GameObject newObj = new GameObject("SceneDataRetainer");
                newObj.AddComponent<SceneDataRetainer>();
            }
            Destroy(this.gameObject);
        }
    }
}