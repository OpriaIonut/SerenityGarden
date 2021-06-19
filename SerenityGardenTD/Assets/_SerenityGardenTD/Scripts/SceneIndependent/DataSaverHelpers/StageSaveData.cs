using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    /// <summary>
    /// Class that will hold data related to each stage so it can be saved to the disk.
    /// </summary>
    [System.Serializable]
    public class StageSaveData
    {
        [SerializeField] public string stageName;
        [SerializeField] public int stageStars;

        public StageSaveData(string _name, int _stars)
        {
            stageName = _name;
            stageStars = _stars;
        }
    }
}