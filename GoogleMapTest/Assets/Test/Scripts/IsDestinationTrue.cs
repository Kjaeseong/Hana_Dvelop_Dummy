using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IsDestinationTrue : MonoBehaviour
{
    public GameObject AI_object;

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject == AI_object)
        {
            gameObject.SetActive(false);
        }
    }
}
