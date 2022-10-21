using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Google.Maps.Coord;
using Google.Maps.Event;
using Google.Maps.Examples.Shared;

namespace Google.Maps.Examples
{
    [RequireComponent(typeof(MapsService))]
    public class SetBuildingMat : MonoBehaviour
    {
        [SerializeField]
        private MeshRenderer[] _mesh;
        //private List<MeshRenderer> list = new List<MeshRenderer>();

        [SerializeField]
        private Material[] _mat = new Material[2];

        [SerializeField]
        private GameObject _AI_test;

        [SerializeField]
        private GameObject _Position_Test;

        [SerializeField]
        private GameObject _player;

        // �������� �����Ǵ� �ð�, AI�� �����Ǵ� �ð� ����
        private int _count = 1;
        private int _countTime = 1;
        private float _elapsedTime = 0f;

        private float _basePlateHigh = 0.5f;

        private LatLng _latLng;
        private MapsService _mapsService;
        private AI_NaviTest _ai_Navitest;

        // ù ��° �����̼ǿ� �ش��ϴ� ������Ʈ ��ġ ������
        private float _coord_x_Control = 25f;
        private float _coord_z_Control = 25f;

        // ������ �ǹ��� �ش��ϴ� �̸�
        public string[] Destination_Name;

        // ù ��° �����̼ǿ� �ش��ϴ� �ǹ� ��ǥ
        public float Destination_Lat;
        public float Destination_Lon;

        private void Start()
        {
            Invoke("GetMesh", 1f);
            //_latLng = new LatLng(37.540379, 127.124526);
        }

        //private void Update()
        //{
        //    _elapsedTime += Time.deltaTime;
        //    if (_elapsedTime > 2f && _count != 0)
        //    {
        //        GameObject AI = Instantiate(_AI_test, new Vector3(0, 0, 0), Quaternion.identity);
        //        _ai_Navitest = AI.GetComponent<AI_NaviTest>();
        //        _count--;
        //    }
        //    if (_elapsedTime > 4f && _countTime != 0)
        //    {
        //        FindBuilding();
        //        _countTime--;
        //    }
        //}

        public void MakeAI()
        {
            
            GameObject AI = Instantiate(_AI_test, new Vector3(100f, 0.5f, 100f), Quaternion.identity);
            _ai_Navitest = AI.GetComponent<AI_NaviTest>();

            //Invoke("FindBuilding", 2f);
            
        }
        public void GetMesh()
        {
            _mesh = GetComponentsInChildren<MeshRenderer>();

            foreach (var renderer in _mesh)
            {
                if (renderer.gameObject.name[0] != 'S')
                {
                    renderer.materials = _mat;
                }
                renderer.gameObject.AddComponent<MeshCollider>();
                renderer.gameObject.AddComponent<NavMeshSourceTag>();
            }
            //FindBuilding();

        }

        public void OnLoaded(MapLoadedArgs args)
        {
            // The Map is loaded - you can start/resume gameplay from that point.
            // The new geometry is added under the GameObject that has MapsService as a component.
        }

        // TODO : ��ġ ������Ʈ�� �߰��Ͽ� �Ʒ� �Լ� Ȯ�强 ���� ���.
        /// <summary>
        /// �ǹ��� ã��, �ǹ��� ��ġ �տ� ������Ʈ�� ��ġ�ϴ� �Լ�
        /// </summary>
        public void FindBuilding()
        {
            //GameObject[] Testbuilding1018 = new GameObject[Destination_Name.Length];
            //Vector3[] TestBuildingPos1018 = new Vector3[Destination_Name.Length];

            //for (int i = 0; i < Destination_Name.Length; ++i)
            //{
            //    Testbuilding1018[i] = GameObject.Find(Destination_Name[i]);
            //    TestBuildingPos1018[i] = Testbuilding1018[i].transform.position;

            //    _ai_Navitest.TestDestination = Instantiate(_Position_Test, new Vector3(TestBuildingPos1018[i].x -
            //        _coord_x_Control, _basePlateHigh, TestBuildingPos1018[i].z), Quaternion.identity);
            //}

            _ai_Navitest.TestDestination = Instantiate(_Position_Test, _player.transform.position, Quaternion.identity);

            //------------------------------------------------------------------------------------------------------
            // ������Ʈ �ϳ��� ��ġ�ϴ� �׽�Ʈ �ڵ� 
            //------------------------------------------------------------------------------------------------------
            //// �ǹ��� �̸��� ã�� �ִ´�. �� �κ��� ���� [�迭] ���·� ����� Ȯ�强 �����ϰ� ���� �� ����.
            //GameObject testBuilding = GameObject.Find(Destination_Name[0]);
            //Vector3 TestBuildingPos = testBuilding.transform.position;

            //// �׳� �ǹ� ��ġ �ľ����ִ� ���� (������ ������)
            //Destination_Lat = TestBuildingPos.x;
            //Destination_Lon = TestBuildingPos.z;

            //// ������Ʈ�� �ش� �ǹ��� �ֺ��� ���ϴ� ��ġ�� �����Ѵ�. �� �κ� ���� ��ġ �����̼� ������Ʈ�� �߰��Ͽ�
            //// Ȯ�强�� ���� �� ����.
            //_ai_Navitest.TestDestination = Instantiate(_Position_Test, new Vector3(TestBuildingPos.x - _coord_x_Control, _basePlateHigh, TestBuildingPos.z - _coord_z_Control),
            //    Quaternion.identity);

        }
    }
}
