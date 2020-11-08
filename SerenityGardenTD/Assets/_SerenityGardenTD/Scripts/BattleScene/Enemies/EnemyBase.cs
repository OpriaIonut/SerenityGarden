using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public enum EnemyType
    {
        Melee,
        Ranged,
        Flying,
        Ambusher
    }

    public class EnemyBase : LogicProcessBase
    {
        public EnemyType enemyType;
        public HexagonalBlock start;
        public HexagonalBlock end;

        public float distanceThreshold = 1.0f;
        public float speed = 5.0f;
        public HexagonalBlock currentBlock;
        public HexagonalBlock nextBlock;

        public int gridId = 0;
        private NavigationManager navigationManager;
        private HexagonalGrid hexagonalGrid;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            hexagonalGrid = FindObjectOfType<HexagonalGrid>();
            navigationManager = FindObjectOfType<NavigationManager>();
            BaseStartCalls();
        }

        public override void Init()
        {
            start = hexagonalGrid.gridCells[gridId];
            currentBlock = start;
            transform.position = start.transform.position + Vector3.up * 0.5f;
            float minDist = float.MaxValue;
            for(int index = 0; index < HexagonalGrid.enemyGoal.Count; index++)
            {
                float dist = HelperMethods.SquaredDistance(transform.position, HexagonalGrid.enemyGoal[index].transform.position);
                if (dist < minDist)
                {
                    end = HexagonalGrid.enemyGoal[index];
                    minDist = dist;
                }
            }
            nextBlock = NavigationManager.instance.FindNext(currentBlock, end);
        }

        public override bool HasAllDependencies()
        {
            if (hexagonalGrid.isInitialized && navigationManager.isInitialized)
                return true;
            return false;
        }

        private void Update()
        {
            if (nextBlock == null)
                Debug.LogWarning("Warning! Can't find navigation target");
            else if(HelperMethods.SquaredDistance(transform.position, nextBlock.transform.position) < distanceThreshold)
            {
                FindNextBlock();
            }
            if (nextBlock != null)
                MoveTowards();
        }

        public void MoveTowards()
        {
            transform.position = Vector3.MoveTowards(transform.position, nextBlock.transform.position, speed * Time.deltaTime);
        }

        public void FindNextBlock()
        {
            currentBlock = nextBlock;
            nextBlock = NavigationManager.instance.FindNext(currentBlock, end);
        }
    }
}
