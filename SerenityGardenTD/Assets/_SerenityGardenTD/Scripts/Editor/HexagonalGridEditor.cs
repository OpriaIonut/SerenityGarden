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

        private void OnEnable()
        {
            grid = (HexagonalGrid)target;
        }

        public override void OnInspectorGUI()
        {
            //Draw object fields for prefabs needed
            grid.playerBasePrefab = (GameObject)EditorGUILayout.ObjectField("PlayerBasePrefab: ", grid.playerBasePrefab, typeof(GameObject));
            grid.commanderPrefab = (GameObject)EditorGUILayout.ObjectField("Commander Prefab: ", grid.commanderPrefab, typeof(GameObject));
            grid.walkableArea = (GameObject)EditorGUILayout.ObjectField("Walkable Area: ", grid.walkableArea, typeof(GameObject));

            //Variables used for grid scale calculation
            grid.diameter = EditorGUILayout.FloatField("Hexagon Diameter: ", grid.diameter);
            grid.offset = EditorGUILayout.FloatField("Hexagon Offset: ", grid.offset);
            grid.mapScaleOffset = EditorGUILayout.FloatField("Map scale offset: ", grid.mapScaleOffset);
            grid.mapPresetFile = EditorGUILayout.TextField("Map preset file name: ", grid.mapPresetFile);

            GUILayout.Space(10);
            if (GUILayout.Button("Scale Map"))
            {
                grid.ScaleMap();
            }
            if(GUILayout.Button("Reset Scale"))
            {
                grid.walkableArea.transform.localScale = Vector3.one;
            }

            GUILayout.Space(10);
            if (GUILayout.Button("Generate Grid"))
            {
                //If we clicked generate grid, we first need to clear the previous one
                grid.ClearGrid();
                grid.CreateGrid();
            }
            if(GUILayout.Button("Clear Grid"))
            {
                grid.ClearGrid();
            }

            GUILayout.Space(10);
            if (GUILayout.Button("Load Preset"))
            {
                //Will load the grid setup from the file with the same name as the scene
                grid.ClearGrid();
                grid.LoadPresetGrid(grid.mapPresetFile);
                grid.scaleFact = 0;
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
            GridSaveData gridSaveData = new GridSaveData(grid.diameter, grid.offset, grid.mapScaleOffset, gridType, gridSpawnId);
            GridDataSaver.SaveData(gridSaveData, grid.mapPresetFile);
        }
    }
}