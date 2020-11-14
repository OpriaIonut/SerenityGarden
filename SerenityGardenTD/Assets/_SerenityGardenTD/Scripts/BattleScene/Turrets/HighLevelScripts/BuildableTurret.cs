using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public abstract class BuildableTurret : TurretBase, IRecoverable
    {
        //Block that the turret will sit on
        [HideInInspector] public HexagonalBlock hexagonBlock;
        public TurretStatus turretUpgradePattern;

        private int currentLevel;
        public int CurrentLevel
        {
            get { return currentLevel; }
            set { currentLevel = value; }
        }

        public bool IsRecovering { get; set; }
        public float RecoveryCostPer1Hp { get; set; } = 1;
        public float RecoveryPerSecond { get; set; } = 20;

        private float currentRecovery = 0;
        private float recoveryAmmount;

        public override void BaseStartCalls()
        {
            base.BaseStartCalls();
            SetLevelProp(0);
        }

        public override void BaseUpdateCalls()
        {
            base.BaseUpdateCalls();
            if(IsRecovering)
            {
                currentRecovery += 1 / RecoveryPerSecond;
                if(currentRecovery > 1)
                {
                    Health += (int)currentRecovery;
                    recoveryAmmount -= (int)currentRecovery;
                    currentRecovery -= (int)currentRecovery;
                    if(recoveryAmmount <= 0)
                    {
                        if (Health > maxHealth)
                            health = maxHealth;
                        IsRecovering = false;
                        currentRecovery = 0;
                    }
                }
            }
            else
            {
                //Search for a target at certain intervals
                if (Time.time - LastSearchTargetTime > SearchTargetCooldown)
                    FindTarget();
                if (Time.time - LastAttackTime > AttackCooldown)
                    Attack();
            }
        }

        /// <summary>
        /// Will set the turret to be at the give level
        /// </summary>
        /// <param name="level">starts at 0</param>
        public void SetLevelProp(int level)
        {
            if(level < 0 || level >= turretUpgradePattern.levelProp.Length)
            {
                Debug.LogWarning("Could not set prop level for turret: " + gameObject.name + "; level: " + level);
                return;
            }

            turretType = turretUpgradePattern.turretType;

            maxHealth = turretUpgradePattern.levelProp[level].health;
            Health = turretUpgradePattern.levelProp[level].health;
            Damage = turretUpgradePattern.levelProp[level].damage;
            Range = turretUpgradePattern.levelProp[level].range;
            AttackCooldown = turretUpgradePattern.levelProp[level].attackCooldown;
            DestroyReward = turretUpgradePattern.levelProp[level].sellReward;

            DrawRange(false);
        }

        public bool Upgrade()
        {
            //To do: if we have enough money
            if(currentLevel < turretUpgradePattern.levelProp.Length - 1)
            {
                currentLevel++;
                SetLevelProp(currentLevel);
                return true;
            }
            return false;
        }

        public override void Die()
        {
            if (turretType == TurretType.Excavator)
                hexagonBlock.Type = HexagonType.ResourceExtraction;
            else
                hexagonBlock.Type = HexagonType.TurretBuildable;
            base.Die();
        }

        public int GetRecoveryCost()
        {
            return (int)((maxHealth - Health) * RecoveryCostPer1Hp);
        }

        public int GetBuildCost()
        {
            return turretUpgradePattern.levelProp[0].upgradeCost;
        }

        public int GetUpgradeCost()
        {
            if (currentLevel != turretUpgradePattern.levelProp.Length - 1)
                return turretUpgradePattern.levelProp[currentLevel + 1].upgradeCost;
            else
                return 0;   //We are at the last level so return 0, as there are no more upgrades
        }

        public bool StartRecovery()
        {
            if (Health != maxHealth && IsRecovering == false)
            {
                IsRecovering = true;
                recoveryAmmount = maxHealth - Health;
                return true;
            }
            return false;
        }
    }
}