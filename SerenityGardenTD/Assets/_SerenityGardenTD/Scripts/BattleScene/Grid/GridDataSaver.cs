using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public static class GridDataSaver
    {
        public static void SaveData(GridSaveData data, string fileLocation)
        {
            string contents = "";

            contents += data.diameter + "\n";
            contents += data.offset + "\n";
            contents += data.mapScaleOffset + "\n";

            contents += data.blockTypes.list.Count + "\n";
            for (int index = 0; index < data.blockTypes.list.Count; index++)
                contents += data.blockTypes.list[index] + "\n";

            contents += data.blockSpawnIds.list.Count + "\n";
            for (int index = 0; index < data.blockSpawnIds.list.Count; index++)
                contents += data.blockSpawnIds.list[index] + "\n";

            FileManager.SetFileContents(true, contents, fileLocation);
        }

        public static GridSaveData LoadData(string fileContents)
        {
            GridSaveData data = new GridSaveData(0, 0, 0, null, null);
            string[] fileLines = fileContents.Split('\n');

            data.diameter = float.Parse(fileLines[0]);
            data.offset = float.Parse(fileLines[1]);
            data.mapScaleOffset = float.Parse(fileLines[2]);
            int count = int.Parse(fileLines[3]);

            List<int> blockTypes = new List<int>();
            for (int index = 0; index < count; index++)
                blockTypes.Add(int.Parse(fileLines[4 + index]));
            data.blockTypes = new BlockTypes(blockTypes);

            count = int.Parse(fileLines[4 + count]);
            List<int> spawnIds = new List<int>();
            for (int index = 0; index < count; index++)
                spawnIds.Add(int.Parse(fileLines[5 + count + index]));
            data.blockSpawnIds = new BlockSpawnIds(spawnIds);

            return data;
        }
    }
}