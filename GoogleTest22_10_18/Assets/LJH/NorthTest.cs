using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NorthTest : MonoBehaviour
{
    private void Start()
    {
        //Input.location.Start();
        Input.compass.enabled = true;
    }
    void Update()
    {
        transform.rotation = Quaternion.Euler(0, -Input.compass.trueHeading, 0);
    }
}
