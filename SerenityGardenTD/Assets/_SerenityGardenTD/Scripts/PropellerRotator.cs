using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PropellerRotator : MonoBehaviour
{
    private void Update()
    {
        transform.Rotate(Vector3.forward * 500 * Time.deltaTime, Space.Self);
    }
}
