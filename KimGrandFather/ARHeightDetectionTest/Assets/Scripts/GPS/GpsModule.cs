using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;

public class GpsModule : MonoBehaviour
{
    private double Lat;
    private double Long;
    private float _rot;
    [SerializeField][Range(0,10)] private float _retryTime = 5f;
    [SerializeField][Range(0,10)] private float _updateDelay = 0.5f;

    // 테스트용, 삭제가능
    [SerializeField] private UITemp _ui;
    private int _count;


    private float Delay;

    private void Start() 
    {
        Input.compass.enabled = true;
        StartCoroutine(GPS_start());
    }

    IEnumerator GPS_start()
    {
        //_ui.TextSet((int)ELogtext.LOG, _count.ToString());

        if(!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            while(!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                yield return null;
            }
        }

        if(Input.location.isEnabledByUser)
        {
            //_ui.TextSet((int)ELogtext.LOG, "GPS Off");
        }
        Input.location.Start();

        while(Input.location.status == LocationServiceStatus.Initializing && Delay < _retryTime)
        {
            yield return new WaitForSeconds(1.0f);
            //_ui.TextSet((int)ELogtext.LOG, "Delay++");
            Delay++;
        }

        if(Input.location.status == LocationServiceStatus.Failed || Input.location.status == LocationServiceStatus.Stopped)
        {
            //_ui.TextSet((int)ELogtext.LOG, "Position F");
        }

        if(Delay >= _retryTime)
        {
            //_ui.TextSet((int)ELogtext.LOG, "Time Out");
        }

        Lat = Input.location.lastData.latitude;
        Long = Input.location.lastData.longitude;
        SetLat();
        SetLong();
        
        
        

        
        yield return new WaitForSeconds(_updateDelay);
    }

    private void Update() 
    {
        
        _count++;
        _ui.TextSet((int)ELogtext.LOG, _count.ToString());
    }


    public double GetLat()
    {
        return Lat;
    }

    public double GetLong()
    {
        return Long;
    }


    private void SetLat()
    {
        _ui.TextSet((int)ELogtext.LAT, "Lat : " + GetLat().ToString());
    }

    private void SetLong()
    {
        _ui.TextSet((int)ELogtext.LONG, "Long : " + GetLong().ToString());
    }

    private void SetRot()
    {
        _ui.TextSet((int)ELogtext.ROT, "Rot ARCam : " + Input.compass.trueHeading);
    }
}
