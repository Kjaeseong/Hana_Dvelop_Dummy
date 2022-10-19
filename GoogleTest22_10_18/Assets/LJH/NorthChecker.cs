using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NorthChecker : MonoBehaviour
{
    public Text X;
    public Text Y;
    public Text Z;

    private void Start()
    {
        Input.gyro.enabled = true;
    }
    private void Update()
    {
        X.text = $"X = {Input.gyro.attitude.eulerAngles.x}";
        Y.text = $"Y = {Input.gyro.attitude.eulerAngles.y}";
        Z.text = $"Z = {Input.gyro.attitude.eulerAngles.z}";
    }
}
