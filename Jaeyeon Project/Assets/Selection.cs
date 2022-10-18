using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Selection : MonoBehaviour
{
    //Camera ȭ��
    [SerializeField] private Camera     _camera;

    //���̾� ����ũ�� ���� ����ĳ��Ʈ�� ������� ��ȣ�ۿ�
    [SerializeField] private LayerMask[]  _selectObjectLayers;
/*    [SerializeField] private LayerMask  _eatObjectLayer;
    [SerializeField] private LayerMask  _UILayer;*/
    [SerializeField] private float      _laycastDistance;
    private Vector3                     _touchPose;
    private Ray                         _ray;
    private RaycastHit                  _hit;

    // Ŭ���� �ش� ������Ʈ ����
    // [SerializeField] private GameObject _placePrefab;
    private InteractObj                 _interactObj;
    private Button                      _selectButton;

    public int hitCount;
    
    private void Update()
    {
        //��ġ�� ������ ��ġ �������� �����ɽ�Ʈ ��
        if (Utility.TryGetInputPosition(out _touchPose))
        {
            RaycastCall();
        }
        else return;

        #region Ŭ���� ������Ʈ ����
        /*
       if (Utility.Raycast(_touchPose, out Pose hitPose))
        {
            Instantiate(_placePrefab, hitPose.position, hitPose.rotation);
        }
        */
        #endregion

    }

    #region �����ɽ���
    private void RaycastCall()
    {
        //��ġ�� ī�޶��� ��ġ�������� �����ɽ�Ʈ�� ��ġ����
        _ray = _camera.ScreenPointToRay(_touchPose);

        //_UILayer ���̾��ũ�� Ŭ���� ��ư Ŭ���ϴ� �� �� ���� ��ư Ŭ�� �������� OnClick �̺�Ʈ�� �ִ� �ż��� Invoke
        //��ư �̺�Ʈ�� ȣ�� �ϱ� ���ؼ� ��ư ������Ʈ, EventSystem �ʿ�
        if (Physics.Raycast(_ray, out _hit, Mathf.Infinity, _selectObjectLayers[0]))
        {
            Debug.Log("UI ��ġ");
            _selectButton = _hit.transform.GetComponent<Button>();

            _selectButton.onClick.Invoke();
        }

        //�ش� ���̾� ����ũ�� ���� ������Ʈ �� �ѹ� ��ġ �� ī��Ʈ�� �����ϰ� �ѹ� �� Ŭ���ϸ� UIĵ������ ������ ���ÿ� ��Ʈī��Ʈ 0���� �ʱ�ȭ
        if (Physics.Raycast(_ray, out _hit, _laycastDistance, _selectObjectLayers[1]))
        {
            Debug.Log("������Ʈ ��ġ");
            InteractObj.SelectedObject = _hit.transform.GetComponentInChildren<InteractObj>();
            hitCount++;
            if (hitCount > 1)
            {
                InteractObj.SelectedObject.Disable();
                hitCount = 0;
            }
        }

        // UI��ư�� �������ʰ� �ٷ� ��ȣ�ۿ��� �ʿ��� �� ������Ʈ�� �޼��� ȣ���� �ٷ� �� �� ����
        if (Physics.Raycast(_ray, out _hit, _laycastDistance, _selectObjectLayers[2]))
        {
            Debug.Log("�Դ� ������Ʈ ��ġ");
            if (_hit.transform == null || (_hit.transform != null && _hit.transform.GetComponent<InteractObj>() == null)) return;

            _interactObj = _hit.transform.GetComponent<InteractObj>();
            _interactObj.DestroyObj();
        }
    }
    #endregion
}
