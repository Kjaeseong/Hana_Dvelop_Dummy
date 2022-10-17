using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    public int _index;
    public string _name;
    public string _category;
    public int _value;
    public string _iconFile;
    public string _description;


    /// <summary>
    /// 
    /// </summary>
    public void SetItemValue(int index, string name, string cate, int value, string icon, string desc)
    {
        _index = index;
        _name = name;
        _category = cate;
        _value = value;
        _iconFile = icon;
        _description = desc;
    }
}
