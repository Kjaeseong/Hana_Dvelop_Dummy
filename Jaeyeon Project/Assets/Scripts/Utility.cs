using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class Utility
{
    private static ARRaycastManager     _raycastManager;
    private static List<ARRaycastHit>   _hits = new List<ARRaycastHit>();

    static Utility()
    {
        _raycastManager = GameObject.FindObjectOfType<ARRaycastManager>();
    }

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
