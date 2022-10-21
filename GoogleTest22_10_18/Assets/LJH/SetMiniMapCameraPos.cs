using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetMiniMapCameraPos : MonoBehaviour
{
    private void Update()
    {
        transform.position = new Vector3(
            Camera.main.transform.position.x, 
            Camera.main.transform.position.y + 200f,
            Camera.main.transform.position.z);
    }
}
