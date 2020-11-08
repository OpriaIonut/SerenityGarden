using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public enum HexagonType
    {
        Walkable,
        TurretBuildable,
        PlayerBase,
        ResourceExtraction,
        Occupied,
        SpawnPoint
    }

    public class HexagonalBlock : MonoBehaviour
    {
        public Material[] materialList;
        public int listId;

        private HexagonType type;
        public HexagonType Type
        {
            get { return type; }
            set 
            { 
                type = value;  
                if(renderer == null)
                    renderer = gameObject.GetComponent<MeshRenderer>();
                renderer.material = materialList[(int)value];
            }
        }

        private MeshRenderer renderer;

        public void PlaceHexagon(Vector3 pos, float diameter)
        {
            transform.position = pos;
            Mesh mesh = gameObject.GetComponent<MeshFilter>().sharedMesh;
            float currentRadius = Vector3.Distance(transform.position, transform.TransformPoint(mesh.vertices[0]));
            float targetScale = diameter / 2 / currentRadius;
            transform.localScale = Vector3.one * targetScale;

            if(renderer == null)
                renderer = gameObject.GetComponent<MeshRenderer>();
            type = HexagonType.Walkable;
        }

        public void DisplayHexagon()
        {
            renderer.enabled = true;
        }

        public void HideHexagon()
        {
            renderer.enabled = false;
        }
    }
}