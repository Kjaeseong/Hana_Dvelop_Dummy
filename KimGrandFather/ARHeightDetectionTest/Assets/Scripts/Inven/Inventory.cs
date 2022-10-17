using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    [SerializeField] private GameObject _effectTarget;
    [SerializeField] private List<Dictionary<string, object>> _itemList;

    [SerializeField] private int _inventorySize;
    [SerializeField] private List<int> _inventory = new List<int>();


    private void Start() 
    {
        _itemList = CSVReader.Read("ItemList");
    }

    private void OnTriggerEnter(Collider other) 
    {
        if(other.name == "Item")
        {
            if(_inventory.Count < _inventorySize)
            {
                other.gameObject.SetActive(false);
                GetItem(Random.Range(1, _itemList.Count + 1));
            }
        }
    }


    public void GetItem(int num)
    {
        _inventory.Add(num);
    }

    public void UseItem(int index)
    {
        if(_inventory.Count >= index)
        {
            ActivateItemEffect(index - 1);
            _inventory.RemoveAt(index - 1);
        }
    }

    public void ActivateItemEffect(int index)
    {

    }

    /// <summary>
    /// index: 인벤토리 슬롯 순서, subject: 반환받을 항목
    /// </summary>
    public string GetItemInfo(int index, string subject)
    {
        string printText = "";

        if(_inventory.Count < index + 1)
        {
            return "";
        }

        for(int i = 0; i < _itemList.Count; i++)
        {
            if(_inventory[index] == int.Parse(_itemList[i]["Index"].ToString()))
            {
                printText = _itemList[i][subject].ToString();
                break;
            }
        }

        return printText;
    }


}
