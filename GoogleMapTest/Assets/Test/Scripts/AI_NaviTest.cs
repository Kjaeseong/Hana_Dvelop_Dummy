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
        Debug.Log("MoveWayPoint() ����");

        //�ִ� �Ÿ� ��� ����� ������ �ʾ����� ������ �������� ����.
        if (Ai_Agent.isPathStale)
        {
            return;
        }
    }

    public void makePath()
    {
        Debug.Log("makePath() ����");

        _ir.enabled = true;
        StartCoroutine(makePathCoroutine());
    }

    private void drawPath()
    {
        Debug.Log("drawPath() ����");

        int length = Ai_Agent.path.corners.Length;

        _ir.positionCount = length;

        for (int i = 1; i < length; i++)
        {
            _ir.SetPosition(i, Ai_Agent.path.corners[i]);
        }
    }

    IEnumerator makePathCoroutine()
    {
        Debug.Log("makePathCoroutine() ����");
        Ai_Agent.SetDestination(TestDestination.transform.position);

        _ir.SetPosition(0, this.transform.position);

        yield return new WaitForSeconds(0.1f);

        drawPath();
    }



    private void Update()
    {
        // �������� �±�, �ݶ��̴��� �ְ� ù��° �������� �����ϸ� ���� �������� �̵� �ϵ���.
        //-----------------------------------------------------------------

        if (TestDestination == null)
        {
            return;
        }

        Ai_Agent.destination = TestDestination.transform.position;
    }
}
