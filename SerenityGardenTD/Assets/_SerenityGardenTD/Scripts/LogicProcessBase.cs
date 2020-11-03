using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public abstract class LogicProcessBase : MonoBehaviour
    {
        public bool isInitialized = false;

        public abstract void Init();
        public abstract bool HasAllDependencies();

        /// <summary>
        /// This method should be called on all classes that inherit this class, in the awake method
        /// </summary>
        public void BaseAwakeCalls()
        {
            BattleProcessManager.instance.PrepareToInitialize(this);
        }
    }
}