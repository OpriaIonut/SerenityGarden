using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;

namespace SerenityGarden
{
    public static class GridDataSaver
    {
        public static void SaveData(GridSaveData data, string fileLocation)
        {
            string jsonData = JsonUtility.ToJson(data, true);
            Debug.Log(jsonData);
            FileManager.SetFileContents(true, jsonData, fileLocation);
        }

        public static GridSaveData LoadData(string fileContents)
        {
            GridSaveData data = JsonUtility.FromJson<GridSaveData>(fileContents);
            return data;
        }
    }
}