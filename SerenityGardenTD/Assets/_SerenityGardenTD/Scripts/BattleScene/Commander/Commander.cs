using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class Commander : LogicProcessBase, IMovable, IAttacker<EnemyBase>
    {
        public CommanderScriptable statuses;
        public Transform firePoint;
        public GameObject bulletPrefab;
        public GameObject rangePrefab;

        private GameObject rangeObj;
        private HexagonalGrid hexagonalGrid;
        private NavigationManager navigationManager;

        private HexagonalBlock endBlock;

        private bool powerupTurret;
        private BuildableTurret powerupTarget;

        //Will retain the type of the block that the commander moves towards, so that we can reset it when he leaves the block
        private HexagonType previousEndBlockType = HexagonType.Walkable;

        #region Inherited Properties
        public HexagonalBlock CurrentBlock { get; set; }
        public HexagonalBlock EndBlock
        {
            get { return endBlock; }
            set
            {
                //Reset the current block of the commander
                if(endBlock != null)
                    endBlock.Type = previousEndBlockType;
                endBlock = value;
                if (endBlock != null)
                {
                    //Remember the type of the block that we are moving towards, and set it to Occupied.
                    previousEndBlockType = endBlock.Type;
                    endBlock.Type = HexagonType.Occupied;
                }
            }
        }
        public HexagonalBlock NextBlock { get; set; }
        public float Speed { get; set; }
        public float ReachedThreshold { get; set; } = 0.01f;
        public bool ReachedDestination { get; set; } = true;
        public EnemyBase Target { get; set; }
        public int Damage { get; set; }
        public float Range { get; set; }
        public float AttackCooldown { get; set; }
        public float LastAttackTime { get; set; }
        public float SearchTargetCooldown { get; set; }
        public float LastSearchTargetTime { get; set; }
        #endregion

        private void Awake()
        {
            hexagonalGrid = FindObjectOfType<HexagonalGrid>();
            navigationManager = FindObjectOfType<NavigationManager>();
            base.BaseAwakeCalls();
        }

        private void Start()
        {
            base.BaseStartCalls();
        }

        private void Update()
        {
            if (!GamePauseManager.GamePaused)
            {
                base.BaseUpdateCalls();

                if (ReachedDestination == false)
                {
                    if (NextBlock == null)
                        FindNextBlock();    //If we don't have a destination, the search for it
                    else
                    {
                        //Otherwise, check to see if we reached the destination
                        ReachedDestination = CheckReachedTarget();
                        if(ReachedDestination)
                        {
                            //If we reached the destination and we need to power up a turret
                            if (powerupTurret)
                            {
                                if (powerupTarget != null)
                                {
                                    //Then power up the turret and hide the commander
                                    powerupTarget.HasCommander = true;
                                    gameObject.SetActive(false);
                                    powerupTurret = false;
                                }
                            }
                        }
                    }
                    if (ReachedDestination == false)
                        Move();
                }
                else //Attack only if we reached a destination
                {
                    //At certain time intervals check to find if a turret/something that we can attack is in range
                    if (Time.time - LastSearchTargetTime > SearchTargetCooldown && Target == null)
                        FindTarget();

                    //At certain time intervals, attack the target, if it exists
                    if (Time.time - LastAttackTime > AttackCooldown && Target != null)
                        Attack();
                }
            }
        }

        //Called when we click on ui, it will move towards the turret and when he collides with it, he will enter the turret, increasing it's stats
        public void PowerupTurret(BuildableTurret selectedTurret)
        {
            powerupTurret = true;
            EndBlock = selectedTurret.hexagonBlock;
            powerupTarget = selectedTurret;
            ReachedDestination = false;
        }

        public void Attack()
        {
            if (Target != null)
            {
                HelperMethods.RotateObjTowardsTarget(transform, Target.transform.position, true);

                //Shoot a bullet towards it
                BulletMovement bulletScript = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation).GetComponent<BulletMovement>();
                bulletScript.damage = Damage;
                bulletScript.enemyBullet = false;
                bulletScript.SetTarget(Target.transform.position);
                LastAttackTime = Time.time;
            }
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

        public void DrawRange(bool draw)
        {
            //Draw/destroy the range
            if (draw && rangeObj == null)
            {
                rangeObj = Instantiate(rangePrefab, transform.position, transform.rotation);
                rangeObj.transform.localScale = Vector3.one * Range;
            }
            if (!draw && rangeObj != null)
                DestroyImmediate(rangeObj);
        }

        public void FindNextBlock()
        {
            if (NextBlock != null)
                CurrentBlock = NextBlock;
            NextBlock = NavigationManager.instance.FindNext(CurrentBlock, EndBlock);
        }

        public void FindTarget()
        {
            //It can find melee enemies, but who knows, maybe a ranged enemy will be close enough so that it can hit it. It is unlikely, but worth checking for.
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
            EnemyBase _target = null;
            EnemyBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
                if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                {
                    if (aux.EnemyType == EnemyType.Melee || aux.EnemyType == EnemyType.Ranged)
                    {
                        _target = aux;
                        minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
                    }

                    if (aux == LockOnManager.SelectedEnemy)
                        break;
                }
            }
            Target = _target;
            LastSearchTargetTime = Time.time;
        }

        public override bool HasAllDependencies()
        {
            //This script is dependent on the hexagonal grid and the navigation system
            return hexagonalGrid.isInitialized && navigationManager.isInitialized;
        }

        public override void Init()
        {
            Speed = statuses.speed;
            Damage = statuses.damage;
            Range = statuses.range;
            AttackCooldown = statuses.attackCooldown;
        }

        public void Move()
        {
            //Rotate the object towards the target destination
            HelperMethods.RotateObjTowardsTarget(transform, NextBlock.transform.position, true, Speed * Time.deltaTime);

            //Move method that doesn't use pysics, because it doesn't need to be precise
            HelperMethods.MoveTowards(transform, NextBlock.transform.position, Speed * Time.deltaTime, true);
        }
    }
}