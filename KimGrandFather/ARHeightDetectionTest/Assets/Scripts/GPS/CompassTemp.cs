using System;
using UnityEngine;
using System.Collections.Generic;
using Google.XR.ARCoreExtensions;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using TMPro;

    
public class CompassTemp : MonoBehaviour 
{
    [SerializeField] private AREarthManager _earth;


    [SerializeField] private ARRaycastManager arRaycaster;
    [SerializeField] private TextMeshProUGUI _text;

    private void Update() 
    {

        var pose = _earth.EarthState == EarthState.Enabled &&
                _earth.EarthTrackingState == TrackingState.Tracking ?
                _earth.CameraGeospatialPose : new GeospatialPose();

        
        transform.rotation = Quaternion.Euler(0, -(float)pose.Heading, 0);
        _text.text = pose.Heading.ToString();

        
    }
}