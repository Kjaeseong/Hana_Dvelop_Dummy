using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetMiniMapPlayer : MonoBehaviour
{
    private void Update()
    {
        transform.position = new Vector3(
            Camera.main.transform.position.x, 
            Camera.main.transform.position.y + 100f,
            Camera.main.transform.position.z);
        transform.rotation = Quaternion.Euler(0f, Camera.main.transform.rotation.eulerAngles.y, 0f);
    }
}
