using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Selection : MonoBehaviour
{
    [SerializeField] private Camera _camera;
    [SerializeField] private LayerMask _selectObjectLayer;
    private Vector2 _touchPose;
    private Ray _ray;
    private RaycastHit _hit;

    private void Update()
    {
        
        _ray = _camera.ScreenPointToRay(_touchPose);
        if(Physics.Raycast(_ray, out _hit, Mathf.Infinity, _selectObjectLayer))
        {
            InteractObj.SelectedObject = _hit.transform.GetComponentInChildren<InteractObj>();
            Debug.Log("������Ʈ ��ġ");
            return;
        }

        InteractObj.SelectedObject = null;
    }
}
