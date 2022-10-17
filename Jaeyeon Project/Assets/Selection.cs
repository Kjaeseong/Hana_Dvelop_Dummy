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
    [SerializeField] private float      _laycastDistance;
    // Ŭ���� �ش� ������Ʈ ����
    // [SerializeField] private GameObject _placePrefab;

    private InteractObj                 _interactObj;
    private Button                      _selectButton;

    private Vector3                     _touchPose;
    private Ray                         _ray;
    private RaycastHit[]                _hit;

    public int hitCount;
    

    private void Update()
    {
        //��ġ�� ������ ��ġ ������
        if (!Utility.TryGetInputPosition(out _touchPose)) return;

        #region Ŭ���� ������Ʈ ����
        /*
       if (Utility.Raycast(_touchPose, out Pose hitPose))
        {
            Instantiate(_placePrefab, hitPose.position, hitPose.rotation);
        }
        */
        #endregion

        #region �����ɽ���
        //��ġ�� ī�޶��� ��ġ�������� �����ɽ�Ʈ�� ��ġ����
        _ray = _camera.ScreenPointToRay(_touchPose);
        _hit = Physics.RaycastAll(_ray, 100000f);

        foreach(RaycastHit h in _hit)
        {
            
            //�ش� ���̾� ����ũ�� ���� ������Ʈ �� �ѹ� ��ġ �� ī��Ʈ�� �����ϰ� �ѹ� �� Ŭ���ϸ� UIĵ������ ������ ���ÿ� ��Ʈī��Ʈ 0���� �ʱ�ȭ
            if (h.collider.gameObject.layer == _selectObjectLayers[0] ) // InteractObj
            {
                Debug.Log("������Ʈ ��ġ");
                InteractObj.SelectedObject = h.transform.GetComponentInChildren<InteractObj>();
                hitCount++;
                if (hitCount > 1)
                {
                    InteractObj.SelectedObject.Disable();
                    hitCount = 0;
                }
                return;
            }

            //_UILayer ���̾��ũ�� Ŭ���� ��ư Ŭ���ϴ� �� �� ���� ��ư Ŭ�� �������� OnClick �̺�Ʈ�� �ִ� �ż��� Invoke
            //��ư �̺�Ʈ�� ȣ�� �ϱ� ���ؼ� ��ư ������Ʈ, EventSystem �ʿ�
            if (h.collider.gameObject.layer == _selectObjectLayers[1] ) // UI
            {
                Debug.Log("UI ��ġ");
                _selectButton = h.transform.GetComponent<Button>();

                _selectButton.onClick.Invoke();
                return;
            }


            // UI��ư�� �������ʰ� �ٷ� ��ȣ�ۿ��� �ʿ��� �� ������Ʈ�� �޼��� ȣ���� �ٷ� �� �� ����
            if (h.collider.gameObject.layer == _selectObjectLayers[2]) // EatItem
            {
                Debug.Log("�Դ� ������Ʈ ��ġ");
                if (h.transform == null || (h.transform != null && h.transform.GetComponent<InteractObj>() == null)) return;

                _interactObj = h.transform.GetComponent<InteractObj>();
                _interactObj.DestroyObj();
                return;
            }
        }
        #endregion
    }
}
