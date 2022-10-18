using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInput : MonoBehaviour
{
    
    [SerializeField] private GameObject _heightChecker;
    [SerializeField] private GameObject _positionSensor;


    public void OpenHeightChecker()
    {
        _heightChecker.gameObject.SetActive(true);
    }

    public void OpenPositionSensor()
    {
        _positionSensor.gameObject.SetActive(true);
    }

}
