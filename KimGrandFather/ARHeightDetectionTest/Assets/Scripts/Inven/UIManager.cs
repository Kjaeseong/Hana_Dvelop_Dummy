using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UIManager : MonoBehaviour
{
    [SerializeField] private Inventory _inven;

    [SerializeField] private TextMeshProUGUI[] _invenSlot = new TextMeshProUGUI[4];



    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        SetText();
    }

    private void SetText()
    {
        for(int i = 0; i < 4; i++)
        {
            Debug.Log($"인벤토리 {i + 1}번째 칸 호출");
            _invenSlot[i].text = _inven.GetItemInfo(i, "Name");
        }
    }
}
