using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARCamSetPosition : MonoBehaviour
{
    private int _count = 0;
    [SerializeField] private GameObject ARCam;

    
    private void Update() 
    {
        if(_count < 120)
        {
            SetCameraPosition();
        }
        //ㅆㅂ
    }
    

    private void SetCameraPosition()
    {
        if(RaycastHitPositionY() > 0.5f)
        {
            ARCam.transform.position = new Vector3(ARCam.transform.position.x, ARCam.transform.position.y - RaycastHitPositionY(), ARCam.transform.position.z);
            _count++;
        }
    }

    private float RaycastHitPositionY()
    {
        float Y = 0f;

        List<ARRaycastHit> hits = new List<ARRaycastHit>();

        if(hits.Count > 0)
        {
            if(arRaycaster.Raycast(ARCam.transform.forward, hits, TrackableType.Planes))
            {
                Pose LastHit = hits[hits.Count - 1].pose;
                Y = LastHit.position.y;
            }
        }
    
        return Y;
    }
}
