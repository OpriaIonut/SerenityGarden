using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class SceneClickManager : MonoBehaviour
    {
        [Header("Debug")]
        public TurretBase selectedTurret;
        public HexagonalBlock selectedHexagon;
        public EnemyBase selectedEnemy;

        private InputManager inputManager;
        private TurretBuildManager buildManager;
        private LockOnManager lockOnManager;

        private void Start()
        {
            inputManager = FindObjectOfType<InputManager>();
            buildManager = FindObjectOfType<TurretBuildManager>();
            lockOnManager = FindObjectOfType<LockOnManager>();
            inputManager.AddOnPressEvent(OnPressHandler);
        }

        private void OnPressHandler()
        {
            if(selectedTurret != null)
            {
                selectedTurret.DrawRange(false);
                selectedTurret = null;
            }

            if (inputManager.clickedObject != null)
            {
                selectedHexagon = inputManager.clickedObject.GetComponent<HexagonalBlock>();
            }
            if(inputManager.clickedParent != null)
            { 
                if (selectedTurret != null)
                    selectedTurret.DrawRange(false);

                selectedTurret = inputManager.clickedParent.GetComponent<TurretBase>();
                selectedEnemy = inputManager.clickedParent.GetComponent<EnemyBase>();
            }
            buildManager.SelectTurret();
            buildManager.SelectHexagon();
            lockOnManager.SelectEnemy();
        }
    }
}