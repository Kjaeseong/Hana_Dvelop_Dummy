using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LocationDebug : MonoBehaviour
{
    public GPSManager GPSManager;

    private Text Debug;

    private void Start()
    {
        Debug = GetComponent<Text>();
    }
    private void Update()
    {
        Debug.text = $"{GPSManager.Lat}-----{GPSManager.Long}---{GPSManager.ErrText}---{GPSManager.Count}";
    }
}
