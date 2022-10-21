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

        // 목적지가 생성되는 시간, AI가 생성되는 시간 변수
        private int _count = 1;
        private int _countTime = 1;
        private float _elapsedTime = 0f;

        private float _basePlateHigh = 0.5f;

        private LatLng _latLng;
        private MapsService _mapsService;
        private AI_NaviTest _ai_Navitest;

        // 첫 번째 로케이션에 해당하는 오브젝트 위치 조절값
        private float _coord_x_Control = 25f;
        private float _coord_z_Control = 25f;

        // 목적지 건물에 해당하는 이름
        public string[] Destination_Name;

        // 첫 번째 로케이션에 해당하는 건물 좌표
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

        // TODO : 위치 오브젝트를 추가하여 아래 함수 확장성 개발 요망.
        /// <summary>
        /// 건물을 찾고, 건물의 위치 앞에 오브젝트를 설치하는 함수
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
            // 오브젝트 하나만 배치하는 테스트 코드 
            //------------------------------------------------------------------------------------------------------
            //// 건물의 이름을 찾아 넣는다. 이 부분은 추후 [배열] 형태로 만들어 확장성 가능하게 만들 수 있음.
            //GameObject testBuilding = GameObject.Find(Destination_Name[0]);
            //Vector3 TestBuildingPos = testBuilding.transform.position;

            //// 그냥 건물 위치 파악해주는 변수 (지워도 무방함)
            //Destination_Lat = TestBuildingPos.x;
            //Destination_Lon = TestBuildingPos.z;

            //// 오브젝트를 해당 건물의 주변에 원하는 위치에 생성한다. 이 부분 또한 위치 로케이션 오브젝트를 추가하여
            //// 확장성을 높일 수 있음.
            //_ai_Navitest.TestDestination = Instantiate(_Position_Test, new Vector3(TestBuildingPos.x - _coord_x_Control, _basePlateHigh, TestBuildingPos.z - _coord_z_Control),
            //    Quaternion.identity);

        }
    }
}
