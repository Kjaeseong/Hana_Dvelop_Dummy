using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.Android;

public class GPSManager : MonoBehaviour
{
    [SerializeField] Text _latitudeText;
    [SerializeField] Text _longitudeText;

    private float _maxWaitTime = 10.0f;
    private float _resendTime = 1.0f;

    private float _latitude = 0f;
    private float _longitude = 0f;

    private bool _receiveGPS = false;
    private float _waitTime = 0.0f;

    void Start()
    {
        StartCoroutine(GPS_ON());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private IEnumerator GPS_ON()
    {
        if(!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);

            while(!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                yield return null;
            }
        }

        if (!Input.location.isEnabledByUser)
        {
            _latitudeText.text = "GPS Off";
            _longitudeText.text = "GPS Off";
            yield break;
        }

        Input.location.Start();

        while (Input.location.status == LocationServiceStatus.Initializing && _waitTime < _maxWaitTime)
        {
            yield return new WaitForSeconds(1.0f);
            ++_waitTime;
        }

        if(Input.location.status == LocationServiceStatus.Failed)
        {
            _latitudeText.text = "위치정보 수신 실패";
            _longitudeText.text = "위치정보 수신 실패";
        }

        if (_waitTime >= _maxWaitTime)
        {
            _latitudeText.text = "응답 대기 시간 초과";
            _longitudeText.text = "응답 대기 시간 초과";
        }

        LocationInfo _li = Input.location.lastData;
        _latitude = _li.latitude;
        _longitude = _li.longitude;
        _latitudeText.text = $"위도 : {_latitude.ToString()}";
        _longitudeText.text = $"경도 : {_longitude.ToString()}";

        _receiveGPS = true;

        while(_receiveGPS)
        {
            yield return new WaitForSeconds(_resendTime);

            _li = Input.location.lastData;
            _latitude = _li.latitude;
            _longitude = _li.longitude;
            _latitudeText.text = $"위도 : {_latitude.ToString()}";
            _longitudeText.text = $"경도 : {_longitude.ToString()}";
        }
    }
}
