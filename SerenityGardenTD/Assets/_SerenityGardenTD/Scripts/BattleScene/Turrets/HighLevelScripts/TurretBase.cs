using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public enum TurretType
    {
        PlayerBase,
        MachineGun,
        ElectricFence,
        Vulkan,
        MachineCannon,
        Railgun,
        Excavator
    }

    public abstract class TurretBase : LogicProcessBase, IDestroyable, IAttacker<EnemyBase>
    {
        public GameObject rangePrefab;
        [HideInInspector] public TurretType turretType;
        public GameObject gfx;

        protected float searchTargetDelay = 0.1f;
        protected float lastSearchTargetTime = 0;
        protected EnemyBase foundTarget;

        protected float attackCooldown;
        protected float lastAttackTime;

        protected int health;
        protected int damage;
        protected float range;

        private GameObject rangeObj;

        #region Properties
        public int Health
        {
            get { return health; }
            set
            {
                health = value;
                if (value < 0)
                    Die();
            }
        }
        public int DestroyReward 
        { 
            get { return 0; } 
            set { } 
        }
        public EnemyBase Target 
        { 
            get { return foundTarget; } 
            set { foundTarget = value; } 
        }
        public int Damage 
        { 
            get { return damage; }
            set { damage = value; }
        }
        public float AttackCooldown 
        { 
            get { return attackCooldown; }
            set { attackCooldown = value; }
        }
        public float Range 
        { 
            get { return range; }
            set { range = value; }
        }

        public float LastAttackTime 
        {
            get { return lastAttackTime; }
            set { lastAttackTime = value; }
        }

        public float SearchTargetCooldown 
        {
            get { return searchTargetDelay; }
            set { searchTargetDelay = value; }
        }
        public float LastSearchTargetTime 
        { 
            get { return lastSearchTargetTime; }
            set { lastSearchTargetTime = value; }
        }
        #endregion

        public override void BaseUpdateCalls()
        {
            base.BaseUpdateCalls();
            if (Time.time - LastSearchTargetTime > SearchTargetCooldown)
                FindTarget();
            if (Time.time - LastAttackTime > AttackCooldown)
                Attack();
        }

        public void DrawRange(bool draw)
        {
            if(draw && rangeObj == null)
            {
                rangeObj = Instantiate(rangePrefab, transform.position, transform.rotation);
                rangeObj.transform.localScale = Vector3.one * range;
            }
            if (!draw && rangeObj != null)
                Destroy(rangeObj);
        }

        public abstract void FindTarget();

        public override bool HasAllDependencies()
        {
            return true;
        }

        public override void Init()
        {
            
        }

        public abstract void Attack();
        public virtual void Die()
        {
            Destroy(this.gameObject);
        }
    }
}