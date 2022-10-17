using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Items : MonoBehaviour
{
    public string ItemName { get; private set; }
    public int ItemCount { get; set; }
    public int Impression { get; set; }

    public Image ItemImage { get; private set; }

    // Start is called before the first frame update
    void Start()
    {
        ItemName = gameObject.tag;
        ItemCount = 1;
        ItemImage = GetComponent<Image>();
    }
}
