using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ObjectSpawner : MonoBehaviour
{
    [SerializeField] private GameObject _cubePrefab;
    private List<GameObject> list = new List<GameObject>();
    [SerializeField] private Slider _slider;
    private int Count = -1;
    private Vector3 _pos;
    [SerializeField] private GameObject _Ob;
    [SerializeField] private TextMeshProUGUI _text;

    private void Update() 
    {
        Debug.Log(_slider.value);
        TempPos();
    }

    private void TempPos()
    {
        _Ob.transform.position = new Vector3(Camera.main.transform.position.x, Camera.main.transform.position.y, transform.position.z + (_slider.value * 120));
        _text.text = Vector3.Distance(_Ob.transform.position, Camera.main.transform.position).ToString();
    }

    public void ObjectCreate()
    {
        list.Add(Instantiate(_cubePrefab));
        Count++;
        list[0].transform.position = _Ob.transform.position;
    }
}
