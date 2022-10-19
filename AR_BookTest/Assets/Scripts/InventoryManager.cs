using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryManager : MonoBehaviour
{
    [SerializeField] Button[] _button;
    [SerializeField] GameObject[] _panel;
    [SerializeField] Inventory _inven;

    private bool _showPanel = false;

    private void Start()
    {
        for (int i = 0; i < _panel.Length; ++i)
        {
            _panel[i].SetActive(false);
        }
    }

    private void Update()
    {
        CheckInventory();
    }

    private void CheckInventory()
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

    public void UseItem(int index)
    {
        if (_inven.ItemInInventory[index].ItemCount >= 1)
        {
            --_inven.ItemInInventory[index].ItemCount;
            // TODO: ������ ���ȿ��
        }

        if(_inven.ItemInInventory[index].ItemCount == 0)
        {
            _inven.ItemInInventory[index] = null;
        }

    }

    public void DeleteItem(int index)
    {
        if (_inven.ItemInInventory[index].ItemCount >= 1)
        {
            --_inven.ItemInInventory[index].ItemCount;
        }

        if (_inven.ItemInInventory[index].ItemCount == 0)
        {
            _inven.ItemInInventory[index] = null;
        }
    }

    public void ShowPanel(int index)
    {
        _showPanel = !_showPanel;
        _panel[index].SetActive(_showPanel);
    }
}
