using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class RaidStageSelection : LogicProcessBase
    {
        public StageScriptable stage;

        private void Awake()
        {
            BaseAwakeCalls();
        }

        private void Start()
        {
            BaseStartCalls();
        }

        private void Update()
        {
            BaseUpdateCalls();
        }

        public override bool HasAllDependencies()
        {
            return SceneDataRetainer.instance != null;
        }

        public override void Init()
        {
            SceneDataRetainer.instance.SelectStage(stage);
        }
    }
}