using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Google.Maps.Examples.Shared;

public class BuildingRenderer : MonoBehaviour
{
    [SerializeField] private MeshRenderer[] _mesh;

    [SerializeField] private Material[] _mat = new Material[2];

    [SerializeField] private float _renewalTime = 1f;

    private void Start()
    {
        Invoke("BuildingRender", _renewalTime);
    }

    private void BuildingRender()
    {
        _mesh = GetComponentsInChildren<MeshRenderer>();

        foreach(var renderer in _mesh)
        {
            renderer.materials = _mat;
        }
    }
}
