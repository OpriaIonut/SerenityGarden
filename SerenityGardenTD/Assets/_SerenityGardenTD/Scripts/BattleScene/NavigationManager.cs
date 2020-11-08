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
            BaseAwakeCalls();
        }
        #endregion

        private void Start()
        {
            BaseStartCalls();
        }

        public HexagonalGrid gridManager;

        private float[,] costMatrix;
        private int[,] nextNodeMatrix;

        public override void Init()
        {
            int length = gridManager.gridCells.Count;
            costMatrix = new float[length, length];
            nextNodeMatrix = new int[length, length];

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
                        costMatrix[index1, index2] = float.PositiveInfinity;
                        nextNodeMatrix[index1, index2] = -1;
                    }
                }
            }

            FindEdges(length);
            FloydWarshall(length);
        }

        public HexagonalBlock FindNext(HexagonalBlock current, HexagonalBlock end)
        {
            if (!isInitialized)
                return null;

            int nextId = nextNodeMatrix[current.listId, end.listId];
            if (nextId == -1)
                return null;
            return gridManager.gridCells[nextId];
        }

        #region AlgorithmMethods

        private void FindEdges(int length)
        {
            float minDistAllowed = gridManager.diameter * gridManager.diameter;
            for (int index = 0; index < length; index++)
            {
                for(int index2 = 0; index2 < length; index2++)
                {
                    float distance = HelperMethods.SquaredDistance(gridManager.gridCells[index].transform.position, gridManager.gridCells[index2].transform.position);

                    if (index != index2 && distance <= minDistAllowed)
                    {
                        costMatrix[index, index2] = distance;
                        nextNodeMatrix[index, index2] = index2;
                    }
                }
            }
        }

        private void FloydWarshall(int length)
        {
            for(int k = 0; k < length; k++)
            {
                for(int i = 0; i < length; i++)
                {
                    for(int j = 0; j < length; j++)
                    {
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
            if (gridManager != null && gridManager.isInitialized)
                return true;
            return false;
        }
    }
}
