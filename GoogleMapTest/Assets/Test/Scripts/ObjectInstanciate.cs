using Google.Maps.Coord;
using Google.Maps.Event;
using Google.Maps.Examples.Shared;
using UnityEngine;

namespace Google.Maps.Examples
{
    /// <summary>
    /// This example demonstrates a basic usage of the Maps SDK for Unity.
    /// </summary>
    /// <remarks>
    /// By default, this script loads the Statue of Liberty. If a new lat/lng is set in the Unity
    /// inspector before pressing start, that location will be loaded instead.
    /// </remarks>
    [RequireComponent(typeof(MapsService))]
    public class ObjectInstanciate : MonoBehaviour
    {
        [Tooltip("LatLng to load (must be set before hitting play).")]
        [SerializeField]
        private LatLng LatLng;// = new LatLng(40.6892199, -74.044601);
        [SerializeField]
        private GameObject _PositiontestBox;
        private MapsService mapsService;
        public GPSManager GPSManager;

        /// <summary>
        /// Use <see cref="MapsService"/> to load geometry.
        /// </summary>
        private void Start()
        {
            // Get required MapsService component on this GameObject.
            /*MapsService */
            mapsService = GetComponent<MapsService>();

            // Set real-world location to load.
            //mapsService.InitFloatingOrigin(LatLng);

            // Register a listener to be notified when the map is loaded.
            mapsService.Events.MapEvents.Loaded.AddListener(OnLoaded);
        }

        //private void Update()
        //{
        //    if (GPSManager.Count > 1000)
        //    {
        //        LatLng = new LatLng((double)Input.location.lastData.latitude, (double)Input.location.lastData.longitude);//new LatLng((double)GPSManager.Lat, (double)GPSManager.Long);
        //        mapsService.MakeMapLoadRegion();
        //        mapsService.MoveFloatingOrigin(LatLng);
        //        mapsService.LoadMap(ExampleDefaults.DefaultBounds, ExampleDefaults.DefaultGameObjectOptions);
        //        GPSManager.Count = 0;
        //    }
        //    GPSManager.Count++;
        //}
        /// <summary>
        /// Example of OnLoaded event listener.
        /// </summary>
        /// <remarks>
        /// The communication between the game and the MapsSDK is done through APIs and event listeners.
        /// </remarks>
        public void OnLoaded(MapLoadedArgs args)
        {
            // The Map is loaded - you can start/resume gameplay from that point.
            // The new geometry is added under the GameObject that has MapsService as a component.
        }

    }


}
