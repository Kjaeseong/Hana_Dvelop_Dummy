using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class MiniMap : MonoBehaviour
{
    public RawImage mapRawImage;

    public PositionSensor Pos;

    [Header("�� ���� ����")]
    public string strBaseURL = "";
    [SerializeField]
    private double latitude;
    [SerializeField]
    private double longitude;
    public int zoom = 14;
    public int mapWidth;
    public int mapHeight;
    public string strAPIKey = "";

    // Start is called before the first frame update
    void Start()
    {
        mapRawImage = GetComponent<RawImage>();
        StartCoroutine(LoadMap());
    }

    IEnumerator LoadMap()
    {
        while(true)
        {
            latitude = 37.539636;//Pos.GetLat();
            longitude = 127.123285;//Pos.GetLong();


            string url = strBaseURL + "center=" + latitude + "," + longitude +
            "&zoom=" + zoom.ToString() + "&size=" + mapWidth.ToString() + "x" + mapHeight.ToString()
            + "&key=" + strAPIKey;   //URL ����  - ���� StringBuilder�� �̿��� ����.

            Debug.Log("URL : " + url);

            url = UnityWebRequest.UnEscapeURL(url); //Url�� ����  Web ��û
            UnityWebRequest req = UnityWebRequestTexture.GetTexture(url); //Texture�� ���� ��û 

            yield return req.SendWebRequest();  //��û ����

            mapRawImage.texture = DownloadHandlerTexture.GetContent(req); // ���� Texture�� RAW �̹����� ����
        }
    }

}
