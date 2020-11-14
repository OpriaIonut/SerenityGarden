using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public interface IRecoverable
    {
        bool IsRecovering { get; set; }
        float RecoveryCostPer1Hp { get; set; }
        float RecoveryPerSecond { get; set; }

        bool StartRecovery();
    }
}