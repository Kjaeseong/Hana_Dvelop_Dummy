using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetBuildingMat : MonoBehaviour
{

    [SerializeField]
    private MeshRenderer[] _mesh;
    //private List<MeshRenderer> list = new List<MeshRenderer>();

    [SerializeField]
    private Material[] _mat = new Material[2];

    private void Start()
    {
        Invoke("GetMesh", 1f);
    }

    private void GetMesh()
    {
        _mesh = GetComponentsInChildren<MeshRenderer>();

        foreach(var renderer in _mesh)
        {
            renderer.materials = _mat;
        }
    }


}
