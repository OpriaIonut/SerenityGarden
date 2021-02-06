using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class StageSaveData
    {
        public string stageName;
        public int stageStars;

        public StageSaveData(string _name, int _stars)
        {
            stageName = _name;
            stageStars = _stars;
        }
    }
}