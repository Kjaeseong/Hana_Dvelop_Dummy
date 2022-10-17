using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class EyeTemp : MonoBehaviour
{
    [SerializeField] private GameObject _aRcam;

    private void Update() 
    {
        transform.position = _aRcam.transform.position;
        transform.rotation = _aRcam.transform.rotation;
    }
}
