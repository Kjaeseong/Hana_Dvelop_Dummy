using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AI_NaviTest : MonoBehaviour
{
    [SerializeField]
    private NavMeshAgent Ai_Agent;
    private LineRenderer _ir;

    public GameObject TestDestination;


    private void Awake()
    {
        Ai_Agent = GetComponent<NavMeshAgent>();
    }

    private void Start()
    {
        MoveWayPoint();

        _ir = this.GetComponent<LineRenderer>();
        _ir.startWidth = _ir.endWidth = 0.1f;
        _ir.material.color = Color.blue;
        _ir.enabled = false;
    }

    private void MoveWayPoint()
    {
        Debug.Log("MoveWayPoint() 실행");

        //최단 거리 경로 계산이 끝나지 않았으면 다음을 수행하지 않음.
        if (Ai_Agent.isPathStale)
        {
            return;
        }
    }

    public void makePath()
    {
        Debug.Log("makePath() 실행");

        _ir.enabled = true;
        StartCoroutine(makePathCoroutine());
    }

    private void drawPath()
    {
        Debug.Log("drawPath() 실행");

        int length = Ai_Agent.path.corners.Length;

        _ir.positionCount = length;

        for (int i = 1; i < length; i++)
        {
            _ir.SetPosition(i, Ai_Agent.path.corners[i]);
        }
    }

    IEnumerator makePathCoroutine()
    {
        Debug.Log("makePathCoroutine() 실행");
        Ai_Agent.SetDestination(TestDestination.transform.position);

        _ir.SetPosition(0, this.transform.position);

        yield return new WaitForSeconds(0.1f);

        drawPath();
    }



    private void Update()
    {
        // 목적지에 태그, 콜라이더를 주고 첫번째 목적지에 도착하면 다음 목적지로 이동 하도록.
        //-----------------------------------------------------------------

        if (TestDestination == null)
        {
            return;
        }

        Ai_Agent.destination = TestDestination.transform.position;
    }
}
