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
            GameObject walkableArea = (GameObject)EditorGUILayout.ObjectField("Walkable Area: ", grid.walkableArea, typeof(GameObject));
            if (walkableArea.GetComponent<MeshRenderer>())
                grid.walkableArea = walkableArea;

            grid.diameter = (float)EditorGUILayout.FloatField("Hexagon Diameter: ", grid.diameter);
            grid.offset = EditorGUILayout.FloatField("Hexagon Offset: ", grid.offset);

            if(GUILayout.Button("Generate Grid"))
            {
                grid.ClearGrid();
                grid.CreateGrid();
            }
            if(GUILayout.Button("Clear Grid"))
            {
                grid.ClearGrid();
            }

            if(GUILayout.Button("Load Preset"))
            {
                grid.ClearGrid();
                grid.LoadPresetGrid(savePath);
            }

            if(GUILayout.Button("Save Preset"))
            {
                SavePreset();
            }
        }

        private void SavePreset()
        {
            if (grid.gridCells.Count == 0)
            {
                Debug.LogWarning("Could not save grid preset.");
                return;
            }

            List<int> gridType = new List<int>();
            foreach(HexagonalBlock item in grid.gridCells)
            {
                gridType.Add((int)item.Type);
            }
            GridSaveData gridSaveData = new GridSaveData(grid.diameter, grid.offset, gridType);
            string json = JsonConvert.SerializeObject(gridSaveData, Formatting.Indented);
            File.WriteAllText(savePath, json);
        }
    }
}