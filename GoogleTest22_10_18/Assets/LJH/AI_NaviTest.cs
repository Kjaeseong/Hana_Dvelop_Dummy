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
        //최단 거리 경로 계산이 끝나지 않았으면 다음을 수행하지 않음.
        if (Ai_Agent.isPathStale)
        {
            return;
        }
    }

    private void Update()
    {
        // 목적지에 태그, 콜라이더를 주고 첫번째 목적지에 도착하면 다음 목적지로 이동 하도록.
        //-----------------------------------------------------------------

        if(TestDestination == null)
        {
            return;
        }

        Ai_Agent.destination = TestDestination.transform.position;
    }
}
