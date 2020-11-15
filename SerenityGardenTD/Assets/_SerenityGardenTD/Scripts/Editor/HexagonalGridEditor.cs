using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using Newtonsoft.Json;
using UnityEngine.SceneManagement;
using System.IO;
using System;

namespace SerenityGarden
{
    [CustomEditor(typeof(HexagonalGrid))]
    public class HexagonalGridEditor : Editor
    {
        private HexagonalGrid grid;

        //To do: change this to Application.persistentDataPath
        private string savePath;

        private void OnEnable()
        {
            savePath = Application.streamingAssetsPath + "/" + SceneManager.GetActiveScene().name + ".json";
            grid = (HexagonalGrid)target;
        }

        public override void OnInspectorGUI()
        {
            //Draw object fields for prefabs needed
            grid.playerBasePrefab = (GameObject)EditorGUILayout.ObjectField("PlayerBasePrefab: ", grid.playerBasePrefab, typeof(GameObject));
            grid.commanderPrefab = (GameObject)EditorGUILayout.ObjectField("Commander Prefab: ", grid.commanderPrefab, typeof(GameObject));
            GameObject walkableArea = (GameObject)EditorGUILayout.ObjectField("Walkable Area: ", grid.walkableArea, typeof(GameObject));
            if (walkableArea.GetComponent<MeshRenderer>())
                grid.walkableArea = walkableArea;

            //Variables used for grid scale calculation
            grid.diameter = EditorGUILayout.FloatField("Hexagon Diameter: ", grid.diameter);
            grid.offset = EditorGUILayout.FloatField("Hexagon Offset: ", grid.offset);

            if(GUILayout.Button("Generate Grid"))
            {
                //If we clicked generate grid, we first need to clear the previous one
                grid.ClearGrid();
                grid.CreateGrid();
            }
            if(GUILayout.Button("Clear Grid"))
            {
                grid.ClearGrid();
            }

            if(GUILayout.Button("Load Preset"))
            {
                //Will load the grid setup from the file with the same name as the scene
                grid.ClearGrid();
                grid.LoadPresetGrid(savePath);
            }

            if(GUILayout.Button("Save Preset"))
            {
                //Will save the current grid to a preset
                SavePreset();
            }
        }

        /// <summary>
        /// Will save the current grid to a file with the same name as the scene
        /// </summary>
        private void SavePreset()
        {
            if (grid.gridCells.Count == 0)
            {
                Debug.LogWarning("Could not save grid preset.");
                return;
            }

            //Save all data
            List<int> gridType = new List<int>();
            List<int> gridSpawnId = new List<int>();
            foreach(HexagonalBlock item in grid.gridCells)
            {
                gridType.Add((int)item.Type);
                gridSpawnId.Add((int)item.spawnPointsID);
            }
            GridSaveData gridSaveData = new GridSaveData(grid.diameter, grid.offset, gridType, gridSpawnId);
            string json = JsonConvert.SerializeObject(gridSaveData, Formatting.Indented);
            File.WriteAllText(savePath, json);
        }
    }
}