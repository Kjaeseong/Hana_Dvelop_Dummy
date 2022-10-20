using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class MapManager : MonoBehaviour
{
    public RawImage mapRawImage;

    [Header("�� ���� ����")]
    public string strBaseURL = "";
    public double latitude = 35.000;
    public double longitude = 35.000;
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
