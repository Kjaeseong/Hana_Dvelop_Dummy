using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class TouchInput : MonoBehaviour
{
    private int _isZoom;
    private float _positionX;
    private float _positionY;
    private float _positionZ;
    private int _touchCount;
    private bool _slide;
    private Vector2 _currentPosition;
    private Vector2 _nowPosition;
    private Vector2 _positionOnScreen;

    [SerializeField] private ARRaycastManager arRaycaster;
    
    /// <summary>
    /// 터치 중인 스크린의 좌표 반환
    /// </summary>
    public Vector2 GetPositionOnScreen()
    {
        PositionOnScrren();
        return _positionOnScreen;
    }

    /// <summary>
    /// 현재 슬라이드 중인지 bool 타입으로 반환
    /// </summary>
    public bool GetSlide()
    {
        Slide();
        return _slide;
    }

    /// <summary>
    /// 터치 중인 손가락 수 반환
    /// </summary>
    public int GetCount()
    {
        return Input.touchCount;
    }

    /// <summary>
    /// 줌 인이라면 1, 줌 아웃이라면 -1 반환
    /// </summary>
    public int GetZoom()
    {
        Zoom();
        return _isZoom;
    }

    /// <summary>
    /// 터치중인 좌표 반환
    /// </summary>
    public Vector3 GetPositionOnPlane()
    {
        RaycastOnPlane();
        return new Vector3(_positionX, _positionY, _positionZ);
    }

    /// <summary>
    /// 월드기준 터치 좌표중 한 개의 축을 반환 ('x', 'y', 'z'), 그 외를 입력할 경우 0 반환
    /// </summary>
    public float GetPositionOnPlaneAxis(char Axis)
    {
        float data;
        RaycastOnPlane();

        switch(Axis)
        {
            case 'x':
                data = _positionX;
                break;
            case 'y':
                data = _positionY;
                break;
            case 'z':
                data = _positionZ;
                break;
            default :
                data = 0f;
                break;
        }

        return data;
    }

    private void RaycastOnPlane()
    {
        Touch touch = Input.GetTouch(0);
        if(touch.phase == TouchPhase.Began)
        {
            List<ARRaycastHit> hits = new List<ARRaycastHit>();

            if(arRaycaster.Raycast(GetPositionOnScreen(), hits, TrackableType.Planes))
            {
                Pose FirstHit = hits[0].pose;
                _positionX = FirstHit.position.x;
                _positionY = FirstHit.position.y;
                _positionZ = FirstHit.position.z;
            }
        }
    }

    private void PositionOnScrren()
    {
        if(Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            _positionOnScreen = touch.position;
        }
        else
        {
            _positionOnScreen = new Vector2(0f, 0f);
        }
    }

    private void Slide()
    {
        if(Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            _currentPosition = _nowPosition;
            _nowPosition = touch.position;

            if(_nowPosition != _currentPosition)
            {
                _slide = true;
            }
        }
        else
        {
            _slide = false;
            _currentPosition = new Vector2(0f, 0f);
            _nowPosition = new Vector2(0f, 0f);
        }
    }

    // TODO : Zoom 수정 여지 있음. 본 프로젝트 진행하며 수정해야 할 것 같음.
    private void Zoom()
    {
        if (Input.touchCount == 2)
        {
            Touch FirstTouch = Input.GetTouch(0);
            Touch SecondTouch = Input.GetTouch(1);

            Vector2 touchFirstPrevPos = FirstTouch.position - FirstTouch.deltaPosition;
            Vector2 touchSecondPrevPos = SecondTouch.position - SecondTouch.deltaPosition;

            float prevTouchDeltaMag = (touchFirstPrevPos - touchSecondPrevPos).magnitude;
            float touchDeltaMag = (FirstTouch.position - SecondTouch.position).magnitude;

            float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;

            if(deltaMagnitudeDiff <= 0) { _isZoom = 1; }
            else if(deltaMagnitudeDiff >= 0) { _isZoom = -1; }
            else { _isZoom = 0; }
        }
        else
        {
            _isZoom = 0;
        }
    }
}
