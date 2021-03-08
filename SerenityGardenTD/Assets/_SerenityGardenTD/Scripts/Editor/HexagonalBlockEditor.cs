using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace SerenityGarden
{
    [CustomEditor(typeof(HexagonalBlock)), CanEditMultipleObjects]
    public class HexagonalBlockEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            EditorGUILayout.PropertyField(serializedObject.FindProperty("materialList"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("spawnPointsID"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("type"));
            foreach(UnityEngine.Object obj in targets)
            {
                ((HexagonalBlock)obj).UpdateMaterial();
            }

            serializedObject.ApplyModifiedProperties();
        }
    }
}