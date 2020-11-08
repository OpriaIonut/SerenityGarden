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

    public abstract class EnemyBase : LogicProcessBase, IMovable, IAttacker<TurretBase>, IDestroyable
    {
        public EnemyScriptable enemyScriptable;
        private NavigationManager navigationManager;
        private HexagonalGrid hexagonalGrid;

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
        public int DestroyReward { get; set; }

        #region IMovable
        public HexagonalBlock CurrentBlock { get; set; }
        public HexagonalBlock EndBlock { get; set; }
        public HexagonalBlock NextBlock { get; set; }
        public float Speed { get; set; } = 1.0f;
        public float ReachedThreshold { get; set; } = 0.5f;
        public bool ReachedDestination { get; set; } = false;
        #endregion

        #region IAttacker
        public TurretBase Target { get; set; }
        public int Damage { get; set; }
        public float Range { get; set; }
        public float AttackCooldown { get; set; }
        public float LastAttackTime { get; set; }
        public float SearchTargetCooldown { get; set; } = 0.05f;
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
                FindNextBlock();
            else
            {
                ReachedDestination = CheckReached();
            }

            if (!ReachedDestination && Target == null)
                Move();

            if (Time.time - LastSearchTargetTime > SearchTargetCooldown && Target == null)
                FindTarget();

            if (Time.time - LastAttackTime > AttackCooldown && Target != null)
                Attack();
        }

        public override void Init()
        {
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

            EnemyType = enemyScriptable.enemyType;
            Health = enemyScriptable.health;
            Speed = enemyScriptable.speed;
            Range = enemyScriptable.range;
            Damage = enemyScriptable.damage;
            AttackCooldown = enemyScriptable.attackCooldown;
            DestroyReward = enemyScriptable.killReward;
        }

        //Needs to be called by the script that
        public void SetStartBlock(HexagonalBlock startBlock)
        {
            CurrentBlock = startBlock;
            if(EndBlock != null)
                NextBlock = NavigationManager.instance.FindNext(CurrentBlock, EndBlock);
        }

        public override bool HasAllDependencies()
        {
            if (hexagonalGrid.isInitialized && navigationManager.isInitialized)
                return true;
            return false;
        }

        public virtual void Move()
        {
            transform.position = Vector3.MoveTowards(transform.position, NextBlock.transform.position, Speed * Time.deltaTime);
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
