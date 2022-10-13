using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterColliderTest : MonoBehaviour
{
    [SerializeField]
    private Text _text;
    private void OnCollisionEnter(Collision collision)
    {
        _text.text = "���𰡿� ����";
    }

    private void OnCollisionExit(Collision collision)
    {
        _text.text = "���𰡿� �� ����";
    }
}
