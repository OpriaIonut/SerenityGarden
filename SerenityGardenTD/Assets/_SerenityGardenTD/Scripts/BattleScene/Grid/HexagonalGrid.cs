using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using UnityEngine.SceneManagement;
using System.IO;
using System;
using Photon.Pun;

namespace SerenityGarden
{
    /// <summary>
    /// Class used to display the list in the editor.
    /// </summary>
    public class BlockTypes
    {
        public List<int> list { get; set; }
        public BlockTypes(List<int> values)
        {
            list = values;
        }
    }

    public class BlockSpawnIds
    {
        public List<int> list { get; set; }
        public BlockSpawnIds(List<int> values)
        {
            list = values;
        }
    }

    /// <summary>
    /// Class used for saving grid preset to a json file.
    /// </summary>
    public class GridSaveData
    {
        public float diameter { get; set; }
        public float offset { get; set; }
        public float mapScaleOffset { get; set; }
        public BlockTypes blockTypes { get; set; }
        public BlockSpawnIds blockSpawnIds { get; set; }

        public GridSaveData(float _diameter, float _offset, float _mapScaleOffset, List<int> hexagonTypes, List<int> spawnId)
        {
            diameter = _diameter;
            offset = _offset;
            mapScaleOffset = _mapScaleOffset;
            blockTypes = new BlockTypes(hexagonTypes);
            blockSpawnIds = new BlockSpawnIds(spawnId);
        }
    }

    public class HexagonalGrid : LogicProcessBase
    {
        #region Singleton
        public static HexagonalGrid instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! There are multiple instances of HexagonalGrid in the scene. Deleting from " + gameObject.name);
                return;
            }
            else
                instance = this;

