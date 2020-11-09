using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class BattleInitializationManager : MonoBehaviour
    {
        //Default singleton
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

        //Queue used for initialing processes. Processes that can't be initialized will be added at the end of the queue
        private Queue<LogicProcessBase> processesToInitialize = new Queue<LogicProcessBase>();

        private void Start()
        {
            //Initialize processes that were called in awake
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

        /// <summary>
        /// Initialize the processes that were created in the meantime
        /// </summary>
        public void ExecuteInitialization()
        {
            //If we get into the situation of processes being dependent of one another, in order to not get get an infinite loop, we will stop the loop when no process is removed after a full run through the queue
            int noChangeCount = 0;
            while (processesToInitialize.Count != 0)
            {
                //Get the current process
                LogicProcessBase currentProcess = processesToInitialize.Dequeue();
                if (currentProcess.HasAllDependencies())
                {
                    //If it hass all the dependencies, then initialize it
                    currentProcess.isInitialized = true;
                    currentProcess.Init();
                    //And reset the count
                    noChangeCount = 0;
                }
                else
                {
                    //Else, if we can't initialize it, then add it at the end of the list
                    processesToInitialize.Enqueue(currentProcess);
                    //Increase it's count, in order to break the infinite loop
                    noChangeCount++;
                }

                //If we did a full run through and no change happened, then break, because we don't want an infinite loop
                if (noChangeCount == processesToInitialize.Count + 1)
                    break;
            }
        }
    }
}