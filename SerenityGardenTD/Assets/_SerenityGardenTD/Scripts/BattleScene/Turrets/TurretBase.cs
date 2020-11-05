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
        public GameObject rangePrefab;

        public int health;
        public int damage;
        public TyrretType type;
        public float attackCooldown;
        public float range;

        private GameObject rangeObj;

        /// <summary>
        /// Draw the range of the turret
        /// </summary>
        /// <param name="draw">If set to false it will hide the range</param>
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