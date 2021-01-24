using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public abstract class BuildableTurret : TurretBase, IRecoverable
    {
        //Block that the turret will sit on
        [HideInInspector] public HexagonalBlock hexagonBlock;
        public TurretStatusScriptable turretUpgradePattern;

        private List<Material> beforeRecoveryMaterial;

        public GameObject partToRotate;
        public GameObject firePoint;
        private GameObject levelGfx;

        private int currentLevel;
        public int CurrentLevel
        {
            get { return currentLevel; }
            set { currentLevel = value; }
        }

        public bool IsRecovering { get; set; }
        public float RecoveryCostPer1Hp { get; set; } = 1;
        public float RecoveryPerSecond { get; set; } = 20;

        //private int maxHealth;
        //public int MaxHealth
        //{
        //    get { return maxHealth; }
        //}


        //Will specify if the turret is powered up by the commander or not
        private bool hasCommander = false;
        public bool HasCommander
        {
            get { return hasCommander; }
            set
            {
                //If we had a range displayed, hide it, because the range property will be displayed too
                if(rangeObj != null)
                    DrawRange(false);
                if (hasCommander == false && value == true)
                {
                    //If the commander entered the turret now, then power up the turret
                    Range *= 2;
                    AttackCooldown /= 2;
                    Damage *= 2;
                }
                else if(hasCommander == true && value == false)
                {
                    //If the commander leaves the turret, then reset the properties
                    Range /= 2;
                    AttackCooldown *= 2;
                    Damage /= 2;
                }
                hasCommander = value;
                if (rangeObj != null)
                    DrawRange(true);
            }
        }

        private float currentRecovery = 0;
        private float recoveryAmmount;

        public override void BaseStartCalls()
        {
            base.BaseStartCalls();
            SetLevelProp(0);
            beforeRecoveryMaterial = new List<Material>();
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

                        MeshRenderer[] renderers = gameObject.GetComponentsInChildren<MeshRenderer>();
                        for(int index = 0; index < renderers.Length; index++)
                        {
                            renderers[index].material = beforeRecoveryMaterial[index];
                        }
                        beforeRecoveryMaterial.Clear();

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

            //When upgrading a turret, the first time (when setting level to 0) it won't have the proper connections, so make them
            if (levelGfx == null)
            {
                levelGfx = HelperMethods.FindChildWithName(transform, "GFX").transform.GetChild(0).gameObject;
                if (levelGfx != null)
                {
                    firePoint = HelperMethods.FindChildWithName(levelGfx.transform, "FirePoint");
                    partToRotate = HelperMethods.FindChildWithName(levelGfx.transform, "PartToRotate");
                }
            }
            else
            {
                //Otherwise, if it has the connections, it means that it's not the instantiation of the turret
                //So destroy the previous gfx
                Destroy(levelGfx);

                //Instantiate a new one and set up the connections
                Transform gfxParent = HelperMethods.FindChildWithName(transform, "GFX").transform;
                levelGfx = Instantiate(turretUpgradePattern.levelProp[level].gfx, gfxParent);
                levelGfx.transform.position += Vector3.up * 0.04f;
                if (levelGfx != null)
                {
                    firePoint = HelperMethods.FindChildWithName(levelGfx.transform, "FirePoint");
                    partToRotate = HelperMethods.FindChildWithName(levelGfx.transform, "PartToRotate");
                }
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
            DrawRange(false);
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

        public bool StartRecovery(Material recoveryMaterial)
        {
            if (Health != maxHealth && IsRecovering == false)
            {
                IsRecovering = true;
                recoveryAmmount = maxHealth - Health;

                beforeRecoveryMaterial.Clear();
                MeshRenderer[] renderers = gameObject.GetComponentsInChildren<MeshRenderer>();
                foreach(MeshRenderer rend in renderers)
                {
                    beforeRecoveryMaterial.Add(rend.material);
                    Color col = rend.material.color;
                    rend.material = recoveryMaterial;
                    rend.material.SetColor("Color_F53F0220", col);
                }

                return true;
            }
            return false;
        }
    }
}