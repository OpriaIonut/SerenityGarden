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
    public class GridList
    {
        public List<int> list;
        public GridList(List<int> values)
        {
            list = values;
        }
    }

    /// <summary>
    /// Class used for saving grid preset to a json file.
    /// </summary>
    public class GridSaveData
    {
        public float diameter;
        public float offset;
        public GridList blockTypes;
        public GridList blockSpawnIds;

        public GridSaveData(float _diameter, float _offset, List<int> hexagonTypes, List<int> spawnId)
        {
            diameter = _diameter;
            offset = _offset;
            blockTypes = new GridList(hexagonTypes);
            blockSpawnIds = new GridList(spawnId);
        }
    }

    public class HexagonalGrid : LogicProcessBase
    {
        [Header("Prefabs")]
        public GameObject playerBasePrefab;
        public GameObject commanderPrefab;
        public GameObject hexagonPrefab;
        public GameObject walkableArea;

        [Header("Scaling properties")]
        public float diameter;
        public float offset = -0.15f;

        //Reference to all instantiated blocks
        public List<HexagonalBlock> gridCells = new List<HexagonalBlock>();

        public static List<HexagonalBlock> enemyGoal;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
        }

        public override void Init()
        {
            if (gridCells.Count != 0)
                ClearGrid();
            LoadPresetGrid(Application.streamingAssetsPath + "/" + SceneManager.GetActiveScene().name + ".json");
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
            for(int index = 0; index < gridCells.Count; index++)
            {
                if (gridCells[index] == null)
                    gridCells.RemoveAt(index);
                else
                    DestroyImmediate(gridCells[index].gameObject);
            }
            gridCells.Clear();
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
                Debug.LogError("Could not load preset grid.");
                CreateGrid();
                return;
            }
            try
            {
                //Get contents from json file
                string contents = File.ReadAllText(savePath);
                GridSaveData saveData = JsonConvert.DeserializeObject<GridSaveData>(contents);
                diameter = saveData.diameter;
                offset = saveData.offset;

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
                    if (gridCells[index].Type == HexagonType.PlayerBase)
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

            Bounds bounds = walkableArea.GetComponent<MeshRenderer>().bounds;

            //Some math formula for calculating the side of a echilateral hexagon based on the radius
            float sideLength = Mathf.Abs(diameter * Mathf.Sin(30));

            //The spawn method will be left to right, down to up
            //In order to have a hexagonal grid, some cells will be higher than others, this flip bool will control that
            bool flip = false;
            float zTarget;
            for (float z = bounds.min.z + diameter / 2; z < bounds.max.z; z += diameter + offset / 4)
            {
                for (float x = bounds.min.x + diameter / 2; x < bounds.max.x; x += diameter / 2 + sideLength / 2 + offset)
                {
                    zTarget = flip ? z : z + diameter / 2;
                    flip = !flip;

                    //Place the block
                    HexagonalBlock block = Instantiate(hexagonPrefab, transform).GetComponent<HexagonalBlock>();
                    block.PlaceHexagon(new Vector3(x, bounds.min.y, zTarget), diameter);

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