using UnityEngine;

public class InteractObj : MonoBehaviour
{
    //ĵ���� UI�� on/off �ϱ�����
    [SerializeField] private GameObject _selcetedCanvasObject;

    //���� ������Ʈ ������Ʈ �ż��� ȣ���ϱ� ����
    private static InteractObj          _interactObject;

    //�� InteractObj ������Ʈ�� ���� ������Ʈ�� Ŭ���� true, false ���� ���� 
    public bool IsSelected
    {
        get => SelectedObject == this;
    }

    // �� InteractObj ������Ʈ�� ���� ������Ʈ�� Ŭ�� �� �ʿ��� ���� ��ų� ������ ��
    public static InteractObj SelectedObject
    {
        get => _interactObject;
        set
        {
            if (_interactObject == value)
            {
                return;
            }
            /*�ٸ��� Ŭ���� ����
              if(_interactObject != null) 
              {
                  _interactObject._selcetedObject.SetActive(false);
              }*/
            _interactObject = value;

            if (value != null)
            {
                value._selcetedCanvasObject.SetActive(true);
            }
        }
    }

    //���۽� ĵ������ ������
    private void Awake()
    {
        _selcetedCanvasObject.SetActive(false);
    }

    #region ������Ʈ �ż���
    /// <summary>
    /// Public ���� �ż��带 ���� ���� �ܺο��� �ʿ��� �ż��带 �ҷ� ���۽� �ش� �ż��� ���� ȣ��
    /// InteractObj.SelectedObject = null; =  ������ų� �ı��� �� �� 'Ŭ���� �Ǿ���' ��°��� �����
    /// </summary>
    public void DestroyObj()
    {
        Debug.Log("������Ʈ �ı�");

        //�ش� ������Ʈ�� �θ� �ı��� �Ͽ� �θ� �� �ڽ� �ı� �θ� ���ų� �ٸ� ������Ʈ�� �ı��� �ٶ��� Destroy �߰� Ȥ�� ���� �ٶ�
        Destroy(transform.parent.gameObject); 
        InteractObj.SelectedObject = null;
        GetPoint();
    }

    public void Disable()
    {
        Debug.Log("������Ʈ ��� Disable");
        _interactObject._selcetedCanvasObject.SetActive(false);
        InteractObj.SelectedObject = null;
    }

    public void GetPoint()
    {
        Debug.Log("���� ȹ��");
    }
    
    #endregion 
}
