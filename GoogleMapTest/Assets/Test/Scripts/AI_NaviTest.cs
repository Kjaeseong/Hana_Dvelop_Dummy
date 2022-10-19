using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AI_NaviTest : MonoBehaviour
{
    [SerializeField]
    private NavMeshAgent Ai_Agent;

    public GameObject TestDestination;


    private void Awake()
    {
        Ai_Agent = GetComponent<NavMeshAgent>();
    }

    private void Start()
    {
        MoveWayPoint();
    }

    private void MoveWayPoint()
    {
        //�ִ� �Ÿ� ��� ����� ������ �ʾ����� ������ �������� ����.
        if (Ai_Agent.isPathStale)
        {
            return;
        }
    }

    private void Update()
    {
        // �������� �±�, �ݶ��̴��� �ְ� ù��° �������� �����ϸ� ���� �������� �̵� �ϵ���.
        //-----------------------------------------------------------------

        if(TestDestination == null)
        {
            return;
        }

        Ai_Agent.destination = TestDestination.transform.position;
    }
}
