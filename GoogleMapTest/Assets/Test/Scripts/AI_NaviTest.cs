using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AI_NaviTest : MonoBehaviour
{
    [SerializeField]
    private Transform _ai_destination;
    private NavMeshAgent Ai_Agent;

    private void Awake()
    {
        Ai_Agent = GetComponent<NavMeshAgent>();
        //Ai_Agent.autoBraking = false;

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
        Ai_Agent.destination = _ai_destination.position;
    }
}
