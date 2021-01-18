using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using UnityEngine.SceneManagement;
using System.IO;
using System;

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

            if (gridCells.Count != 0)
                ClearGrid();
            SpawnAndScaleMap();
            LoadPresetGrid(Application.streamingAssetsPath + "/" + selectedStage.stageName + ".json");
        }

        public override bool HasAllDependencies()
        {
            return true;
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
            Bounds bounds = walkableArea.GetComponent<MeshRenderer>().bounds;
            Vector3 screenBoundsMin = Camera.main.WorldToScreenPoint(bounds.min);
            Vector3 screenBoundsMax = Camera.main.WorldToScreenPoint(bounds.max);
            float widthDiff = screenBoundsMax.x - screenBoundsMin.x;
            float heightDiff = screenBoundsMax.y - screenBoundsMin.y;

            float xScale = (Screen.width * walkableArea.transform.localScale.x) / widthDiff;
            float yScale = (Screen.height * walkableArea.transform.localScale.x) / heightDiff;

            scaleFact = xScale < yScale ? xScale : yScale;
            scaleFact += mapScaleOffset;
            walkableArea.transform.localScale = new Vector3(scaleFact, scaleFact, scaleFact);
            Physics.SyncTransforms();
        }

        /// <summary>
        /// Load the grid from a preset file, if it exists
        /// </summary>
        /// <param name="savePath"></param>
        public void LoadPresetGrid(string savePath)
        {
            if (!File.Exists(savePath))
            {
                //If we didn't find the file, then throw an error
                Debug.LogError("Could not load preset grid at: " + savePath);
                CreateGrid();
                return;
            }
            try
            {
                Debug.Log("Grid File path: " + savePath);
                //Get contents from json file
                //string contents = File.ReadAllText(savePath);
                //Debug.Log("Contents: " + contents);
                GridSaveData saveData = GridDataSaver.LoadData(savePath);
                //GridSaveData saveData = JsonConvert.DeserializeObject<GridSaveData>(contents);
                Debug.Log("Grid Loaded successfully");

                diameter = saveData.diameter;
                offset = saveData.offset;
                mapScaleOffset = saveData.mapScaleOffset;

                CreateGrid();

                //Set the properties for each grid cell
                List<float> xPos = new List<float>();
                List<float> zPos = new List<float>();
                float yPos = 0;
                enemyGoal = new List<HexagonalBlock>();
                HexagonalBlock commanderSpawnBlock = null;
                for (int index = 0; index < gridCells.Count; index++)
                {
                    gridCells[index].Type = (HexagonType)saveData.blockTypes.list[index];
                    gridCells[index].spawnPointsID = (SpawnPointsID)saveData.blockSpawnIds.list[index];
                    if (gridCells[index].Type == HexagonType.PlayerBase && isInitialized == true)
                    {
                        enemyGoal.Add(gridCells[index]);
                        yPos = gridCells[index].transform.position.y;
                        if (!xPos.Contains(gridCells[index].transform.position.x))
                            xPos.Add(gridCells[index].transform.position.x);
                        if (!zPos.Contains(gridCells[index].transform.position.z))
                            zPos.Add(gridCells[index].transform.position.z);

                        gridCells[index].Type = HexagonType.Occupied;
                    }
                    if(gridCells[index].Type == HexagonType.CommanderSpawn)
                    {
                        if(commanderSpawnBlock == null)
                        {
                            commanderSpawnBlock = gridCells[index];
                        }
                        else
                            Debug.LogWarning("Warning! there are multiple commander spawn points.");
                    }
                }
                if(isInitialized)
                {
                    //Spawn the commander character
                    if (commanderSpawnBlock == null)
                        Debug.LogWarning("Warning! couldn't find a commander spawn block.");
                    else
                    {
                        GameObject commander = Instantiate(commanderPrefab);
                        commander.transform.position = commanderSpawnBlock.transform.position;
                        Commander script = commander.GetComponent<Commander>();
                        script.CurrentBlock = commanderSpawnBlock;

                        //Will be set to occupied by the property EndBlock. It needs to be Walkable so that when the commander leaves the block, it will set it to walkable
                        commanderSpawnBlock.Type = HexagonType.Walkable;
                        script.EndBlock = commanderSpawnBlock;
                    }

                    //If it is initialized, then calculate where to spawn the player's base
                    float xMean = 0;
                    float zMean = 0;
                    for(int index = 0; index < xPos.Count; index++)
                        xMean += xPos[index];
                    for (int index = 0; index < zPos.Count; index++)
                        zMean += zPos[index];

                    xMean /= xPos.Count;
                    zMean /= zPos.Count;

                    Instantiate(playerBasePrefab, new Vector3(xMean, yPos, zMean), Quaternion.identity);
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