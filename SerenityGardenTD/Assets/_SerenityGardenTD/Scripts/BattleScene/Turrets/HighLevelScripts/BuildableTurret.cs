using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace SerenityGarden
{
    public abstract class BuildableTurret : TurretBase, IRecoverable, IPunInstantiateMagicCallback, IPunObservable
    {
        //Block that the turret will sit on
        [HideInInspector] public HexagonalBlock hexagonBlock;

        private List<Material> beforeRecoveryMaterial;

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
                if (rangeObj != null)
                    DrawRange(false);
                if (hasCommander == false && value == true)
                {
                    //If the commander entered the turret now, then power up the turret
                    Range *= 1.5f;
                    AttackCooldown /= 1.5f;
                    Damage *= 1.5f;
                }
                else if (hasCommander == true && value == false)
                {
                    //If the commander leaves the turret, then reset the properties
                    Range /= 1.5f;
                    AttackCooldown *= 1.5f;
                    Damage /= 1.5f;
                }
                hasCommander = value;
                if (rangeObj != null)
                    DrawRange(true);
            }
        }

        private float currentRecovery = 0;
        private float recoveryAmmount;

        private bool netSendTurretSell = false;
        private bool netSendTurretUpgrade = false;
        private bool netSendTurretRepair = false;

        private bool netReceivedEventData = false;


        public override void BaseStartCalls()
        {
            base.BaseStartCalls();
            SetLevelProp(0);
            beforeRecoveryMaterial = new List<Material>();

            if (SceneDataRetainer.instance.GetStage().isBossStage)
                boss = FindObjectOfType<BossBase>();
        }

        public override void BaseUpdateCalls()
        {
            base.BaseUpdateCalls();

            if (IsRecovering)
            {
                currentRecovery += 1 / RecoveryPerSecond;
                if (currentRecovery > 1)
                {
                    Health += (int)currentRecovery;
                    recoveryAmmount -= (int)currentRecovery;
                    currentRecovery -= (int)currentRecovery;
                    if (recoveryAmmount <= 0)
                    {
                        if (Health > maxHealth)
                            health = maxHealth;

                        MeshRenderer[] renderers = gameObject.GetComponentsInChildren<MeshRenderer>();
                        for (int index = 0; index < renderers.Length; index++)
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
                if (boss == null)
                {
                    //Search for a target at certain intervals
                    if (Time.time - LastSearchTargetTime > SearchTargetCooldown)
                        FindTarget();
                    if (Time.time - LastAttackTime > AttackCooldown)
                        Attack();
                }
                else
                {
                    if (Time.time - LastAttackTime > AttackCooldown)
                        AttackBoss();
                }
            }
        }

        public bool Upgrade()
        {
            if (currentLevel < turretUpgradePattern.levelProp.Length - 1)
            {
                currentLevel++;
                SetLevelProp(currentLevel);
                DrawRange(false);

                if (netReceivedEventData)
                    netReceivedEventData = false;
                else
                    netSendTurretUpgrade = true;

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
                foreach (MeshRenderer rend in renderers)
                {
                    beforeRecoveryMaterial.Add(rend.material);
                    //Color col = rend.material.color;
                    rend.material = recoveryMaterial;
                    //rend.material.SetColor("Color_F53F0220", col);
                }

                if (netReceivedEventData)
                    netReceivedEventData = false;
                else
                    netSendTurretRepair = true;

                return true;
            }
            return false;
        }

        public void SellTurret()
        {
            //Reset the grid block to what it was before
            if (turretType == TurretType.Excavator)
                hexagonBlock.Type = HexagonType.ResourceExtraction;
            else
                hexagonBlock.Type = HexagonType.TurretBuildable;

            if (PhotonNetwork.IsConnected && PhotonNetwork.CurrentRoom.PlayerCount > 1)
            {
                if (netReceivedEventData)
                {
                    netReceivedEventData = false;
                    Destroy(gameObject);
                }
                else
                    netSendTurretSell = true;
            }
            else
            {
                Destroy(gameObject);
            }
            DrawRange(false);
        }

        public void OnPhotonInstantiate(PhotonMessageInfo info)
        {
            object[] initData = info.photonView.InstantiationData;

            if (initData != null)
            {
                string hexagonName = initData[0].ToString();
                hexagonBlock = GameObject.Find(hexagonName).GetComponent<HexagonalBlock>();
                hexagonBlock.Type = HexagonType.Occupied;

                //Scale the object based so that it fits the scale of the map.
                Bounds bounds;
                Bounds hexagonBounds;
                if (HelperMethods.FindBounds(gameObject, out bounds) && HelperMethods.FindBounds(HexagonalGrid.instance.gridCells[0].gameObject, out hexagonBounds))
                {
                    float diameter = Mathf.Abs(hexagonBounds.min.x - hexagonBounds.max.x);
                    float currentDist = HelperMethods.SquaredDistance(bounds.min, bounds.max);
                    float targetScale = (diameter * transform.localScale.x) / currentDist;
                    transform.localScale = Vector3.one * targetScale;
                    transform.position = hexagonBlock.transform.position;
                }
            }
        }

        private void OnDestroy()
        {
            if (turretType == TurretType.Excavator)
                hexagonBlock.Type = HexagonType.ResourceExtraction;
            else
                hexagonBlock.Type = HexagonType.TurretBuildable;
        }

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                string eventType = "";
                if (netSendTurretUpgrade)
                {
                    eventType = "Upgrade";
                    netSendTurretUpgrade = false;
                }
                if (netSendTurretRepair)
                {
                    eventType = "Repair";
                    netSendTurretRepair = false;
                }
                if(netSendTurretSell)
                {
                    eventType = "Sell";
                    netSendTurretSell = false;
                    Destroy(gameObject);
                }
                stream.SendNext(eventType);
                stream.SendNext(Health);
            }
            if (stream.IsReading)
            {
                string eventType = stream.ReceiveNext().ToString();
                Health = (float)stream.ReceiveNext();

                if (eventType == "Upgrade")
                {
                    netReceivedEventData = true;
                    Upgrade();
                }
                if (eventType == "Repair")
                {
                    netReceivedEventData = true;
                    StartRecovery(TurretBuildManager.instance.recoveryMaterial);
                }
                if(eventType == "Sell")
                {
                    netReceivedEventData = true;
                    SceneClickManager.instance.selectedTurret = this;
                    TurretBuildManager.instance._SellTurret();
                }
            }
        }
    }
}