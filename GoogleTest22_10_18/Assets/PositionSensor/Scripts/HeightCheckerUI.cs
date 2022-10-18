using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HeightCheckerUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _distY;
    [SerializeField] private TextMeshProUGUI _mapHeight;

    [SerializeField] private HeightChecker _checker;
    
    public void DetectionSuccess()
    {
        gameObject.SetActive(false);
    }

    private void Update() 
    {
        _distY.text = _checker.GetDistCamToPlane().ToString();
        _mapHeight.text = _checker.GetRayHitPositionY().ToString();
    }
}
