using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.Networking;

namespace SerenityGarden
{
    /// <summary>
    /// Class that is responsible for managing disk-related requests (load/save file from/to a location on disk)
    /// </summary>
    public static class FileManager
    {
        /// <summary>
        /// Get the contents of a file from the disk. Tested on Android and Windows platforms.
        /// </summary>
        /// <param name="streamingAsset">Are you searching for the file in streaming assets on in persistent data path?</param>
        /// <param name="filePath">The name/path of the file.</param>
        /// <returns></returns>
        public static string GetFileContents(bool streamingAsset, string filePath)
        {
            //Find the path of the file on the current platform
            string actualPath = "";
            if (streamingAsset)
                actualPath = Application.streamingAssetsPath + "/";
            else
                actualPath = Application.persistentDataPath + "/";
            actualPath += filePath;

            string contents = "";
#if UNITY_ANDROID

            //On android we can't access streaming assets dirrectly so we need to use a WebRequest to get it's contents
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
            else if(File.Exists(actualPath))    //Persistent data path works just fine though
                contents = File.ReadAllText(actualPath);

#elif UNITY_STANDALONE_WIN
            //On windows, simply read the contents of the file
            if(File.Exists(actualPath))
                contents = File.ReadAllText(actualPath);
#endif
            return contents;
        }

        /// <summary>
        /// Save the contents to a file on the disk. May not work for streaming assets on android.
        /// </summary>
        /// <param name="streamingAsset">Are you searching for the file in streaming assets on in persistent data path?</param>
        /// <param name="fileContents">The data to save in the file</param>
        /// <param name="filePath">The name/path of the file.</param>
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
