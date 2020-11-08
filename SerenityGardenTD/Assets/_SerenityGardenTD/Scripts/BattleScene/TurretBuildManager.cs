using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretBuildManager : MonoBehaviour
    {

        public GameObject buildMenuUI;
        public GameObject inspectTurretUI;
        public GameObject buildableTurretsUI;
        public GameObject excavatorUI;

        public GameObject[] turretPrefabs;

        private SceneClickManager sceneClickManager;

        private void Start()
        {
            sceneClickManager = FindObjectOfType<SceneClickManager>();
        }

        public void SelectTurret()
        {
            if (sceneClickManager.selectedTurret == null)
                inspectTurretUI.SetActive(false);
            else
            {
                inspectTurretUI.SetActive(true);
                sceneClickManager.selectedTurret.DrawRange(true);
            }
        }

        public void SelectHexagon()
        {
            if (sceneClickManager.selectedHexagon == null || (sceneClickManager.selectedHexagon.Type != HexagonType.ResourceExtraction && sceneClickManager.selectedHexagon.Type != HexagonType.TurretBuildable))
            {
                buildMenuUI.SetActive(false);
                excavatorUI.SetActive(false);
                buildableTurretsUI.SetActive(false);
            }
            else
            {
                buildMenuUI.SetActive(true);
                if(sceneClickManager.selectedHexagon.Type == HexagonType.ResourceExtraction)
                {
                    excavatorUI.SetActive(true);
                    buildableTurretsUI.SetActive(false);
                }
                else
                {
                    excavatorUI.SetActive(false);
                    buildableTurretsUI.SetActive(true);
                }
            }
        }

        public void BuildTurret(int index)
        {
            if (sceneClickManager.selectedHexagon.Type != HexagonType.TurretBuildable && sceneClickManager.selectedHexagon.Type != HexagonType.ResourceExtraction)
                return;

            sceneClickManager.selectedHexagon.Type = HexagonType.Occupied;

            //To do: decrease money
            Transform clone = Instantiate(turretPrefabs[index]).transform;
            clone.position = sceneClickManager.selectedHexagon.transform.position;
            clone.GetComponent<BuildableTurret>().hexagonBlock = sceneClickManager.selectedHexagon;

            sceneClickManager.selectedHexagon = null;
            buildMenuUI.SetActive(false);
            Physics.SyncTransforms();
        }

        public void SellTurret()
        {
            BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
            if (buildable != null)
            {
                //To do: give a reward
                if (buildable.turretType == TurretType.Excavator)
                    buildable.hexagonBlock.Type = HexagonType.ResourceExtraction;
                else
                    buildable.hexagonBlock.Type = HexagonType.TurretBuildable;

                sceneClickManager.selectedTurret.DrawRange(false);
                Destroy(sceneClickManager.selectedTurret.gameObject);
                sceneClickManager.selectedTurret = null;
                inspectTurretUI.SetActive(false);
            }
        }
    }
}