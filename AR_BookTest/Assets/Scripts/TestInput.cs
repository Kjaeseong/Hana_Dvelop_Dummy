using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestInput : MonoBehaviour
{
    private Inventory _inven;

    [SerializeField] GameObject _item1;
    [SerializeField] GameObject _item2;

    private Items _item;

    void Start()
    {
        _inven = GetComponent<Inventory>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            _item = _item1.GetComponent<Items>();
            _inven.AddItem(_item);
        }

        if (Input.GetMouseButtonDown(1))
        {
            _item = _item2.GetComponent<Items>();
            _inven.AddItem(_item);
        }
    }
}
