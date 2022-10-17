using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Inventory : MonoBehaviour
{
    public Items[] ItemInInventory { get; private set; }

    public UnityEvent GetItem = new UnityEvent();

    void Awake()
    {
        ItemInInventory = new Items[10];
        // 추후에 인벤토리 사이즈 정해지면 수정해야함
    }

    public void AddItem(Items item)
    {
        for (int i = 0; i < ItemInInventory.Length; ++i)
        {
            if (ItemInInventory[i] == null)
            {
                ItemInInventory[i] = item;
                Debug.Log($"{item.ItemName} 하나 추가");
                GetItem.Invoke();
                return;
            }

            else if (item.ItemName == ItemInInventory[i].ItemName)
            {
                ++ItemInInventory[i].ItemCount;
                Debug.Log($"{ItemInInventory[i].ItemName}의 개수 하나 추가");
                GetItem.Invoke();
                return;
            }
        }

        Debug.Log("인벤토리 가득 참");
    }

    public void UseItem(int index)
    {
        if (ItemInInventory[index].ItemCount >= 1)
        {
            --ItemInInventory[index].ItemCount;
            // TODO: 아이템 사용효과
        }
        else
        {
            ItemInInventory[index] = null;
        }
        
    }
}
