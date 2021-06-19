using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public enum SpawnPointsID
    { 
        None,
        Spawn1,
        Spawn2,
        Spawn3,
        All
    }

    //The type of the hexagon
    public enum HexagonType
    {
        Walkable,
        TurretBuildable,
        PlayerBase1,
        ResourceExtraction,
        Occupied,
        SpawnPoint,
        CommanderSpawn1,
        Impassable,
        PlayerBase2,
        CommanderSpawn2
    }

    public class HexagonalBlock : MonoBehaviour
    {
        [Tooltip("The material list needs to have the same order as the HexagonType enum.")]
        public Material[] materialList;
        //The index of this block in the HexagonalGrid's list
        public int listId;

        //Property that will also change the material when changing the property
        [SerializeField]
        private HexagonType type;
        public HexagonType Type
        {
            get { return type; }
            set 
            { 
                type = value;
                UpdateMaterial();
            }
        }

        [Tooltip("Will be used when the hexagon is of type SPawnPoint")]
        public SpawnPointsID spawnPointsID;

        private MeshRenderer meshRend;

        public void UpdateMaterial()
        {
            if (Application.isPlaying && meshRend == null)
                return;

            if (meshRend == null)
                meshRend = gameObject.GetComponent<MeshRenderer>();
            meshRend.material = materialList[(int)type];
        }

        /// <summary>
        /// Place the block at the given position and scale it
        /// </summary>
        /// <param name="pos"></param>
        /// <param name="diameter"></param>
        public void PlaceHexagon(Vector3 pos, float diameter)
        {
            transform.position = pos;
            Mesh mesh = gameObject.GetComponent<MeshFilter>().sharedMesh;
            float currentRadius = Vector3.Distance(transform.position, transform.TransformPoint(mesh.vertices[0]));
            float targetScale = diameter / 2 / currentRadius;
            transform.localScale = Vector3.one * targetScale;

            if(meshRend == null)
                meshRend = gameObject.GetComponent<MeshRenderer>();
            type = HexagonType.Walkable;
        }

        public void DisplayHexagon()
        {
            meshRend.enabled = true;
        }

        public void HideHexagon()
        {
            meshRend.enabled = false;
        }
    }
}