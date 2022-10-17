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
        private GameObject _PositiontestBox;
        private MapsService _mapsService;
        private LatLng _latLng;

        public GPSManager GPSManager;

        private void Start()
        {
            Invoke("GetMesh", 1f);
            //맵 GPS 불러오기 테스트
            _mapsService = GetComponent<MapsService>();
            //실제 월드 로케이션 로드
            //_mapsService.InitFloatingOrigin(_latLng);
            //리스너 만들기
            _mapsService.Events.MapEvents.Loaded.AddListener(OnLoaded);
            //맵 불러오기
            _latLng = new LatLng(0, 0);
            Instantiate(_PositiontestBox, new Vector3((float)_latLng.Lat, 0.5f, (float)_latLng.Lng), Quaternion.identity);
        }

        private void GetMesh()
        {
            _mesh = GetComponentsInChildren<MeshRenderer>();

            foreach (var renderer in _mesh)
            {
                renderer.materials = _mat;
                renderer.gameObject.AddComponent<MeshCollider>();
                renderer.gameObject.AddComponent<NavMeshSourceTag>();
            }
            //Instantiate(_AI_test, new Vector3(0, 0.5f, 0), Quaternion.identity);
            //Instantiate(_PositiontestBox, new Vector3(0, 0.5f, 0), Quaternion.identity);
        }

        public void OnLoaded(MapLoadedArgs args)
        {
            // The Map is loaded - you can start/resume gameplay from that point.
            // The new geometry is added under the GameObject that has MapsService as a component.
        }
    }
}
