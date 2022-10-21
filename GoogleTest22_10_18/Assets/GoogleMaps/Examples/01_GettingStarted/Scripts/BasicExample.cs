using Google.Maps.Coord;
using Google.Maps.Event;
using Google.Maps.Examples.Shared;
using UnityEngine;

namespace Google.Maps.Examples {
  /// <summary>
  /// This example demonstrates a basic usage of the Maps SDK for Unity.
  /// </summary>
  /// <remarks>
  /// By default, this script loads the Statue of Liberty. If a new lat/lng is set in the Unity
  /// inspector before pressing start, that location will be loaded instead.
  /// </remarks>
  [RequireComponent(typeof(MapsService))]
  public class BasicExample : MonoBehaviour {

        public PositionSensor PositionSensor;

        [Tooltip("LatLng to load (must be set before hitting play).")]
        [SerializeField]
        private LatLng LatLng;

        private MapsService mapsService;
        /// <summary>
        /// Use <see cref="MapsService"/> to load geometry.
        /// </summary>
        private void Start() {

            LatLng = new LatLng(37.539636, 127.123285);// (PositionSensor.GetLat(), PositionSensor.GetLong());

            // Get required MapsService component on this GameObject.
            mapsService = GetComponent<MapsService>();

            // Set real-world location to load.
            mapsService.InitFloatingOrigin(LatLng);

            // Register a listener to be notified when the map is loaded.
            mapsService.Events.MapEvents.Loaded.AddListener(OnLoaded);

            // Load map with default options.
            mapsService.LoadMap(ExampleDefaults.DefaultBounds, ExampleDefaults.DefaultGameObjectOptions);
        }

        public void LoadMapGPS()
        {
            LatLng = new LatLng(PositionSensor.GetLat(), PositionSensor.GetLong());

            mapsService.MoveFloatingOrigin(LatLng);

            mapsService.LoadMap(ExampleDefaults.DefaultBounds, ExampleDefaults.DefaultGameObjectOptions);
        }

        /// <summary>
        /// Example of OnLoaded event listener.
        /// </summary>
        /// <remarks>
        /// The communication between the game and the MapsSDK is done through APIs and event listeners.
        /// </remarks>
        public void OnLoaded(MapLoadedArgs args) {
      // The Map is loaded - you can start/resume gameplay from that point.
      // The new geometry is added under the GameObject that has MapsService as a component.
    }
  }
}
