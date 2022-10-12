using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class CarManager : MonoBehaviour
{
    [SerializeField] GameObject _indicator;

    private ARRaycastManager _arManager;
    void Start()
    {
        _indicator.SetActive(false);

        _arManager = GetComponent<ARRaycastManager>();
    }


    void Update()
    {
        DetectGround();
    }

    private void DetectGround()
    {
        Vector2 screenSize = new Vector2(Screen.width * 0.5f, Screen.height * 0.5f);

        List<ARRaycastHit> hitInfo = new List<ARRaycastHit>();

        if(_arManager.Raycast(screenSize,hitInfo,TrackableType.Planes))
        {
            _indicator.SetActive(true);
            _indicator.transform.position = hitInfo[0].pose.position;
            _indicator.transform.rotation = hitInfo[0].pose.rotation;

            _indicator.transform.position += _indicator.transform.up * 0.1f;
        }
        else
        {
            _indicator.SetActive(false);
        }
    }
}
