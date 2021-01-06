using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace SerenityGarden
{
    public class NavigationManager : LogicProcessBase
    {
        #region Singleton
        public static NavigationManager instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! There are multiple instances of NavigationManager in the scene. Deleting from " + gameObject.name);
                return;
            }
            else
                instance = this;

            gridManager = FindObjectOfType<HexagonalGrid>();
            BaseAwakeCalls();   //Call initialization for this process
        }
        #endregion

        private void Start()
        {
            BaseStartCalls();
        }

        //Reference to the grid, because it is VERY dependent on it
        private HexagonalGrid gridManager;

        //Matrix that will retain the minimum cost from one node to all other nodes
        private float[,] costMatrix;
        //Matrix that will retain the index of the node that we need to visit next, for all nodes.
        private int[,] nextNodeMatrix;

        public override void Init()
        {
            //Create the matrixes
            int length = gridManager.gridCells.Count;
            costMatrix = new float[length, length];
            nextNodeMatrix = new int[length, length];

            //Set them up to their initial values
            for(int index1 = 0; index1 < length; index1++)
            {
                for(int index2 = 0; index2 < length; index2++)
                {
                    if (index1 == index2)
                    {
                        costMatrix[index1, index2] = 0;
                        nextNodeMatrix[index1, index2] = index1;
                    }
                    else
                    {
                        //For the cost, all nodes that aren't connected will be considered to have a distance of infinite
                        costMatrix[index1, index2] = float.PositiveInfinity;
                        //And for the index we will mark it as -1. At least it will crash if something goes wrong
                        nextNodeMatrix[index1, index2] = -1;
                    }
                }
            }

            //Find all the conected pairs of nodes and initialize the matrixes with their values
            FindEdges(length);
            //Apply Floyd Warshall to find shortest distances between all nodes
            FloydWarshall(length);
        }

        /// <summary>
        /// Any script can call this method to know the shortest path to a goal
        /// </summary>
        /// <param name="current">Current node that it sits on</param>
        /// <param name="end">The goal that it needs to reach</param>
        /// <returns></returns>
        public HexagonalBlock FindNextBlock(HexagonalBlock current, HexagonalBlock end)
        {
            if (!isInitialized)
                return null;

            int nextId = nextNodeMatrix[current.listId, end.listId];
            if (nextId == -1)
                return null;
            return gridManager.gridCells[nextId];
        }

        #region AlgorithmMethods

        /// <summary>
        /// Find pairs of connected nodes
        /// </summary>
        /// <param name="length"></param>
        private void FindEdges(int length)
        {
            //The maximum distance allowed for a node to be considered adjacent.
            float maxDistanceAllowed = gridManager.diameter * gridManager.diameter;
            //For each node
            for (int index = 0; index < length; index++)
            {
                //Check the distance to all nodes in the grid.
                //Initially I was trying with Pysics.OverlapSphere, but it didn't recognize hexagon block, probably because they were instantiated on the same frame.
                for(int index2 = 0; index2 < length; index2++)
                {
                    //Find the distance between the two nodes
                    float distance = HelperMethods.SquaredDistance(gridManager.gridCells[index].transform.position, gridManager.gridCells[index2].transform.position);

                    //If it isn't the same node and it's close enough to be adjacent
                    if (index != index2 && distance <= maxDistanceAllowed)
                    {
                        //Then set up the matrixes
                        costMatrix[index, index2] = distance;
                        nextNodeMatrix[index, index2] = index2;
                    }
                }
            }
        }

        /// <summary>
        /// Basic Floyd Warshall algorithm
        /// </summary>
        /// <param name="length"></param>
        private void FloydWarshall(int length)
        {
            for(int k = 0; k < length; k++)
            {
                for(int i = 0; i < length; i++)
                {
                    for(int j = 0; j < length; j++)
                    {
                        //Gibberish formulas
                        if(costMatrix[i, k] + costMatrix[k, j] < costMatrix[i, j])
                        {
                            costMatrix[i, j] = costMatrix[i, k] + costMatrix[k, j];
                            nextNodeMatrix[i, j] = nextNodeMatrix[i, k];
                        }
                    }
                }
            }
        }
        #endregion
        
        public override bool HasAllDependencies()
        {
            //This system is dependent on the grid manager, so initialize it only after it was initialized
            if (gridManager != null && gridManager.isInitialized)
                return true;
            return false;
        }
    }
}
