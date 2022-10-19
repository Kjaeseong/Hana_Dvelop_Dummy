using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetCube : MonoBehaviour
{
    [SerializeField]
    private Transform _target;
    [SerializeField]
    private GameObject _cubePrefab;
    [SerializeField]
    private Transform _camera;
    [SerializeField]
    private Slider _slider;
    [SerializeField]
    private Text LatLng;

    private float _maxDistance = 10f;

    private void Update()
    {
        SetCubePosition();
    }
    /// <summary>
    /// 큐브를 생성하는 함수
    /// </summary>
    public void MakeCube()
    {
        Instantiate(_cubePrefab, _target.position, Quaternion.identity);
    }
    /// <summary>
    /// 큐브의 위치를 조정하는 함수
    /// </summary>
    public void SetCubePosition()
    {
        float setZ = _slider.value * _maxDistance;
        Vector3 position = _camera.forward * setZ;
        _target.position = position;
    }

}
