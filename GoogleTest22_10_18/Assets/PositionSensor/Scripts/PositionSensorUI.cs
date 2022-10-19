using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PositionSensorUI : MonoBehaviour
{
    [SerializeField] private PositionSensor _pos;
    [SerializeField] private TextMeshProUGUI _mapRotation;
    [SerializeField] private TextMeshProUGUI _azimuth;
    [SerializeField] private TextMeshProUGUI _log;

    [SerializeField] private GameObject _map;

    private void Update() 
    {
        TextSet();
    }


    public void RotationMap(int num)
    {
        _map.transform.rotation = Quaternion.Euler(
            _map.transform.rotation.eulerAngles.x, 
            _map.transform.rotation.eulerAngles.y + num,
            _map.transform.rotation.eulerAngles.z);
    }

    public void RotationMapAzimuth()
    {
        _map.transform.rotation = Quaternion.Euler(0f, -1 * (float)_pos.GetAzimuth(), 0f);
    }

    public void TextSet()
    {
        _mapRotation.text = "Map Rot : " + _map.transform.rotation.eulerAngles.ToString();
        _azimuth.text = "Azi : " + _pos.GetAzimuth().ToString();
    }

    public void DeactivatePositionSensorUI()
    {
        gameObject.SetActive(false);
    }

    public void DebugLog()
    {

    }




}
