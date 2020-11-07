using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public interface IAttacker<T>
    {
        T Target { get; set; }
        int Damage { get; set; }
        float Range { get; set; }

        float AttackCooldown { get; set; }
        float LastAttackTime { get; set; }

        float SearchTargetCooldown { get; set; }
        float LastSearchTargetTime { get; set; }

        /// <summary>
        /// Will draw a range arround the object
        /// </summary>
        /// <param name="draw">If set to false, it will hide the range</param>
        void DrawRange(bool draw);
        void FindTarget();
        void Attack();
    }
}