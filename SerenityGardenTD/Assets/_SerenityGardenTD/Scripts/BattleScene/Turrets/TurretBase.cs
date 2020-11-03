using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public enum TyrretType
    {
        PlayerBase,
        MachineGun,
        ElectricFence,
        Vulkan,
        MachineCannon,
        Railgun,
        Excavator
    }

    public abstract class TurretBase : LogicProcessBase
    {
        public int health;
        public int damage;
        public TyrretType type;
        public float attackCooldown;
        public float range;

        public void DrawRange()
        {

        }

        public void FindTarget()
        {

        }

        public override bool HasAllDependencies()
        {
            return true;
        }

        public override void Init()
        {
            BattleProcessManager.instance.PrepareToInitialize(this);
        }

        public abstract void Attack();
        public abstract void Die();
    }
}