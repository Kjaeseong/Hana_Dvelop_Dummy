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

    [SerializeField] private Transform _arCameraTransform;

    private void Update() 
    {
        TextSet();
    }


    public void RotationMap(int num)
    {
        float speed = 50f;
        _map.transform.RotateAround(_arCameraTransform.position, Vector3.up, speed * num * Time.deltaTime);
        //_map.transform.rotation = Quaternion.Euler(
        //    _map.transform.rotation.eulerAngles.x, 
        //    _map.transform.rotation.eulerAngles.y + num,
        //    _map.transform.rotation.eulerAngles.z);
    }

    public void RotationMapAzimuth()
    {
        _map.transform.rotation = Quaternion.Euler(0f, -1 * (float)_pos.GetAzimuth(), 0f);
    }

    public void TestRotationMap()
    {
        double angle = _pos.GetAzimuth();
        while(false == (_map.transform.rotation.eulerAngles.y > (360 - angle - 2) % 360 && _map.transform.rotation.eulerAngles.y < (360 - angle + 2) % 360))
        {
            _map.transform.RotateAround(_arCameraTransform.position, Vector3.up, 10f * Time.deltaTime);
        }
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
