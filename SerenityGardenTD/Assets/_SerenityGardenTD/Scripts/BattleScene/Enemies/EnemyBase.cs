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

    public class EnemyBase : LogicProcessBase, IMovable
    {
        public EnemyType enemyType;
        private NavigationManager navigationManager;
        private HexagonalGrid hexagonalGrid;

        private HexagonalBlock currentBlock;
        private HexagonalBlock endBlock;
        private HexagonalBlock nextBlock;

        private float speed = 1.0f;
        private float reachedThreshold = 0.5f;
        private bool reachedDestination = false;

        #region Properties
        public HexagonalBlock CurrentBlock
        {
            get { return currentBlock; }
            set { currentBlock = value; }
        }
        public HexagonalBlock EndBlock 
        { 
            get { return endBlock; }
            set { endBlock = value; }
        }
        public HexagonalBlock NextBlock 
        {
            get { return nextBlock; }
            set { nextBlock = value; }
        }
        public float Speed 
        { 
            get { return speed; }
            set { speed = value; }
        }
        public float ReachedThreshold 
        { 
            get { return reachedThreshold; }
            set { reachedThreshold = value; }
        }
        public bool ReachedDestination 
        { 
            get { return reachedDestination; }
            set { reachedDestination = value; }
        }
        #endregion

        public override void BaseAwakeCalls()
        {
            hexagonalGrid = FindObjectOfType<HexagonalGrid>();
            navigationManager = FindObjectOfType<NavigationManager>();
            base.BaseAwakeCalls();
        }
        public override void BaseUpdateCalls()
        {
            base.BaseUpdateCalls();
            if (nextBlock == null)
                FindNextBlock();
            else
            {
                ReachedDestination = CheckReached();
            }

            if (!ReachedDestination)
                Move();
        }

        public override void Init()
        {
            float minDist = float.MaxValue;
            for(int index = 0; index < HexagonalGrid.enemyGoal.Count; index++)
            {
                float dist = HelperMethods.SquaredDistance(transform.position, HexagonalGrid.enemyGoal[index].transform.position);
                if (dist < minDist)
                {
                    endBlock = HexagonalGrid.enemyGoal[index];
                    minDist = dist;
                }
            }
            if (CurrentBlock != null)
                nextBlock = NavigationManager.instance.FindNext(currentBlock, EndBlock);
        }

        //Needs to be called by the script that
        public void SetStartBlock(HexagonalBlock startBlock)
        {
            CurrentBlock = startBlock;
            if(EndBlock != null)
                nextBlock = NavigationManager.instance.FindNext(currentBlock, EndBlock);
        }

        public override bool HasAllDependencies()
        {
            if (hexagonalGrid.isInitialized && navigationManager.isInitialized)
                return true;
            return false;
        }

        public void Move()
        {
            transform.position = Vector3.MoveTowards(transform.position, nextBlock.transform.position, speed * Time.deltaTime);
        }

        public bool CheckReached()
        {
            if (NextBlock == null)
            {
                Debug.LogWarning("Warning! Can't find navigation target");
                return false;
            }
            else if (HelperMethods.SquaredDistance(transform.position, NextBlock.transform.position) < ReachedThreshold)
            {
                FindNextBlock();
                if (NextBlock == null || NextBlock == CurrentBlock)
                    return true;
            }
            return false;
        }

        public void FindNextBlock()
        {
            if(NextBlock != null)
                CurrentBlock = NextBlock;
            NextBlock = NavigationManager.instance.FindNext(CurrentBlock, EndBlock);
        }
    }
}
