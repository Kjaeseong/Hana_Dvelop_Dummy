using System.Collections;
using UnityEngine;
using Google.XR.ARCoreExtensions;
using UnityEngine.XR.ARSubsystems;

public class PositionSensor : MonoBehaviour 
{
    // TODO : 위도, 경도, 방위각 등은 private 선언 했으므로, 얻고싶으면 Get 함수 사용하도록 했음.
    private double _nowLat;
    private double _nowLong;
    private GeospatialPose _pose;
    private bool _gpsStarted = false;
    private bool _gpsOn = false;
 
    private WaitForSeconds _retry;
    private LocationInfo _location;
    [SerializeField] private float _retryTime;
    [SerializeField] private AREarthManager _earth;
 
    // 아래 변수는 정식버전에선 지워도 됩니다.
    public UITemp _ui;
    private int Count = 0; // 갱신 횟수를 세기 위한 변수
    //
 
    /// <summary>
    /// 매개변수로 true, false를 넣어서 On/Off 처리
    /// </summary>
    public void GpsSwitch(bool Select)
    {
        if(Select && _gpsOn == false)
        {
            StartCoroutine(GpsStart());
            _gpsOn = true;
        }
        else if(!Select && _gpsOn == true)
        {
            GpsStop();
            _gpsOn = true;
        }

    }

    private void Start() 
    {
        _retry = new WaitForSeconds (_retryTime);

        StartCoroutine(GpsStart());
    }

    private IEnumerator GpsStart() 
    {
        // 유저가 GPS 사용중인지 최초 체크
        if (!Input.location.isEnabledByUser) 
        {
            yield break;
        }
 
        //GPS 서비스 시작
        Input.location.Start ();
 
        //활성화될 때 까지 대기
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0) 
        {
            yield return _retry;
            maxWait -= 1;
        }

        //20초 지날경우 활성화 중단
        if (maxWait < 1)
        {
            yield break;
        }
 
        //연결 실패
        if (Input.location.status == LocationServiceStatus.Failed) 
        {
            yield break;
 
        } 
        else 
        {
            //접근 허가, 현재 위치 갱신
            _gpsStarted = true;

            while (_gpsStarted) 
            {
                NowPositionSet();
                AzimuthSet();
                yield return _retry;
            }
        }
    }

    private void NowPositionSet()
    {
        _location = Input.location.lastData;
        _nowLat = _location.latitude * 1.0d;
        _nowLong = _location.longitude * 1.0d;

        // 아래 테스트 로그출력용 함수
        TestCode();
    }

    private void AzimuthSet()
    {
        _pose = _earth.EarthState == EarthState.Enabled && 
        _earth.EarthTrackingState == TrackingState.Tracking ?
        _earth.CameraGeospatialPose : new GeospatialPose();
    }
 
    //위치 서비스 종료
    public void GpsStop() 
    {
        if (Input.location.isEnabledByUser) 
        {
            _gpsStarted = false;
            Input.location.Stop();
            StopCoroutine(GpsStart());
        }
    }



    public double GetLat()
    {
        return _nowLat;
    }

    public double GetLong()
    {
        return _nowLong;
    }

    public Vector2 GetEarthPos()
    {
        return new Vector2((float)GetLat(), (float)GetLong());
    }

    public double GetAzimuth()
    {
        return _pose.Heading;
    }

    private void DebugLog(string Text)
    {
        // 추후 본격전인 개발시 화면에 디버깅 쉽게 띄울 용도
    }




    // 아래 테스트용 로그 출력 코드.
    private void TestCode()
    {
        Count++;

        _ui.TextSet((int)ELogtext.LAT, GetLat().ToString());
        _ui.TextSet((int)ELogtext.LONG, GetLong().ToString());
        _ui.TextSet((int)ELogtext.ROT, GetAzimuth().ToString());
        LogTextSet($"Repeat {Count}");
    }
    private void LogTextSet(string Text)
    {
        _ui.TextSet((int)ELogtext.LOG, Text);
    }
}