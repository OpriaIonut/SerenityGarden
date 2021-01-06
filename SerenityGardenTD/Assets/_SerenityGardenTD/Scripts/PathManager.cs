using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class PathManager : LogicProcessBase
    {
        #region Singleton
        public static PathManager instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! There are multiple instances of PathManager in the scene. Deleting from " + gameObject.name);
                return;
            }
            else
                instance = this;

            BaseAwakeCalls();   //Call initialization for this process
        }
        #endregion

        private string streamingAssetsPath;

        #region Inherited Behaviour

        private void Start()
        {
            BaseStartCalls();
        }

        private void Update()
        {
            BaseUpdateCalls();
        }

        public override void Init()
        {
            streamingAssetsPath = Application.streamingAssetsPath;
        }

        public override bool HasAllDependencies()
        {
            return true;
        }

        #endregion

        public string GetFilePath(string fileName)
        {
            return streamingAssetsPath + "/" + fileName;
        }
    }
}