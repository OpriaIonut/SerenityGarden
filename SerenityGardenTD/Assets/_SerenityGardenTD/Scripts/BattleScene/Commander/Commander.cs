using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace SerenityGarden
{
    public class Commander : LogicProcessBase, IMovable, IAttacker<EnemyBase>, IPunObservable, IPunInstantiateMagicCallback
    {
        public CommanderScriptable status;  //Scriptable object that specified the status of the commander.
        public Transform firePoint;
        public GameObject bulletPrefab;
        public GameObject rangePrefab;  //Range prefab shown when we click on the commander.
        public TMPro.TextMeshProUGUI networkNameText;
        public Animator anim;

        private GameObject rangeObj;
        private HexagonalGrid hexagonalGrid;
        private NavigationManager navigationManager;
        private CommanderUI commanderUI;

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
                if (netReceivedEndBlock)
                    netReceivedEndBlock = false;
                else
                    netSendEndBlock = true;
            }
        }
        public HexagonalBlock NextBlock { get; set; }
        public float Speed { get; set; }
        public float ReachedThreshold { get; set; } = 0.01f;
        public bool ReachedDestination { get; set; } = true;
        public EnemyBase Target { get; set; }
        public float Damage { get; set; }
        public float Range { get; set; }
        public float AttackCooldown { get; set; }
        public float LastAttackTime { get; set; }
        public float SearchTargetCooldown { get; set; }
        public float LastSearchTargetTime { get; set; }
        #endregion

        #region NetworkingVariables

        private bool netSendEndBlock = false;
        private bool netReceivedEndBlock = false;

        private bool netSendPowerupTarget = false;
        private bool netReceivedPowerup = false;

        private bool netSendUnpowerup = false;
        private bool netReceivedUnpowerup = false;

        #endregion

        protected BossBase boss;

        private void Awake()
        {
            hexagonalGrid = FindObjectOfType<HexagonalGrid>();
            navigationManager = FindObjectOfType<NavigationManager>();
            base.BaseAwakeCalls();
        }

        private void Start()
        {
            commanderUI = FindObjectOfType<CommanderUI>();
            base.BaseStartCalls();

            if (PhotonNetwork.IsConnected)
                networkNameText.text = photonView.Owner.NickName;
            else
                networkNameText.transform.parent.parent.gameObject.SetActive(false);

            if (SceneDataRetainer.instance.GetStage().isBossStage)
                boss = FindObjectOfType<BossBase>();
        }

        private void Update()
        {
            if (!GamePauseManager.instance.GamePaused)
            {
                base.BaseUpdateCalls();

                if (Target != null || boss != null)
                    anim.SetBool("EnemyInRange", true);
                else
                    anim.SetBool("EnemyInRange", false);

                if (ReachedDestination == false)
                {
                    anim.SetBool("IsMoving", true);

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
                                    commanderUI.PowerupTarget(powerupTarget.gameObject);
                                }
                            }
                        }
                    }
                    if (ReachedDestination == false)
                        Move();
                }
                else //Attack only if we reached a destination
                {
                    anim.SetBool("IsMoving", false);

                    //At certain time intervals check to find if a turret/something that we can attack is in range
                    if (Time.time - LastSearchTargetTime > SearchTargetCooldown)
                        FindTarget();

                    //At certain time intervals, attack the target, if it exists
                    if (Time.time - LastAttackTime > AttackCooldown && (Target != null || boss != null))
                        Attack();
                }
            }
        }

        //Called when we click on ui, it will move towards the turret and when he collides with it, he will enter the turret, increasing it's stats
        public void PowerupTurret(BuildableTurret selectedTurret)
        {
            if (netReceivedPowerup)
                netReceivedPowerup = false;
            else
                netSendPowerupTarget = true;

            powerupTurret = true;
            EndBlock = selectedTurret.hexagonBlock;
            powerupTarget = selectedTurret;
            ReachedDestination = false;
        }

        public void UnpowerupTurret(BuildableTurret selectedTurret)
        {
            //In coop mode the commander will be set to move somewhere becfore the turret he is occupying is sold, so in that case don't try to find a new destination because he'll pick a wrong one.
            if (PhotonNetwork.IsConnected && !ReachedDestination)
                return;

            //Find the place to position the commander;
            HexagonalBlock closestPos = null;
            for (float range = 0.1f; true; range += 0.1f)
            {
                Collider[] hits = Physics.OverlapSphere(selectedTurret.transform.position, range);
                foreach (Collider item in hits)
                {
                    HexagonalBlock current = item.transform.gameObject.GetComponent<HexagonalBlock>();
                    if (current != null && current.Type == HexagonType.Walkable)
                    {
                        closestPos = current;
                        break;
                    }
                }
                if (closestPos != null)
                    break;
            }
            CurrentBlock = closestPos;
            EndBlock = closestPos;
            ReachedDestination = false;
            //netSendEndBlock = true;
            FindNextBlock();
        }

        public void Attack()
        {
            if (Target != null)
            {
                LastAttackTime = Time.time;
                StartCoroutine("AttackWithAnim");
            }
            else if(boss != null)
            {
                LastAttackTime = Time.time;
                StartCoroutine("AttackWithAnim");
            }
        }

        private IEnumerator AttackWithAnim()
        {
            if (Target != null)
            {
                anim.SetTrigger("Attack");
                HelperMethods.RotateObjTowardsTarget(transform, Target.transform.position, true);

                yield return new WaitForSeconds(0.1f);

                //Shoot a bullet towards it
                BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.position, firePoint.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
                bulletScript.damage = Damage;
                bulletScript.SetTarget(Target.gameObject);
                LastAttackTime = Time.time;
            }
            else if (boss != null)
            {
                anim.SetTrigger("Attack");
                HelperMethods.RotateObjTowardsTarget(transform, boss.transform.position, true);

                yield return new WaitForSeconds(0.1f);

                //Shoot a bullet towards it
                BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.position, firePoint.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
                bulletScript.damage = Damage;
                bulletScript.SetTarget(boss.gameObject);
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
                rangeObj = Instantiate(rangePrefab);
                rangeObj.transform.position = transform.position;
                rangeObj.transform.localScale = transform.localScale * Range / 1.25f; //Coefficient set in Init() for properly scaling obj
            }
            if (!draw && rangeObj != null)
                DestroyImmediate(rangeObj);
        }

        public void FindNextBlock()
        {
            if (NextBlock != null)
                CurrentBlock = NextBlock;
            NextBlock = NavigationManager.instance.FindNextBlock(CurrentBlock, EndBlock);
        }

        public void FindTarget()
        {
            Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2 * transform.localScale.x / 1.25f);
            EnemyBase _target = null;
            EnemyBase aux;
            float minDist = float.MaxValue;
            foreach (Collider item in hits)
            {
                aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
                if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
                {
                    _target = aux;
                    minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);

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
            return hexagonalGrid.isInitialized && navigationManager.isInitialized && InstantiationManager.instance != null;
        }

        public override void Init()
        {
            //Scale the object based so that it fits the scale of the map.
            Bounds bounds;
            Bounds hexagonBounds;
            if (HelperMethods.FindBoundsSkinnedMesh(gameObject, out bounds) && HelperMethods.FindBounds(HexagonalGrid.instance.gridCells[0].gameObject, out hexagonBounds))
            {
                float diameter = Mathf.Abs(hexagonBounds.min.x - hexagonBounds.max.x) * 2;
                float currentDist = HelperMethods.SquaredDistance(bounds.min, bounds.max);

                float targetScale = (diameter * transform.localScale.x) / currentDist;
                transform.localScale = Vector3.one * targetScale * 1.25f;
            }

            Speed = status.speed;
            Damage = status.damage;
            Range = status.range;
            AttackCooldown = status.attackCooldown;
        }

        public void Move()
        {
            //Rotate the object towards the target destination
            HelperMethods.RotateObjTowardsTarget(transform, NextBlock.transform.position, true, Speed * Time.deltaTime);

            //Move method that doesn't use pysics, because it doesn't need to be precise
            HelperMethods.MoveTowards(transform, NextBlock.transform.position, Speed * Time.deltaTime, true);
        }

        public void OnPhotonInstantiate(PhotonMessageInfo info)
        {
            commanderUI = FindObjectOfType<CommanderUI>();
            Commander[] commanders = FindObjectsOfType<Commander>();
            foreach (Commander chief in commanders)
            {
                if (chief.photonView.IsMine)
                    commanderUI.commander = chief;
                else
                    commanderUI.otherPlayerCommander = chief;
            }
        }

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                if (netSendPowerupTarget)
                {
                    stream.SendNext("PowerupTarget");
                    stream.SendNext(powerupTarget.photonView.ViewID);
                    netSendPowerupTarget = false;
                }
                else if (netSendEndBlock)
                {
                    stream.SendNext("UpdateEndBlock");
                    stream.SendNext(EndBlock.name);
                    netSendEndBlock = false;
                }
                
            }
            if (stream.IsReading)
            {
                string receivedMessage = stream.ReceiveNext().ToString();
                object receivedObj = stream.ReceiveNext();

                if (receivedMessage == "UpdateEndBlock")
                {
                    netReceivedEndBlock = true;
                    string objName = receivedObj.ToString();
                    if (objName != null)
                    {
                        GameObject objToFind = GameObject.Find(objName);
                        if (objToFind != null)
                        {
                            HexagonalBlock block = objToFind.GetComponent<HexagonalBlock>();
                            if (CurrentBlock == null)
                            {
                                CurrentBlock = block;
                                block.Type = HexagonType.Walkable;
                            }
                            EndBlock = block;
                            ReachedDestination = false;
                        }
                    }
                }
                else if(receivedMessage == "PowerupTarget")
                {
                    int viewId = (int)receivedObj;
                    PhotonView[] views = FindObjectsOfType<PhotonView>();
                    foreach(PhotonView item in views)
                    {
                        if(item.ViewID == viewId)
                        {
                            BuildableTurret script = item.gameObject.GetComponent<BuildableTurret>();
                            netReceivedPowerup = true;
                            PowerupTurret(script);
                            break;
                        }
                    }
                }
            }
        }
    }
}