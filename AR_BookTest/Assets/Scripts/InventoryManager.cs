using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryManager : MonoBehaviour
{
    //private
    [SerializeField] Button[] _button;
    [SerializeField] Inventory _inven;

    private void OnEnable()
    {
        //_inven.GetItem.AddListener(CheckInventory);
    }

    private void Start()
    {
        _inven.GetItem.AddListener(CheckInventory);

        int _childCount = transform.childCount;
        Debug.Log(_childCount);
        _button = new Button[_childCount];

        _button = GetComponentsInChildren<Button>();

        CheckInventory();
    }

    public void CheckInventory()
    {
        for (int i = 0; i < _inven.ItemInInventory.Length; ++i)
        {
            if (_inven.ItemInInventory[i] == null)
            {
                _button[i].gameObject.SetActive(false);
            }
            else
            {
                _button[i].gameObject.SetActive(true);

                Text _text = _button[i].GetComponentInChildren<Text>();
                _text.text = _inven.ItemInInventory[i].ItemCount.ToString();

                Image _image = _button[i].GetComponent<Image>();
                _image.sprite = _inven.ItemInInventory[i].ItemImage.sprite;
            }
        }
    }

    private void OnDisable()
    {
        _inven.GetItem.RemoveListener(CheckInventory);
    }
}
