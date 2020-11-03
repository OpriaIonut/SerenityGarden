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

            HexagonType aux = (HexagonType)EditorGUILayout.Popup("Hexagon Type: ", (int)block.Type, dropdownOptions);
            if (aux != block.Type)
                block.Type = aux;
        }
    }
}