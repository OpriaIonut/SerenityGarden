using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public static class FileParser
{
    static string fileContent;

    public static void GenerateFileContent<T>(T fileData, int tabs = 0)
    {
        if (fileContent == null)
            fileContent = "";

        fileContent += "'" + typeof(T).Name + "'\n";
        InsertTabs(tabs);
        fileContent += "{\n";
        tabs++;

        PropertyInfo[] properties = typeof(T).GetProperties();
        for(int index = 0; index < properties.Length; index++)
        {
            InsertTabs(tabs);

            object itemObj = properties[index].GetValue(fileData);
            if (itemObj == null)
            {
                fileContent += "null";
                if (index != properties.Length)
                    fileContent += ",";
                fileContent += "\n";
            }

            Type itemData = itemObj.GetType();
            if (itemData.IsPrimitive == false && itemData != typeof(Decimal) && itemData != typeof(String))
            {
                if(itemData.Name == "blockTypes")
                    GenerateFileContent((SerenityGarden.BlockTypes)itemObj, tabs);
                if(itemData.Name == "blockSpawnIds")
                    GenerateFileContent((SerenityGarden.BlockSpawnIds)itemObj, tabs);
            }
            else
            {
                fileContent += "'" + itemData.Name + "': ";
                if (itemData.IsArray)
                {
                    fileContent += "[";

                    IEnumerable items = itemObj as IEnumerable;
                    int arrayIndex = 0;
                    foreach (object o in items)
                    {
                        fileContent += (o != null) ? o.ToString() : "null";
                        if (arrayIndex != itemData.GetArrayRank())
                            fileContent += ", ";
                        arrayIndex++;
                    }
                    fileContent += "]";
                }
                else
                {
                    fileContent += itemObj;
                }
                if (index != properties.Length)
                    fileContent += ",";
                fileContent += "\n";
            }
        }
        InsertTabs(tabs - 1);
        fileContent += "}";
    }

    public static void SaveFileContent(string filePath, bool encryptFile)
    {
        if (fileContent != null && fileContent.Length != 0)
        {
            using (System.IO.StreamWriter file = new System.IO.StreamWriter(filePath, false))
            {
                file.Write(fileContent);
            }
        }
    }

    //public static T LoadDataFromFile<T>(string filePath)
    //{

    //}


    private static void InsertTabs(int tabCount)
    {
        for (int index = 0; index < tabCount; index++)
            fileContent += "\t";
    }
}
