using TMPro;
using UnityEngine;

public class InteractObj : MonoBehaviour
{
    [SerializeField] private GameObject _selcetedObject;
    public bool IsSelected
    {
        get => SelectedObject == this;
    }
    private static InteractObj _interactObject;
    public static InteractObj SelectedObject
    {
        get => _interactObject;
        set
        {
            if(_interactObject == value)
            {
                return;
            }

/*            if(_interactObject != null) //´Ù¸¥°÷ Å¬¸¯½Ã ²¨Áü
            {
                _interactObject._selcetedObject.SetActive(false);
            }*/
            _interactObject = value;
        
            if (value != null)
            {
                value._selcetedObject.SetActive(true);
            } 
        }
    }

    private void Awake()
    {
        _selcetedObject.SetActive(false);
    }
    public void DestroyObj()
    {
        if(SelectedObject != null)
        {
            Destroy(this.gameObject);
        }
    }
    public void Disable()
    {
        _interactObject._selcetedObject.SetActive(false);
        InteractObj.SelectedObject = null;
    }
}
