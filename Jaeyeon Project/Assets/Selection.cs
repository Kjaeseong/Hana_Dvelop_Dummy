using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Selection : MonoBehaviour
{
    [SerializeField] private Camera _camera;
    [SerializeField] private LayerMask _selectObjectLayer;
    [SerializeField] private LayerMask _eatObjectLayer;
    [SerializeField] private LayerMask _UILayer;
    [SerializeField] private GameObject _placePrefab;
    private InteractObj _interactObj;
    private Button _selectButton;
    public int hitCount;
    private Vector2 _touchPose;
    private Ray _ray;
    private RaycastHit _hit;

    private void Update()
    {

        if (!Utility.TryGetInputPosition(out _touchPose)) return;
        //클릭시 오브젝트 생성
/*        if (Utility.Raycast(_touchPose, out Pose hitPose))
        {
            Instantiate(_placePrefab, hitPose.position, hitPose.rotation);
        }
*/

        _ray = _camera.ScreenPointToRay(_touchPose);
        if(Physics.Raycast(_ray, out _hit, 100f, _selectObjectLayer))
        {
            InteractObj.SelectedObject = _hit.transform.GetComponentInChildren<InteractObj>();
            hitCount++;
            if (hitCount > 1)
            {
                InteractObj.SelectedObject.Disable();
                hitCount = 0;
            }
            return;
        }
        if (Physics.Raycast(_ray, out _hit, Mathf.Infinity, _UILayer))
        {
            _selectButton =  _hit.transform.GetComponent<Button>();

            _selectButton.onClick.Invoke();
        }
        
        if (Physics.Raycast(_ray, out _hit, 100f, _eatObjectLayer))
        {
            if (_hit.transform == null || (_hit.transform != null && _hit.transform.GetComponent<InteractObj>() == null)) return;

            _interactObj = _hit.transform.GetComponent<InteractObj>();
           _interactObj.DestroyObj();
        }
        //InteractObj.SelecSSstedObject = null;
    }
    
}
