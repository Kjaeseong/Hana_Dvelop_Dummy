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

        private MapsService _mapsService;
        private LatLng _latLng;

        private float _coord_x_Control = 10f;
        private float _coord_z_Control = 10f;
        private float _basePlateHigh = 0.5f;

        private float _elapsedTime = 0f;
        private int _count = 1;
        private int _countTime = 1;

        private AI_NaviTest _ai_Navitest;

        public string Destination_Name;

        private void Start()
        {
            Invoke("GetMesh", 1f);
            //_latLng = new LatLng(37.540379, 127.124526);
        }

        private void Update()
        {
            _elapsedTime += Time.deltaTime;
            if (_elapsedTime > 2f && _count != 0)
            {
                GameObject AI = Instantiate(_AI_test, new Vector3(0, 0, 0), Quaternion.identity);
                _ai_Navitest = AI.GetComponent<AI_NaviTest>();
                _count--;
            }
            if (_elapsedTime > 4f && _countTime != 0)
            {
                FindBuilding();
                _countTime--;
            }
        }


        private void GetMesh()
        {
            _mesh = GetComponentsInChildren<MeshRenderer>();

            _latLng = new LatLng((double)_latLng.Lat, (double)_latLng.Lng);

            foreach (var renderer in _mesh)
            {
                renderer.materials = _mat;
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
        private void FindBuilding()
        {
            // 건물의 이름을 찾아 넣는다. 이 부분은 추후 [배열] 형태로 만들어 확장성 가능하게 만들 수 있음.
            GameObject testBuilding = GameObject.Find(Destination_Name);
            Vector3 TestBuildingPos = testBuilding.transform.position;

            // 오브젝트를 해당 건물의 주변에 원하는 위치에 생성한다. 이 부분 또한 위치 로케이션 오브젝트를 추가하여
            // 확장성을 높일 수 있음.
            _ai_Navitest.TestDestination = Instantiate(_Position_Test, new Vector3(TestBuildingPos.x - _coord_x_Control, _basePlateHigh, TestBuildingPos.z - _coord_z_Control),
                Quaternion.identity);
        }
    }
}
