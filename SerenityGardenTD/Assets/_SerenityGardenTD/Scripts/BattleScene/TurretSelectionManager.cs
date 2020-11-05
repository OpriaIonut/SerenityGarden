using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class TurretSelectionManager : MonoBehaviour
    {
        private InputManager inputManager;
        private TurretBase selectedTurret;

        private void Start()
        {
            inputManager = FindObjectOfType<InputManager>();
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
                selectedTurret = inputManager.clickedObject.GetComponent<TurretBase>();
                if (selectedTurret != null)
                {
                    selectedTurret.DrawRange(true);
                }
            }
        }
    }
}