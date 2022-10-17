using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterRandomMove : MonoBehaviour
{

    private int _moveCooltimeCount;

    private float _randomX;
    private float _randomZ;

    private float _speedX;
    private float _speedZ;

    private Vector3 _moveVec;

    private void Update()
    {
        if (_moveCooltimeCount < 400)
        {
            transform.Translate(_moveVec);
        }
        else if( _moveCooltimeCount < 600)
        {
            _moveVec = new Vector3(0f, 0f, 0f);
            transform.Translate(_moveVec);
        }
        else
        {
            _moveCooltimeCount = 0;
            _randomX = Random.Range(-2f, 2f);
            _randomZ = Random.Range(-2f, 2f);
            _speedX = _randomX * Time.deltaTime;
            _speedZ = _randomZ * Time.deltaTime;
            _moveVec = new Vector3(_speedX, 0f, _speedZ);
        }
        _moveCooltimeCount++;
    }
}
