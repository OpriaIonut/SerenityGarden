using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public abstract class LogicProcessBase : MonoBehaviour
    {
        [HideInInspector] public bool isInitialized = false;

        public abstract void Init();
        public abstract bool HasAllDependencies();

        /// <summary>
        /// This method should be called on all classes that inherit this class, in the awake method
        /// </summary>
        public virtual void BaseAwakeCalls()
        {
            BattleInitializationManager.instance.PrepareToInitialize(this);
        }

        public abstract void BaseStartCalls();
        public abstract void BaseUpdateCalls();
    }
}