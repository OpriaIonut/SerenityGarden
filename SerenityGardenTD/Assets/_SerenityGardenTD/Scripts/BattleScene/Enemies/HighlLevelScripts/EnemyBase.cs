using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    //The types of enemies. Will influence their attack patterns, turret FindTarget and other stuff
    public enum EnemyType
    {
        Melee,
        Ranged,
        Flying,
        Ambusher
    }

    public abstract class EnemyBase : LogicProcessBase, IMovable, IAttacker<TurretBase>, IDestroyable
    {
        //Scriptable object that will set the starting properties of the current enemy
        public EnemyScriptable enemyScriptable;

        //Reference to the navigation manager and the horizontal grid, used for navigation mostly
        private NavigationManager navigationManager;
        private HexagonalGrid hexagonalGrid;

        //Health property.
        private int health;

        #region Properties

        public EnemyType EnemyType { get; set; }
        public int Health
        {
            get { return health; }
            set 
            { 
                health = value;
                if (health < 0)
                    Die();
            }
        }

        //Automatic properties that don't need variables, because they are very simple.
        public int DestroyReward { get; set; }

        //Properties inherited from IMovable interface
        #region IMovable
        public HexagonalBlock CurrentBlock { get; set; }        //The current hexagon that the enemy sits on
        public HexagonalBlock EndBlock { get; set; }            //The goal block that it needs to reach
        public HexagonalBlock NextBlock { get; set; }           //The next block that it will move towards
        public float Speed { get; set; } = 1.0f;                //Movement speed
        //Used to set how close enough to the NextBlock until we consider that it reached the destination
        public float ReachedThreshold { get; set; } = 0.5f;
        //Bool to know if it reached the end goal
        public bool ReachedDestination { get; set; } = false;
        #endregion

        //Properties inherited from IAttacker interface
        #region IAttacker
        public TurretBase Target { get; set; }      //Turret that is in it's range, if it is, it will attack it
        public int Damage { get; set; }
        public float Range { get; set; }
        public float AttackCooldown { get; set; }   //How often it attacks
        public float LastAttackTime { get; set; }
        //We won't search on all frames because it may get expensive. It's better if we check only on certain frames
        public float SearchTargetCooldown { get; set; } = 0.1f;
        public float LastSearchTargetTime { get; set; }
        #endregion

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
            if (NextBlock == null)
                FindNextBlock();    //If we don't have a destination, the search for it
            else
            {
                //Otherwise, check to see if we reached the destination
                ReachedDestination = CheckReachedTarget();
            }

            //If we didn't reach the destination then move towards it
            if (!ReachedDestination && Target == null)
                Move();

            //At certain time intervals check to find if a turret/something that we can attack is in range
            if (Time.time - LastSearchTargetTime > SearchTargetCooldown && Target == null)
                FindTarget();

            //At certain time intervals, attack the target, if it exists
            if (Time.time - LastAttackTime > AttackCooldown && Target != null)
                Attack();
        }

        public override void Init()
        {
            //Find the goal that we need to reach
            float minDist = float.MaxValue;
            for(int index = 0; index < HexagonalGrid.enemyGoal.Count; index++)
            {
                float dist = HelperMethods.SquaredDistance(transform.position, HexagonalGrid.enemyGoal[index].transform.position);
                if (dist < minDist)
                {
                    EndBlock = HexagonalGrid.enemyGoal[index];
                    minDist = dist;
                }
            }
            if (CurrentBlock != null)
                NextBlock = NavigationManager.instance.FindNext(CurrentBlock, EndBlock);

            //Set the curren't enemy's properties based on the scriptable object.
            EnemyType = enemyScriptable.enemyType;
            Health = enemyScriptable.health;
            Speed = enemyScriptable.speed;
            Range = enemyScriptable.range;
            Damage = enemyScriptable.damage;
            AttackCooldown = enemyScriptable.attackCooldown;
            DestroyReward = enemyScriptable.killReward;
        }

        /// <summary>
        /// Needs to be called by the script that instantiates this enemy
        /// </summary>
        /// <param name="startBlock"></param>
        public void SetStartBlock(HexagonalBlock startBlock)
        {
            CurrentBlock = startBlock;
            if(EndBlock != null)
                NextBlock = NavigationManager.instance.FindNext(CurrentBlock, EndBlock);
        }

        public override bool HasAllDependencies()
        {
            //This script is dependent on the hexagonal grid and the navigation system
            return hexagonalGrid.isInitialized && navigationManager.isInitialized;
        }

        public virtual void Move()
        {
            //Move method that doesn't use pysics, because it doesn't need to be precise
            transform.position = Vector3.MoveTowards(transform.position, NextBlock.transform.position, Speed * Time.deltaTime);
        }

        public bool CheckReachedTarget()
        {
            if (NextBlock == null)
            {
                Debug.LogWarning("Warning! Can't find navigation target");
                return false;
            }
            else if (HelperMethods.SquaredDistance(transform.position, NextBlock.transform.position) < ReachedThreshold)
            {
                //If we have reached the destination, then find a new one
                FindNextBlock();
                if (NextBlock == null || NextBlock == CurrentBlock)
                    return true;
            }
            return false;
        }

        public virtual void FindNextBlock()
        {
            if(NextBlock != null)
                CurrentBlock = NextBlock;
            NextBlock = NavigationManager.instance.FindNext(CurrentBlock, EndBlock);
        }

        public void DrawRange(bool draw)
        {
            //Intentionally left empty
        }

        public virtual void FindTarget()
        {
            //Using physics.OverlapSphere, check to see if a turret is in range and find the closest one
            Collider[] hits = Physics.OverlapSphere(transform.position, Range);
            TurretBase _target = null;
            TurretBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<TurretBase>();
                if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                {
                    _target = aux;
                    minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
                }
            }
            Target = _target;
            LastSearchTargetTime = Time.time;
        }

        public abstract void Attack();

        public void Die()
        {
            //To do: add money
            Destroy(gameObject);
        }
    }
}
