using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using UnityEngine.SceneManagement;
using System.IO;
using System;

namespace SerenityGarden
{
    public class GridList
    {
        public List<int> gridTypes;
        public GridList(List<int> values)
        {
            gridTypes = values;
        }
    }

    public class GridSaveData
    {
        public float diameter;
        public float offset;
        public GridList gridList;

        public GridSaveData(float _diameter, float _offset, List<int> hexagonTypes)
        {
            diameter = _diameter;
            offset = _offset;
            gridList = new GridList(hexagonTypes);
        }
    }

    public class HexagonalGrid : MonoBehaviour
    {
        public GameObject hexagonPrefab;
        public GameObject walkableArea;
        public float diameter;
        public float offset = -0.15f;

        public List<HexagonalBlock> gridCells = new List<HexagonalBlock>();

        private void Start()
        {
            if (gridCells.Count != 0)
                ClearGrid();
            LoadPresetGrid(Application.streamingAssetsPath + "/" + SceneManager.GetActiveScene().name + ".json");
        }

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

        public void LoadPresetGrid(string savePath)
        {
            if (!File.Exists(savePath))
            {
                Debug.LogError("Could not load preset grid.");
                CreateGrid();
                return;
            }
            try
            {
                string contents = File.ReadAllText(savePath);
                GridSaveData saveData = JsonConvert.DeserializeObject<GridSaveData>(contents);
                diameter = saveData.diameter;
                offset = saveData.offset;

                CreateGrid();
                for (int index = 0; index < gridCells.Count; index++)
                {
                    gridCells[index].Type = (HexagonType)saveData.gridList.gridTypes[index];
                }
            }
            catch (Exception ex)
            {
                Debug.LogWarning("Could not load json at: " + savePath + "; Message: " + ex.Message);
            }
        }

        public void CreateGrid()
        {
            ClearGrid();

            Bounds bounds = walkableArea.GetComponent<MeshRenderer>().bounds;

            //Some math formula for calculating the side of a echilateral hexagon based on the radius
            float sideLength = Mathf.Abs(diameter * Mathf.Sin(30));

            bool flip = false;
            float zTarget;
            for (float z = bounds.min.z + diameter / 2; z < bounds.max.z; z += diameter + offset / 4)
            {
                for (float x = bounds.min.x + diameter / 2; x < bounds.max.x; x += diameter / 2 + sideLength / 2 + offset)
                {
                    zTarget = flip ? z : z + diameter / 2;
                    flip = !flip;

                    HexagonalBlock block = Instantiate(hexagonPrefab, transform).GetComponent<HexagonalBlock>();
                    block.PlaceHexagon(new Vector3(x, bounds.min.y, zTarget), diameter);

                    bool cond = false;
                    RaycastHit[] hit = Physics.RaycastAll(new Ray(block.transform.position + Vector3.up, Vector3.down));
                    foreach (RaycastHit item in hit)
                    {
                        if (item.transform.gameObject.tag == "WalkableArea")
                            cond = true;
                    }
                    if (!cond)
                        DestroyImmediate(block.gameObject);
                    else
                        gridCells.Add(block);
                }
                flip = false;
            }
        }

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