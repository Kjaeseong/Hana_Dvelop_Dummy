using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ObjectManager : MonoBehaviour
{
    [SerializeField] private GameObject _prefab;
    [SerializeField] private ARRaycastManager arRaycaster;
    private List<GameObject> _objectList = new List<GameObject>();
    private int _index = -1;

    private void Update() 
    {
        if(Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if(touch.phase == TouchPhase.Began)
            {
                ObjectOnPlace(_prefab, touch.position);
            }
        }
    }

    private Vector3 PositionOnPlane(Vector3 touchPosition)
    {
        Vector3 position = new Vector3(0f, 0f, 0f);

        List<ARRaycastHit> hits = new List<ARRaycastHit>();

        if(arRaycaster.Raycast(touchPosition, hits, TrackableType.Planes))
        {
            Pose FirstHit = hits[0].pose;
            position = new Vector3(FirstHit.position.x, FirstHit.position.y + 1f, FirstHit.position.z);
        }
        

        return position;
    }

    public void ObjectOnPlace(GameObject prefab, Vector3 touchPosition)
    {
        CreateObject(prefab, PositionOnPlane(touchPosition));
    }

    private void CreateObject(GameObject prefab, Vector3 position)
    {
        _objectList.Add(Instantiate(prefab));
        _index++;

        _objectList[_index].transform.parent = gameObject.transform;
        _objectList[_index].transform.position = position;
        _objectList[_index].name = "Object - " + (_index + 1);
    }
}
