using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AILocation : MonoBehaviour
{
    [SerializeField]
    private NavMeshAgent AI;

    [SerializeField]
    private GameObject[] Destinations;

    private int TestNum;
    private int count = 0;

    private void Awake()
    {
        AI = GetComponent<NavMeshAgent>();
    }

    private void Start()
    {
        MoveWayPoint();
    }

    private void MoveWayPoint()
    {
        if (AI.isPathStale)
        {
            return;
        }
        AI.destination = Destinations[0].transform.position;

    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("µµÂø");
        if (other.tag == "Location")
        {
            count++;
            Debug.Log($"{count}");
            AI.destination = Destinations[count].transform.position;

            if(Destinations == null)
            {
                return;
            }
        }
    }
    private void OnTriggerStay(Collider other)
    {
        if(other.tag == "MainLocation")
        {
            Destinations[count].gameObject.transform.localScale = new Vector3(1, 1);
        }
    }
}
