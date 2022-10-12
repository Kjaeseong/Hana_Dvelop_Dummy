using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UIManager : MonoBehaviour
{
    public GameObject ARCamera;
    public TextMeshProUGUI Pos;

    private void Update() 
    {
        Pos.text = $"X : {ARCamera.transform.position.x} / Y : {ARCamera.transform.position.y} / Z : {ARCamera.transform.position.z}";
    }
}
