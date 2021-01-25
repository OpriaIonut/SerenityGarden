using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.Networking;

namespace SerenityGarden
{
    public static class FileManager
    {
        public static string GetFileContents(bool streamingAsset, string filePath)
        {
            string actualPath = "";
            if (streamingAsset)
                actualPath = Application.streamingAssetsPath + "/";
            else
                actualPath = Application.persistentDataPath + "/";

            string contents = "";
#if UNITY_ANDROID

            if (streamingAsset)
            {
                UnityWebRequest request = UnityWebRequest.Get(actualPath);
                request.SendWebRequest();
                while (!request.isDone)
                {
                    //Intentionally left empty
                }
                contents = request.downloadHandler.text;
            }
            else
                contents = File.ReadAllText(actualPath);

#elif UNITY_STANDALONE_WIN
            contents = File.ReadAllText(actualPath);
#endif
            return contents;
        }

        public static void SetFileContents(bool streamingAsset, string fileContents, string filePath)
        {
            string actualPath = "";
            if (streamingAsset)
                actualPath = Application.streamingAssetsPath + "/" + filePath;
            else
                actualPath = Application.persistentDataPath + "/" + filePath;

            File.WriteAllText(actualPath, fileContents);
        }
    }
}
