using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    [SerializeField]
    GoogleMapAPI m_GoogleMapAPI;

    [SerializeField]
    private RawImage m_rawImage;

    public double m_let;
    public double m_lon;

    [SerializeField]
    private int m_maxZoom; //zoom�� �ִ� ����� �� ����

    private int m_zoom; //���� zoom ��

    private void Start()
    {
        m_zoom = 10; //�⺻ 10���� ����
    }
    
    //�� ��ư ���� �̺�Ʈ ���
    public void ZoomButton(bool _plusMinus)
    {
        if(_plusMinus)
        {
            m_zoom++;
            if(m_zoom > m_maxZoom)
            {
                m_zoom = m_maxZoom;
            }

        }
        else
        {
            m_zoom--;
            if (m_zoom < 0)
            {
                m_zoom = 0;
            }

        }
    }

    //public void OkButtonEvent(int _zoom)
    //{
    //    RawImage rawImage = m_rawImage;
    //    float let = float.Parse(m_let.text);
    //    float lon = float.Parse(m_lon.text);
    //    int scale = 1;

    //    m_GoogleMapAPI.Maps(rawImage, let, lon, _zoom, scale, GoogleMapAPI.mapType.roadmap);
    //}
}