using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    //Class that will properly initialize processes, without any conflicts or inheritance problems (if implemented right)
    public abstract class LogicProcessBase : MonoBehaviour
    {
        //Will be set after the Init() method is called
        [HideInInspector] public bool isInitialized = false;

        /// <summary>
        /// All initialization code for an object should go here
        /// </summary>
        public abstract void Init();

        /// <summary>
        /// If the script needs another system to be initialized before initializing this, then add the dependencies here.
        /// </summary>
        /// <returns></returns>
        public abstract bool HasAllDependencies();


        /// <summary>
        /// This method should be called on all classes that inherit this class, in the awake method. The actual awake method should be called only in the lowermost class in the inheritance hierarchy.
        /// </summary>
        public virtual void BaseAwakeCalls()
        {
            
        }

        /// <summary>
        /// This method should be called on all classes that inherit this class, in the start method. The actual start method should be called only in the lowermost class in the inheritance hierarchy.
        /// </summary>
        public virtual void BaseStartCalls()
        {
            //Add the current process to the initialization queue
            //The Singleton may not work because it is set in awake, and considering this method will also be called in an awake method, it may be called before it is properly initialized.
            ProcessInitializationManager.instance.PrepareToInitialize(this);
        }

        /// <summary>
        /// This method should be called on all classes that inherit this class, in the update method. The actual update method should be called only in the lowermost class in the inheritance hierarchy.
        /// </summary>
        public virtual void BaseUpdateCalls()
        {

        }
    }
}