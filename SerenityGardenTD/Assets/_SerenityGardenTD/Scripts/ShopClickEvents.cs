using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace SerenityGarden
{
    public class ShopClickEvents : MonoBehaviour
    {
        public void OnClick_Back()
        {
            SceneManager.LoadScene("StageSelection");
        }
    }
}