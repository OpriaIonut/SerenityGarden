using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public enum EnemyType
    {
        Melee,
        Ranged,
        Flying,
        Ambusher
    }

    public class EnemyBase : MonoBehaviour
    {
        public EnemyType enemyType;
    }
}
