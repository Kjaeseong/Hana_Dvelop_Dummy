using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    

    // Update is called once per frame
    void Update()
    {
        transform.position = Camera.main.transform.position;
        transform.rotation = Camera.main.transform.rotation;
    }
}
