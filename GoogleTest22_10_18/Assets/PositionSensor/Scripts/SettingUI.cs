using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingUI : MonoBehaviour
{
    
    [SerializeField] private GameObject _posSensor;
    [SerializeField] private GameObject _heiChecker;

    public void ActivatePosSensor()
    {
        _posSensor.SetActive(true);
    }
    public void ActivateHeightChecker()
    {
        _heiChecker.SetActive(true);
    }
    
}
