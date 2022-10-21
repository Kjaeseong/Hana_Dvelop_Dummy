using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class LightEstimation : MonoBehaviour
{
    public ARCameraManager m_CameraManager;
    public Light m_Light;

    void Awake ()
    {
        m_Light = GetComponent<Light>();
    }

    void OnEnable()
    {
        if (m_CameraManager != null)
            m_CameraManager.frameReceived += ChangeLighting;
    }

    void OnDisable()
    {
        if (m_CameraManager != null)
            m_CameraManager.frameReceived -= ChangeLighting;
    }

    void ChangeLighting(ARCameraFrameEventArgs args)
    {
        // TODO: Add the code for your environmental lighting adjustments here.

    }
}
