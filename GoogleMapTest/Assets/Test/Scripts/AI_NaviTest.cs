using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AI_NaviTest : MonoBehaviour
{
    [SerializeField]
    //private Transform _ai_destination;
    private NavMeshAgent Ai_Agent;

    public GameObject TestDestination;

    private void Awake()
    {
        Ai_Agent = GetComponent<NavMeshAgent>();
        //Ai_Agent.autoBraking = false;
    }

    private void Start()
    {
        //Ai_Agent.enabled = true;
        MoveWayPoint();
    }

    private void MoveWayPoint()
    {
        //�ִ� �Ÿ� ��� ����� ������ �ʾ����� ������ �������� ����.
        if(Ai_Agent.isPathStale)
        {
            return;
        }
    }

    private void Update()
    {
        if (TestDestination == null)
        {
            return;
        }

        Ai_Agent.destination = TestDestination.transform.position;
    }
}
