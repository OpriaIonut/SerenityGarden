using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public interface IDestroyable
    {
        int Health { get; set; }
        int DestroyReward { get; set; }

        void Die();
    }
}