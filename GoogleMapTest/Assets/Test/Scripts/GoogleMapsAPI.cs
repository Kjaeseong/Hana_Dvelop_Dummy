using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class GoogleMapsAPI : MonoBehaviour
{
    // Google Maps API
    // https://developers.google.com/maps/documentation/static-maps/intro  
    private RawImage kRawImg;

    public string strBaseURL = "https://maps.googleapis.com/maps/api/staticmap?center=";
    public double dLatitude = 37.4014171;      // 위도(판교)
    public double dLongitude = 127.1102274;    // 경도(판교)
    public int iMapZoom = 14;
    public int iMapWidth = 640;                // 무료 지원 최대 해상도
    public int iMapHeight = 640;               // 무료 지원 최대 해상도
    public string strPath = "weight:3%7Ccolor:blue%7Cenc:{coaHnetiVjM??_SkM??~R";
    public string strGoogleAPIKey = "";       // 본인이 발급 받은 API 키 입력(없어도 됨)

    IEnumerator map()
    {
        string url = strBaseURL + dLatitude + "," + dLongitude +
            "&zoom=" + iMapZoom.ToString() +
            "&size=" + iMapWidth.ToString() + "x" + iMapHeight.ToString() +
            "&path=" + strPath +
            strGoogleAPIKey;
        Debug.Log("URL: " + url);

        //-------------------------------------- Original Code
        //WWW www = new WWW(url);
        //yield return www;
        //kRawImg.texture = www.texture;
        //-------------------------------------- New Code
        using (UnityWebRequest uwr = UnityWebRequestTexture.GetTexture(url))
        {
            yield return uwr.SendWebRequest();
            if (uwr.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(uwr.error);
            }
            else
            {
                kRawImg.texture = DownloadHandlerTexture.GetContent(uwr);
            }
        }

        kRawImg.SetNativeSize();
    }

    // Use this for initialization
    void Start()
    {
        kRawImg = gameObject.GetComponent<RawImage>();
        StartCoroutine(map());
    }

    // Update is called once per frame
    void Update()
    {

    }
}
