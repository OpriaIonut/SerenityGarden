using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace SerenityGarden
{
    [CustomEditor(typeof(HexagonalBlock))]
    public class HexagonalBlockEditor : Editor
    {
        private HexagonalBlock block;
        private string[] dropdownOptions;
        private void OnEnable()
        {
            //Display a dropdown with the enum values
            block = (HexagonalBlock)target;
            List<string> options = new List<string>();
            foreach (HexagonType suit in (HexagonType[])Enum.GetValues(typeof(HexagonType)))
            {
                options.Add(suit.ToString());
            }
            dropdownOptions = options.ToArray();
        }

        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            //Change the type of the block based on what we clicked in the editor. This will in turn change it's material and in the future something else
            HexagonType aux = (HexagonType)EditorGUILayout.Popup("Hexagon Type: ", (int)block.Type, dropdownOptions);
            if (aux != block.Type)
                block.Type = aux;
        }
    }
}