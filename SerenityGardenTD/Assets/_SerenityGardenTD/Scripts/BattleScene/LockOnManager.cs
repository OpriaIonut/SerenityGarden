using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class LockOnManager : MonoBehaviour
    {
        private SceneClickManager sceneClickManager;

        private static EnemyBase selectedEnemy;
        public static EnemyBase SelectedEnemy
        {
            get { return selectedEnemy; }
        }

        private void Start()
        {
            sceneClickManager = FindObjectOfType<SceneClickManager>();
        }

        public void SelectEnemy()
        {
            selectedEnemy = sceneClickManager.selectedEnemy;
        }
    }
}