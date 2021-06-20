using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

namespace SerenityGarden
{
    [System.Serializable]
    public enum TurretType
    {
        PlayerBase,
        MachineGun,
        ElectricFence,
        Vulkan,
        Flamethrower,
        Laser,
        Excavator
    }

    public abstract class TurretBase : LogicProcessBase, IDestroyable, IAttacker<EnemyBase>
    {
        //Prefab for the range object, that will be shown when selecting a turret
        public GameObject rangePrefab;
        [HideInInspector] public TurretType turretType;
        public Image healthbarUI;
        public Gradient healthGradient;

        public TurretStatusScriptable turretUpgradePattern;

        public GameObject partToRotate;
        public GameObject firePoint;
        public TMPro.TextMeshProUGUI networkNameText;
        private GameObject levelGfx;

        //A delay time for searching for a target, because it may be an expensive process to do every frame
        protected float searchTargetDelay = 0.1f;
        protected float lastSearchTargetTime = 0;
        protected EnemyBase foundTarget;

        protected float attackCooldown;
        protected float lastAttackTime;

        protected float maxHealth;
        protected float health;
        protected float damage;
        protected float range;

        //Instantiated range object. It will be deleted when deselecting a turret
        protected GameObject rangeObj;

        protected PhotonView view;

        #region Properties
        public float MaxHealth { get { return maxHealth; } }
        public float Health
        {
            get { return health; }
            set
            {
                health = value;
                if (maxHealth == 0)
                    maxHealth = value;

                if (maxHealth != 0)
                {
                    healthbarUI.fillAmount = health / (float)maxHealth;
                    healthbarUI.color = healthGradient.Evaluate(healthbarUI.fillAmount);
                }
                if (value < 0)
                    Die();
            }
        }
        public int DestroyReward { get; set; }
        public EnemyBase Target 
        { 
            get { return foundTarget; } 
            set { foundTarget = value; } 
        }
        public float Damage 
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

        protected BossBase boss;

        public override void BaseStartCalls()
        {
            view = GetComponent<PhotonView>();
            base.BaseStartCalls();
            GamePauseManager.instance.AddUnpauseEvent(OnResumeGame);


            if (PhotonNetwork.IsConnected)
            {
                if (gameObject.GetComponent<PlayerBase>() && transform.rotation.y == 1)
                {
                    Transform canvasTransf = networkNameText.transform.parent.parent;
                    canvasTransf.Rotate(Vector3.up, 180.0f, Space.World);
                    canvasTransf.localPosition = new Vector3(canvasTransf.localPosition.x, canvasTransf.localPosition.y, -canvasTransf.localPosition.z);
                }
                networkNameText.text = view.Owner.NickName;
            }
            else
                networkNameText.transform.parent.parent.gameObject.SetActive(false);
        }

        /// <summary>
        /// Will set the turret to be at the give level
        /// </summary>
        /// <param name="level">starts at 0</param>
        public virtual void SetLevelProp(int level)
        {
            if (level < 0 || level >= turretUpgradePattern.levelProp.Length)
            {
                Debug.LogWarning("Could not set prop level for turret: " + gameObject.name + "; level: " + level);
                return;
            }

            turretType = turretUpgradePattern.turretType;

            if (turretType != TurretType.PlayerBase)
            {
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
                    DestroyImmediate(levelGfx);

                    //Instantiate a new one and set up the connections
                    Transform gfxParent = HelperMethods.FindChildWithName(transform, "GFX").transform;
                    levelGfx = Instantiate(turretUpgradePattern.levelProp[level].gfx, gfxParent);
                    levelGfx.transform.position += Vector3.up * 0.04f;
                    if (levelGfx != null)
                    {
                        firePoint = HelperMethods.FindChildWithName(levelGfx.transform, "FirePoint");
                        partToRotate = HelperMethods.FindChildWithName(levelGfx.transform, "PartToRotate");
                    }

                    if (PhotonNetwork.IsConnectedAndReady && turretType != TurretType.Excavator)
                    {
                        PhotonTransformView tView = partToRotate.AddComponent<PhotonTransformView>();
                        tView.m_SynchronizePosition = false;
                        tView.m_SynchronizeRotation = true;
                        tView.m_SynchronizeScale = false;
                    }
                }
            }
            else if(level != 0)
            {
                Debug.LogWarning("Warning! Wrong level for player base. Received level: " + level);
                return;
            }

