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

        
        public virtual void BaseAwakeCalls()
        {
            if (BattleInitializationManager.instance == null)
                FindObjectOfType<BattleInitializationManager>().PrepareToInitialize(this);
            else
                BattleInitializationManager.instance.PrepareToInitialize(this);
        }

        /// <summary>
        /// This method should be called on all classes that inherit this class, in the awake method
        /// </summary>
        public virtual void BaseStartCalls()
        {
        }
        public virtual void BaseUpdateCalls()
        {

        }
    }
}