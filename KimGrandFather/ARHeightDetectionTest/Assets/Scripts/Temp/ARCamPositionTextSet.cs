using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ARCamPositionTextSet : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _arSeccT;
    [SerializeField] private TextMeshProUGUI _arCamT;
    [SerializeField] private GameObject _arSecc;
    [SerializeField] private GameObject _arCam;


    private void Update() 
    {
        TextSet();
    }

    private void TextSet()
    {
        _arSeccT.text = _arSecc.transform.position.ToString();
        _arCamT.text = _arCam.transform.position.ToString();
    }

}
