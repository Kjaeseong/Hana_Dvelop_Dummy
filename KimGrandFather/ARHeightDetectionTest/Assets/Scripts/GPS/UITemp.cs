using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public enum ELogtext
    {
        LAT = 1,
        LONG,
        ROT,
        LOG
    }

public class UITemp : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _latText;
    [SerializeField] private TextMeshProUGUI _longText;
    [SerializeField] private TextMeshProUGUI _rotText;
    [SerializeField] private TextMeshProUGUI _logText;

    

    /// <summary>
    /// target = lat(위도) / long(경도) / rot(각도) / log(로그) 중 택1<br/>
    /// value = 값.ToString()
    /// </summary>
    public void TextSet(int target, string value)
    {
        switch(target)
        {
            case 1:
                _latText.text = value;
                break;
            case 2:
                _longText.text = value;
                break;
            case 3:
                _rotText.text = value;
                break;
            case 4:
                _logText.text = value;
                break;
        }
    }
}
