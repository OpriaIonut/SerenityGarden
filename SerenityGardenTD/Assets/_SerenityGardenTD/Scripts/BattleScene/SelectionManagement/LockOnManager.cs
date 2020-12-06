using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class LockOnManager : MonoBehaviour
    {
        public Material selectedEnemyMaterial;

        //Reference to the click manager in order to know what we cicked
        private SceneClickManager sceneClickManager;
        private List<Material> previousEnemyMaterials;

        //This variable an property are static in order to access easier the focused enemy
        private static EnemyBase selectedEnemy;
        public static EnemyBase SelectedEnemy
        {
            get { return selectedEnemy; }
        }

        private void Start()
        {
            sceneClickManager = FindObjectOfType<SceneClickManager>();
            previousEnemyMaterials = new List<Material>();
        }

        /// <summary>
        /// Called by SceneClickManager if we clicked/unclicked an enemy
        /// </summary>
        public void SelectEnemy()
        {
            //If we didn't click an enemy this time
            if (sceneClickManager.selectedEnemy == null)
            {
                //An enemy may have been focused on a previous click. We want to deselect it only if everything is null, as to not interrupt the enemy lock-on while building/repairing/upgrading
                if (sceneClickManager.selectedTurret == null && sceneClickManager.selectedHexagon == null)
                    selectedEnemy = sceneClickManager.selectedEnemy;
            }
            else
            {
                EnemyBase previousEnemy = selectedEnemy;

                selectedEnemy = sceneClickManager.selectedEnemy;

                if (previousEnemyMaterials.Count != 0 && previousEnemy != null)
                {
                    int listIndex = 0;
                    MeshRenderer[] previousRenderers = previousEnemy.gameObject.GetComponentsInChildren<MeshRenderer>();
                    foreach (MeshRenderer rend in previousRenderers)
                    {
                        rend.material = previousEnemyMaterials[listIndex];
                        listIndex++;
                    }
                }

                previousEnemyMaterials.Clear();
                MeshRenderer[] renderers = selectedEnemy.gameObject.GetComponentsInChildren<MeshRenderer>();
                foreach (MeshRenderer rend in renderers)
                {
                    previousEnemyMaterials.Add(rend.material);
                    Color col = rend.material.color;
                    rend.material = selectedEnemyMaterial;
                    rend.material.SetColor("Color_70340A95", col);
                }
            }
        }
    }
}