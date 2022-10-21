using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MiniMapLoader : MonoBehaviour
{
    [SerializeField]
    private RawImage _image;
    [SerializeField]
    private MeshRenderer _renderer;

    private void Start()
    {
        _image = GetComponent<RawImage>();
        _renderer = GetComponent<MeshRenderer>();
    }
    private void Update()
    {
        _renderer.material.SetTexture("MiniMap", _image.texture);
    }
}
