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
        // ���Ŀ� �κ��丮 ������ �������� �����ؾ���
    }

    public void AddItem(Items item)
    {
        for (int i = 0; i < ItemInInventory.Length; ++i)
        {
            if (ItemInInventory[i] == null)
            {
                ItemInInventory[i] = item;
                Debug.Log($"{item.ItemName} �ϳ� �߰�");
                GetItem.Invoke();
                return;
            }

            else if (item.ItemName == ItemInInventory[i].ItemName)
            {
                ++ItemInInventory[i].ItemCount;
                Debug.Log($"{ItemInInventory[i].ItemName}�� ���� �ϳ� �߰�");
                GetItem.Invoke();
                return;
            }
        }

        Debug.Log("�κ��丮 ���� ��");
    }

    public void UseItem(int index)
    {
        if (ItemInInventory[index].ItemCount >= 1)
        {
            --ItemInInventory[index].ItemCount;
            // TODO: ������ ���ȿ��
        }
        else
        {
            ItemInInventory[index] = null;
        }
        
    }
}
