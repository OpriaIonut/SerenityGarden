using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class BattleInitializationManager : MonoBehaviour
    {
        #region Singleton

        public static BattleInitializationManager instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! Multiple instances of BatleProcessManager in scene. Deleting from: " + gameObject.name);
                Destroy(this);
            }
            else
                instance = this;
        }

        #endregion

        private Queue<LogicProcessBase> processesToInitialize = new Queue<LogicProcessBase>();

        private void Start()
        {
            ExecuteInitialization();
        }

        //Some processes will be started after the application started (ex: an enemy was instatiated)
        //Because of this, we need to initialize them in update too
        private void Update()
        {
            ExecuteInitialization();
        }

        /// <summary>
        /// This method should be called in awake. It will initialize all processes given in Start, and runtime processes (like an enemy that spawned) will be initialized in update in the next frame
        /// </summary>
        /// <param name="process"></param>
        public void PrepareToInitialize(LogicProcessBase process)
        {
            processesToInitialize.Enqueue(process);
        }

        public void ExecuteInitialization()
        {
            while (processesToInitialize.Count != 0)
            {
                LogicProcessBase currentProcess = processesToInitialize.Dequeue();
                if (currentProcess.HasAllDependencies())
                {
                    currentProcess.Init();
                    currentProcess.isInitialized = true;
                }
                else
                    processesToInitialize.Enqueue(currentProcess);
            }
        }
    }
}