using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretBuildManager : MonoBehaviour
    {

        public GameObject buildMenuUI;
        public GameObject inspectTurretUI;

        public GameObject[] turretPrefabs;

        private SceneClickManager sceneClickManager;

        private void Start()
        {
            sceneClickManager = FindObjectOfType<SceneClickManager>();
        }

        public void SelectTurret()
        {
            buildMenuUI.SetActive(false);
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
            inspectTurretUI.SetActive(false);
            if (sceneClickManager.selectedHexagon == null || sceneClickManager.selectedHexagon.Type == HexagonType.Occupied)
                buildMenuUI.SetActive(false);
            else
                buildMenuUI.SetActive(true);
        }

        public void BuildTurret(int index)
        {
            if (sceneClickManager.selectedHexagon.Type != HexagonType.TurretBuildable)
                return;

            sceneClickManager.selectedHexagon.Type = HexagonType.Occupied;

            //To do: decrease money
            Transform clone = Instantiate(turretPrefabs[index]).transform;
            clone.position = sceneClickManager.selectedHexagon.transform.position;
            clone.GetComponent<BuildableTurret>().hexagonBlock = sceneClickManager.selectedHexagon;

            sceneClickManager.selectedHexagon = null;
        }

        public void SellTurret()
        {
            BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
            if (buildable != null)
            {
                //To do: give a reward
                buildable.hexagonBlock.Type = HexagonType.TurretBuildable;
                Destroy(sceneClickManager.selectedTurret);
                sceneClickManager.selectedTurret = null;
            }
        }
    }
}