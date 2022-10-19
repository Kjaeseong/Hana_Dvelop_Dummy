using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildingMat : MonoBehaviour
{
    [SerializeField]
    private MeshRenderer[] _mesh;

    [SerializeField]
    private Material[] _mat = new Material[2];
    
    private void Start()
    {
        //Invoke("GetMesh", 5f);
    }
    
    public void GetMesh()
    {
        _mesh = GetComponentsInChildren<MeshRenderer>();
        
        foreach (var renderer in _mesh)
        {
            renderer.materials = _mat;
        }
    }
}
