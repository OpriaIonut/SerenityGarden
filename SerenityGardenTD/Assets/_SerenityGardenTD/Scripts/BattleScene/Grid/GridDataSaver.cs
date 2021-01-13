using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public static class GridDataSaver
    {
        public static void SaveData(GridSaveData data, string fileLocation)
        {
            using(System.IO.StreamWriter file = new System.IO.StreamWriter(fileLocation))
            {
                file.WriteLine(data.diameter);
                file.WriteLine(data.offset);

                file.WriteLine(data.blockTypes.list.Count);
                for (int index = 0; index < data.blockTypes.list.Count; index++)
                    file.WriteLine(data.blockTypes.list[index]);

                file.WriteLine(data.blockSpawnIds.list.Count);
                for (int index = 0; index < data.blockSpawnIds.list.Count; index++)
                    file.WriteLine(data.blockSpawnIds.list[index]);
            }
        }

        public static GridSaveData LoadData(string fileLocation)
        {
            GridSaveData data = new GridSaveData(0, 0, null, null);
            using(System.IO.StreamReader reader = new System.IO.StreamReader(fileLocation))
            {
                data.diameter = float.Parse(reader.ReadLine());
                data.offset = float.Parse(reader.ReadLine());
                int count = int.Parse(reader.ReadLine());

                List<int> blockTypes = new List<int>();
                for (int index = 0; index < count; index++)
                    blockTypes.Add(int.Parse(reader.ReadLine()));
                data.blockTypes = new BlockTypes(blockTypes);

                count = int.Parse(reader.ReadLine());
                List<int> spawnIds = new List<int>();
                for (int index = 0; index < count; index++)
                    spawnIds.Add(int.Parse(reader.ReadLine()));
                data.blockSpawnIds = new BlockSpawnIds(spawnIds);
            }
            return data;
        }
    }
}