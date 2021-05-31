using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class BossSwipeTrailChecker : MonoBehaviour
    {
        private FireDemon boss;
        private TrailRenderer trail;

        private void Start()
        {
            boss = transform.root.gameObject.GetComponent<FireDemon>();
            trail = GetComponent<TrailRenderer>();
        }

        private void Update()
        {
            if (boss.CurrentAction == FireDemonActions.Sweep)
                trail.enabled = true;
            else
                trail.enabled = false;
        }
    }
}