            if (gridCells == null)
                gridCells = new List<HexagonalBlock>();
            BaseAwakeCalls();   //Call initialization for this process
        }
        #endregion

        [Header("Prefabs")]
        public GameObject playerBasePrefab;
        public GameObject commanderPrefab;
        public GameObject hexagonPrefab;

        [Header("Scaling properties")]
        public float diameter;
        public float offset = -0.15f;
        //The map will be scaled to fit the screen. But we will want to scale it so that the spawn points don't show up, so we will use this scale offset for that.
        public float mapScaleOffset;


        public string mapPresetFile;

        public StageScriptable selectedStage;
        //Reference to all instantiated blocks
        public List<HexagonalBlock> gridCells;

        public static List<HexagonalBlock> enemyGoal;


        public float scaleFact;
        public GameObject walkableArea;

        private void Start()
        {
            BaseStartCalls();
        }

        public override void Init()
        {
            selectedStage = SceneDataRetainer.instance.GetStage();
            mapScaleOffset = 1;
            string savePath = selectedStage.stageFilePath + "/" + selectedStage.stageName + ".json";

            if (gridCells.Count != 0)
                ClearGrid();

            string contents = FileManager.GetFileContents(true, savePath);
            if (contents != null && contents != "")
            {
                GridSaveData saveData = GridDataSaver.LoadData(contents);
                diameter = saveData.diameter;
                offset = saveData.offset;
                mapScaleOffset = saveData.mapScaleOffset;
            }

            SpawnAndScaleMap();
            LoadPresetGrid(savePath);
        }

        public override bool HasAllDependencies()
        {
            return InstantiationManager.instance != null;
        }

        /// <summary>
        /// Destroy the entire grid
        /// </summary>
        public void ClearGrid()
        {
            if (gridCells == null)
                gridCells = new List<HexagonalBlock>();

            for(int index = 0; index < gridCells.Count; index++)
            {
                if (gridCells[index] == null)
                    gridCells.RemoveAt(index);
                else
                    DestroyImmediate(gridCells[index].gameObject);
            }
            gridCells.Clear();
        }

        public void SpawnAndScaleMap()
        {
            walkableArea = Instantiate(selectedStage.mapObj, Vector3.zero, Quaternion.identity);
            walkableArea.AddComponent<MeshCollider>();
            walkableArea.tag = "WalkableArea";
            ScaleMap();
        }

        public void ScaleMap()
        {
            //Find the bounds of the map in screen coordinates
            Bounds bounds = walkableArea.GetComponent<MeshRenderer>().bounds;
            Vector3 screenBoundsMin = Camera.main.WorldToScreenPoint(bounds.min);
            Vector3 screenBoundsMax = Camera.main.WorldToScreenPoint(bounds.max);

            //Find the width and height from screen bounds
            float widthDiff = screenBoundsMax.x - screenBoundsMin.x;
            float heightDiff = screenBoundsMax.y - screenBoundsMin.y;

            Debug.Log("Screen: " + Screen.width + " " + Screen.height);
            //Find the factor the map needs to be scaled by to fill the entire screen
            float xScale = (Screen.width * walkableArea.transform.localScale.x) / widthDiff;
            float yScale = (Screen.height * walkableArea.transform.localScale.x) / heightDiff;

            //Pick the minimum scale (so that the entire map is shown) and add an offset to hide the spawn points
            scaleFact = xScale < yScale ? xScale : yScale;
            scaleFact += mapScaleOffset;
            walkableArea.transform.localScale = new Vector3(scaleFact, scaleFact, scaleFact);

            //Apply physics so that we can raycast to it
            Physics.SyncTransforms();
        }

        /// <summary>
        /// Load the grid from a preset file, if it exists
        /// </summary>
        /// <param name="savePath"></param>
        public void LoadPresetGrid(string savePath)
        {
            string contents = FileManager.GetFileContents(true, savePath);

            if (contents == null || contents == "")
            {
                //If we didn't find the file, then throw an error
                Debug.LogError("Could not load preset grid at: " + savePath);
                CreateGrid();
                return;
            }
            try
            {
                GridSaveData saveData = GridDataSaver.LoadData(contents);

                diameter = saveData.diameter;
                offset = saveData.offset;
                mapScaleOffset = saveData.mapScaleOffset;

                CreateGrid();

                //Set the properties for each grid cell
                List<Transform> playerSpawn = new List<Transform>();

                enemyGoal = new List<HexagonalBlock>();
                HexagonalBlock commanderSpawnBlock = null;
                for (int index = 0; index < gridCells.Count; index++)
                {
                    gridCells[index].Type = (HexagonType)saveData.blockTypes.list[index];
                    gridCells[index].spawnPointsID = (SpawnPointsID)saveData.blockSpawnIds.list[index];
                    if (isInitialized)
                    {

                        if (PhotonNetwork.IsMasterClient)
                        {
                            if (gridCells[index].Type == HexagonType.PlayerBase1 && !playerSpawn.Contains(gridCells[index].transform))
                            {
                                playerSpawn.Add(gridCells[index].transform);
                                gridCells[index].Type = HexagonType.Occupied;
                                enemyGoal.Add(gridCells[index]);
                            }
                            if (gridCells[index].Type == HexagonType.CommanderSpawn1)
                            {
                                if (commanderSpawnBlock == null)
                                    commanderSpawnBlock = gridCells[index];
                                else
                                    Debug.LogWarning("Warning! there are multiple commander spawn blocks");
                            }
                        }
                        else
                        {
                            if (gridCells[index].Type == HexagonType.PlayerBase2 && !playerSpawn.Contains(gridCells[index].transform))
                            {
                                playerSpawn.Add(gridCells[index].transform);
                                gridCells[index].Type = HexagonType.Occupied;
                                enemyGoal.Add(gridCells[index]);
                            }
                            if (gridCells[index].Type == HexagonType.CommanderSpawn2)
                            {
                                if (commanderSpawnBlock == null)
                                    commanderSpawnBlock = gridCells[index];
                                else
                                    Debug.LogWarning("Warning! there are multiple commander spawn blocks");
                            }
                        }
                    }
                }
                if(isInitialized)
                {
                    //Spawn the commander character
                    if (commanderSpawnBlock == null)
                        Debug.LogWarning("Warning! couldn't find a commander spawn block.");
                    else
                    {
                        GameObject commander = InstantiationManager.instance.InstantiateWithCheck(commanderPrefab, commanderSpawnBlock.transform.position, Quaternion.identity, PhotonObj.Commander);
                        Commander script = commander.GetComponent<Commander>();
                        script.CurrentBlock = commanderSpawnBlock;

                        //Will be set to occupied by the property EndBlock. It needs to be Walkable so that when the commander leaves the block, it will set it to walkable
                        commanderSpawnBlock.Type = HexagonType.Walkable;
                        script.EndBlock = commanderSpawnBlock;
                    }

                    //If it is initialized, then calculate where to spawn the player's base
                    float xMean = 0, zMean = 0;
                    for(int index = 0; index < playerSpawn.Count; index++)
                    {
                        xMean += playerSpawn[index].position.x;
                        zMean += playerSpawn[index].position.z;
                    }
                    xMean /= playerSpawn.Count;
                    zMean /= playerSpawn.Count;
                    Vector3 spawnPos = new Vector3(xMean, playerSpawn[0].position.y, zMean);

                    InstantiationManager.instance.InstantiateWithCheck(playerBasePrefab, spawnPos, Quaternion.identity, PhotonObj.PlayerBase);
                    Physics.SyncTransforms();
                }
            }
            catch (Exception ex)
            {
                Debug.LogWarning("Could not load json at: " + savePath + "; Message: " + ex.Message);
            }
        }

        /// <summary>
        /// The grid will be created based on diameter, radius, walkable area
        /// </summary>
        public void CreateGrid()
        {
            ClearGrid();

            if (scaleFact == 0)
                ScaleMap();

            float scaledDiameter = diameter * scaleFact;
            float scaledOffset = offset * scaleFact;

            Bounds bounds = walkableArea.GetComponent<MeshRenderer>().bounds;

            //Some math formula for calculating the side of a echilateral hexagon based on the radius
            float sideLength = Mathf.Abs(scaledDiameter * Mathf.Sin(30));

            //The spawn method will be left to right, down to up
            //In order to have a hexagonal grid, some cells will be higher than others, this flip bool will control that
            bool flip = false;
            float zTarget;
            for (float z = bounds.min.z + scaledDiameter / 2; z < bounds.max.z; z += scaledDiameter + scaledOffset / 4)
            {
                for (float x = bounds.min.x + scaledDiameter / 2; x < bounds.max.x; x += scaledDiameter / 2 + sideLength / 2 + scaledOffset)
                {
                    zTarget = flip ? z : z + scaledDiameter / 2;
                    flip = !flip;

                    //Place the block
                    HexagonalBlock block = Instantiate(hexagonPrefab, transform).GetComponent<HexagonalBlock>();
                    block.PlaceHexagon(new Vector3(x, bounds.min.y, zTarget), scaledDiameter);
                    block.name = "HexagonalBlock " + gridCells.Count;
                    //Check to see if it is within the playable area
                    bool cond = false;
                    RaycastHit[] hit = Physics.RaycastAll(new Ray(block.transform.position + Vector3.up, Vector3.down * 10));
                    foreach (RaycastHit item in hit)
                    {
                        if (item.transform.gameObject.tag == "WalkableArea")
                            cond = true;
                    }
                    if (!cond) //If it isn't, then destroy a gameobject
                        DestroyImmediate(block.gameObject);
                    else
                    {
                        block.listId = gridCells.Count;
                        gridCells.Add(block);
                    }
                }
                flip = false;
            }
        }

        /// <summary>
        /// At certain points in the game, I will want to show only certain types of hexagons
        /// </summary>
        /// <param name="type"></param>
        public void ShowCellsOfType(HexagonType type)
        {
            foreach(HexagonalBlock item in gridCells)
            {
                if (item.Type == type)
                    item.gameObject.SetActive(true);
                else
                    item.gameObject.SetActive(false);
            }
        }
    }
}