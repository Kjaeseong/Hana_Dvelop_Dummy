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

    [SerializeField]
    private GameObject _AI_test;

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
            renderer.gameObject.AddComponent<MeshCollider>();
            renderer.gameObject.AddComponent<NavMeshSourceTag>();
        }
        //Instantiate(_AI_test, new Vector3(0, 0.5f, 0), Quaternion.identity);
    }
}
