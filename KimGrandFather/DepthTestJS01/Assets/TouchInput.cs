using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class TouchInput : MonoBehaviour
{
    public bool IsTouch { get; private set; }
    private int IsZoom;
    private float TouchPositionX;
    private float TouchPositionY;
    private float TouchPositionZ;
    private int _touchCount;

    [SerializeField] private ARRaycastManager arRaycaster;

    private void Update() 
    {
        
    }

    public int GetTouchCount()
    {
        return _touchCount;
    }

    public int GetZoom()
    {
        return IsZoom;
    }

    public Vector3 GetTouchPosition()
    {
        return new Vector3(TouchPositionX, TouchPositionY, TouchPositionZ);
    }

    /// <summary>
    /// 월드기준 터치 좌표중 한 개의 축을 반환 ('x', 'y', 'z'), 그 외를 입력할 경우 0 반환
    /// </summary>
    public float GetTouchPositionAxis(char Axis)
    {
        float data;

        switch(Axis)
        {
            case 'x':
                data = TouchPositionX;
                break;
            case 'y':
                data = TouchPositionY;
                break;
            case 'z':
                data = TouchPositionZ;
                break;
            default :
                data = 0f;
                break;
        }

        return data;
    }

    private void RaycastOnPlane(Vector3 touchPosition)
    {
        Touch touch = Input.GetTouch(0);
        if(touch.phase == TouchPhase.Began)
        {
            List<ARRaycastHit> hits = new List<ARRaycastHit>();

            if(arRaycaster.Raycast(touchPosition, hits, TrackableType.Planes))
            {
                Pose FirstHit = hits[0].pose;
                TouchPositionX = FirstHit.position.x;
                TouchPositionY = FirstHit.position.y;
                TouchPositionZ = FirstHit.position.z;
            }
        }
    }

    private void GetSlide(Touch touchPoint)
    {
        if(Input.touchCount == 1)
        {

        }
    }

    private void Zoom()
    {
        if (Input.touchCount == 2)
        {
            Touch FirstTouch = Input.GetTouch(0);
            Touch SecondTouch = Input.GetTouch(1);

            Vector2 touchZeroPrevPos = FirstTouch.position - FirstTouch.deltaPosition;
            Vector2 touchOnePrevPos = SecondTouch.position - SecondTouch.deltaPosition;

            float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
            float touchDeltaMag = (FirstTouch.position - SecondTouch.position).magnitude;

            float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;

            if(deltaMagnitudeDiff <= 0) { IsZoom = 1; }
            else if(deltaMagnitudeDiff >= 0) { IsZoom = -1; }
            else { IsZoom = 0; }
        }
        else
        {
            IsZoom = 0;
        }
    }

    private void StartTouch()
    {
        _touchCount = Input.touchCount;

        switch(_touchCount)
        {
            case 1:

                break;
            case 2:
                Zoom();
                break;
            default :
                _touchCount = 0;
                break;
        }

    }
    
    


}
