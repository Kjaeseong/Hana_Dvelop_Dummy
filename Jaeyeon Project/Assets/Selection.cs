using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Selection : MonoBehaviour
{
    //Camera 화면
    [SerializeField] private Camera     _camera;

    //레이어 마스크를 통해 레이캐스트를 쐈을경우 상호작용
    [SerializeField] private LayerMask  _selectObjectLayer;
    [SerializeField] private LayerMask  _eatObjectLayer;
    [SerializeField] private LayerMask  _UILayer;
    [SerializeField] private float      _laycastDistance;
    // 클릭시 해당 오브젝트 생성
    // [SerializeField] private GameObject _placePrefab;

    private InteractObj                 _interactObj;
    private Button                      _selectButton;

    private Vector3                     _touchPose;
    private Ray                         _ray;
    private RaycastHit                  _hit;

    public int hitCount;
    

    private void Update()
    {
        //터치시 포지션 위치 내보냄
        if (!Utility.TryGetInputPosition(out _touchPose)) return;

        #region 클릭시 오브젝트 생성
        /*
       if (Utility.Raycast(_touchPose, out Pose hitPose))
        {
            Instantiate(_placePrefab, hitPose.position, hitPose.rotation);
        }
        */
        #endregion

        //터치시 카메라의 터치포지션을 레이케스트에 위치대입
        _ray = _camera.ScreenPointToRay(_touchPose);

        #region 레이케스팅

        //_UILayer 레이어마스크를 클릭시 버튼 클릭하는 것 과 같은 버튼 클릭 형식으로 OnClick 이벤트에 있는 매서드 Invoke
        //버튼 이벤트를 호출 하기 위해선 버튼 컴포넌트, EventSystem 필요
        if (Physics.Raycast(_ray, out _hit, Mathf.Infinity, _UILayer))
        {
            Debug.Log("UI 터치");
            _selectButton = _hit.transform.GetComponent<Button>();

            _selectButton.onClick.Invoke();
        }

        //해당 레이어 마스크를 가진 오브젝트 에 한번 터치 시 카운트가 증가하고 한번 더 클릭하면 UI캔버스가 꺼짐과 동시에 히트카운트 0으로 초기화
        if (Physics.Raycast(_ray, out _hit, _laycastDistance, _selectObjectLayer))
        {
            Debug.Log("오브젝트 터치");
            InteractObj.SelectedObject = _hit.transform.GetComponentInChildren<InteractObj>();
            hitCount++;
            if (hitCount > 1)
            {
                InteractObj.SelectedObject.Disable();
                hitCount = 0;
            }
        }

        // UI버튼을 통하지않고 바로 상호작용이 필요할 시 오브젝트의 메서드 호출을 바로 할 수 있음
        if (Physics.Raycast(_ray, out _hit, _laycastDistance, _eatObjectLayer))
        {
            Debug.Log("먹는 오브젝트 터치");
            if (_hit.transform == null || (_hit.transform != null && _hit.transform.GetComponent<InteractObj>() == null)) return;

            _interactObj = _hit.transform.GetComponent<InteractObj>();
           _interactObj.DestroyObj();
        }
        #endregion
    }
}
