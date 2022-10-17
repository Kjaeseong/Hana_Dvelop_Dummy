using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;

public class GPSManager : MonoBehaviour
{
    public static int Count;
    public double Lat;
    public double Long;
    public double High;
    public string ErrText;
    [SerializeField][Range(0, 10)] private float _retryTime = 5f;
    //[SerializeField][Range(0, 10)] private float _updateDelay = 1f;


    private float Delay;

    private void Start()
    {
        StartCoroutine(GPS_start());
    }

    IEnumerator GPS_start()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            while (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                yield return null;
            }
        }

        if (Input.location.isEnabledByUser)
        {
            ErrText = "GPS OFF";
        }
        Input.location.Start();

        while (Input.location.status == LocationServiceStatus.Initializing && Delay < _retryTime)
        {
            yield return new WaitForSeconds(1.0f);
            Delay++;
        }

        if (Input.location.status == LocationServiceStatus.Failed || Input.location.status == LocationServiceStatus.Stopped)
        {
            ErrText = "Position F";
        }

        if (Delay >= _retryTime)
        {
            ErrText = "Time";
        }

        Lat = Input.location.lastData.latitude;
        Long = Input.location.lastData.longitude;
        High = Input.location.lastData.altitude;
        ErrText = "OK";
        yield return new WaitForSeconds(1.0f);


    }
}