            //Find the permanent upgrades for the current turret
            TurretPermanentUpgrades permanentUpgrade = SceneDataRetainer.instance.GetMultipliers(turretType);

            if (permanentUpgrade == null)
            {
                //If we don't have one, set the statuses to their starting values
                Debug.LogWarning("Warning! could not find permanent upgrades");

                float healthDiff = maxHealth - health;

                maxHealth = turretUpgradePattern.levelProp[level].health;
                Health = maxHealth - healthDiff;
                Damage = turretUpgradePattern.levelProp[level].damage;
                Range = turretUpgradePattern.levelProp[level].range;
                AttackCooldown = turretUpgradePattern.levelProp[level].attackCooldown;
                DestroyReward = turretUpgradePattern.levelProp[level].sellReward;
            }
            else
            {
                //Otherwise, take into account the multipliers bought by the player.
                float healthDiff = maxHealth - health;

                maxHealth = turretUpgradePattern.levelProp[level].health * permanentUpgrade.GetMultiplier(UpgradeType.Health);
                Health = maxHealth - healthDiff;
                Damage = turretUpgradePattern.levelProp[level].damage * permanentUpgrade.GetMultiplier(UpgradeType.Damage);
                Range = turretUpgradePattern.levelProp[level].range * permanentUpgrade.GetMultiplier(UpgradeType.Range);
                AttackCooldown = turretUpgradePattern.levelProp[level].attackCooldown / permanentUpgrade.GetMultiplier(UpgradeType.FireRate);
                DestroyReward = turretUpgradePattern.levelProp[level].sellReward;
            }

            BuildableTurret turretCast = gameObject.GetComponent<BuildableTurret>();
            if(turretCast != null && turretCast.HasCommander)
            {
                Range *= 1.5f;
                AttackCooldown /= 1.5f;
                Damage *= 1.5f;
                CommanderUI.instance.PowerupTarget(gameObject);
            }

            DrawRange(false);
        }

        //Pausing time will mess up the attack time, so we need to correct the problem when unpausing
        private void OnResumeGame()
        {
            LastAttackTime += GamePauseManager.instance.PausedTime;
            LastSearchTargetTime += GamePauseManager.instance.PausedTime;
        }

        public void DrawRange(bool draw)
        {
            //Draw/destroy the range
            if(draw && rangeObj == null)
            {
                rangeObj = Instantiate(rangePrefab);
                rangeObj.transform.position = transform.position;
                rangeObj.transform.localScale = transform.localScale * range;
            }
            if (!draw && rangeObj != null)
                Destroy(rangeObj);
        }

        public abstract void FindTarget();

        public override bool HasAllDependencies()
        {
            //Id doesn't have any dependencies at the moment, but it needs the other methods from LogicProcessBase
            return HexagonalGrid.instance != null && HexagonalGrid.instance.isInitialized;
        }

        public abstract void Attack();
        public abstract void AttackBoss();
        public virtual void Die()
        {
            if (SceneClickManager.instance.selectedTurret == this)
            {
                SceneClickManager.instance.DisablePreviousStates();
                SceneClickManager.instance.UpdateSelectedReferences();
            }
            Destroy(this.gameObject);
        }

        public override void Init()
        {
            if (photonView == null)
            {
                //Scale the object based so that it fits the scale of the map.
                Bounds bounds;
                Bounds hexagonBounds;
                if (HelperMethods.FindBounds(gameObject, out bounds) && HelperMethods.FindBounds(HexagonalGrid.instance.gridCells[0].gameObject, out hexagonBounds))
                {
                    float diameter = Mathf.Abs(hexagonBounds.min.x - hexagonBounds.max.x);
                    float currentDist = HelperMethods.SquaredDistance(bounds.min, bounds.max);

                    float targetScale = (diameter * transform.localScale.x) / currentDist;
                    transform.localScale = Vector3.one * targetScale;
                }
            }
        }

        public override void BaseUpdateCalls()
        {
            base.BaseUpdateCalls();
        }
    }
}