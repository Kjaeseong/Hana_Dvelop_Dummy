using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class Utility
{
    //AR레이케스트 매니저 호출
    private static ARRaycastManager     _raycastManager;
    private static List<ARRaycastHit>   _hits = new List<ARRaycastHit>();

    static Utility()
    {
        _raycastManager = GameObject.FindObjectOfType<ARRaycastManager>();
    }
    #region 오브젝트 생성
    //레이케스트 매니저를 이용해 포지션을 줌, 원하는 포지션에 오브젝트 생성시 유효
    public static bool Raycast(Vector2 screenPosition, out Pose pose)
    {
        if(_raycastManager.Raycast(screenPosition,_hits,TrackableType.All))
        {
            pose = _hits[0].pose;
            return true;
        }

        else
        {
            pose = Pose.identity;
            return false;
        }
    }

    #endregion
    public static bool TryGetInputPosition(out Vector2 position)
    {
        position = Vector2.zero; 

        if(Input.touchCount ==0)
        {
            return false;
        }

        position = Input.GetTouch(0).position;

        if(Input.GetTouch(0).phase != TouchPhase.Began)
        {
            return false;
        }
        return true;
    }
}
