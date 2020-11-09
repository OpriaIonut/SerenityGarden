using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public interface IMovable
    {
        HexagonalBlock CurrentBlock { get; set; }
        HexagonalBlock EndBlock { get; set; }
        HexagonalBlock NextBlock { get; set; }
        float Speed { get; set; }
        float ReachedThreshold { get; set; }
        bool ReachedDestination { get; set; }

        void FindNextBlock();
        void Move();
        bool CheckReachedTarget();
    }
}