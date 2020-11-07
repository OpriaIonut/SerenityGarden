using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public abstract class BuildableTurret : TurretBase
    {
        public HexagonalBlock hexagonBlock;
        public TurretUpgradeScriptable turretUpgradePattern;

        private int currentLevel;
        public int CurrentLevel
        {
            get { return currentLevel; }
            set { currentLevel = value; }
        }

        public override void BaseStartCalls()
        {
            base.BaseStartCalls();
            SetLevelProp(0);
        }

        public void SetLevelProp(int level)
        {
            turretType = turretUpgradePattern.turretType;

            Health = turretUpgradePattern.levelProp[level].health;
            Damage = turretUpgradePattern.levelProp[level].damage;
            Range = turretUpgradePattern.levelProp[level].range;

            DrawRange(false);
        }

        public void Upgrade()
        {
            //To do: if we have enough money
            if(currentLevel < turretUpgradePattern.levelProp.Length)
            {
                currentLevel++;
                SetLevelProp(currentLevel);
            }
        }
    }
}