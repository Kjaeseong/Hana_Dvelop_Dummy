using UnityEngine;

public class InteractObj : MonoBehaviour
{
    //캔버스 UI를 on/off 하기위함
    [SerializeField] private GameObject _selcetedCanvasObject;

    //현재 오브젝트 컴포넌트 매서드 호출하기 위함
    private static InteractObj          _interactObject;

    //이 InteractObj 컴포넌트를 가진 오브젝트를 클릭시 true, false 값을 얻음 
    public bool IsSelected
    {
        get => SelectedObject == this;
    }

    // 이 InteractObj 컴포넌트를 가진 오브젝트를 클릭 시 필요한 값을 얻거나 세팅을 함
    public static InteractObj SelectedObject
    {
        get => _interactObject;
        set
        {
            if (_interactObject == value)
            {
                return;
            }
            /*다른곳 클릭시 꺼짐
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

    //시작시 캔버스를 꺼놓음
    private void Awake()
    {
        _selcetedCanvasObject.SetActive(false);
    }

    #region 오브젝트 매서드
    /// <summary>
    /// Public 으로 매서드를 노출 시켜 외부에서 필요한 매서드를 불러 동작시 해당 매서드 동작 호출
    /// InteractObj.SelectedObject = null; =  사라지거나 파괴가 될 때 '클릭이 되었다' 라는것을 비워줌
    /// </summary>
    public void DestroyObj()
    {
        Debug.Log("오브젝트 파괴");

        //해당 오브젝트의 부모를 파괴를 하여 부모 및 자신 파괴 부모가 없거나 다른 오브젝트를 파괴를 바랄시 Destroy 추가 혹은 수정 바람
        Destroy(transform.parent.gameObject); 
        InteractObj.SelectedObject = null;
        GetPoint();
    }

    public void Disable()
    {
        Debug.Log("오브젝트 잠시 Disable");
        _interactObject._selcetedCanvasObject.SetActive(false);
        InteractObj.SelectedObject = null;
    }

    public void GetPoint()
    {
        Debug.Log("점수 획득");
    }
    
    #endregion 
}
