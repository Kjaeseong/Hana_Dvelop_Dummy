using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchInput : MonoBehaviour
{
    public bool IsTouch { get; private set; }
    private int IsZoom;
    private Vector3 TouchPosition;
    private float TouchPositionX;
    private float TouchPositionY;
    private float TouchPositionZ;
    private int _touchCount;

    // 더 추가할게 있나...일단 터치 포지션 각 축별로 받고
    // +터치 포지션 OnScreen으로 화면내 좌표값 반환 함수 만들어야 하고
    // 터치 슬라이드 구현..터치중인 손가락이 몇개인지..
    // 줌 인 아웃은 지금 구현중이었고..+슬라이드로 쓰다듬는거 구현해놔야하고
    // 어............어........또 뭘 구현해놔야 하지.....뭐 구현해놓으면 편하지....
    // 
    // 내일...오디오매니저 스크립트로 CSV로 파일명까지 입력받아서 파일 로드, 리스트에 넣어놓는 스크립트까지 짜놓자
    // 오디오소스도 배열로 미리 만들어서 선택적으로 여러개 재생할 수 있도록 틀은 마련해야 할 듯..
    // 엄....엄.....엄.......음...어....어.... 그거 뭐지 그거 그거 그거 그거.....무ㅕ였지 생각이 안난다
    // 어..................................................................................................
    // .....................................몰루 집갈려

    public int GetTouchCount()
    {
        return _touchCount;
    }

    public int GetZoom()
    {
        return IsZoom;
    }

    public Vector3 GetTouchPosition()
    {
        return TouchPosition;
    }

    public float GetTouchPositionAxis(string Axis)
    {
        float data;

        switch(Axis)
        {
            case "x":
                data = TouchPositionX;
                break;
            case "y":
                data = TouchPositionY;
                break;
            case "z":
                data = TouchPositionZ;
                break;
            default :
                data = 0f;
                break;
        }

        return data;
    }

    private void RaycastPosition()
    {

    }

    private void GetSlide(Touch touchPoint)
    {

    }

    private void Zoom()
    {
        if (Input.touchCount == 2) //손가락 2개가 눌렸을 때
        {
            Touch FirstTouch = Input.GetTouch(0); //첫번째 손가락 터치를 저장
            Touch SecondTouch = Input.GetTouch(1); //두번째 손가락 터치를 저장

            //터치에 대한 이전 위치값을 각각 저장함
            //처음 터치한 위치(touchZero.position)에서 이전 프레임에서의 터치 위치와 이번 프로임에서 터치 위치의 차이를 뺌
            Vector2 touchZeroPrevPos = FirstTouch.position - FirstTouch.deltaPosition; //deltaPosition는 이동방향 추적할 때 사용
            Vector2 touchOnePrevPos = SecondTouch.position - SecondTouch.deltaPosition;
			
            // 각 프레임에서 터치 사이의 벡터 거리 구함
            float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude; //magnitude는 두 점간의 거리 비교(벡터)
            float touchDeltaMag = (FirstTouch.position - SecondTouch.position).magnitude;

            // 거리 차이 구함(거리가 이전보다 크면(마이너스가 나오면)손가락을 벌린 상태_줌인 상태)
            float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;

            if(deltaMagnitudeDiff <= 0) { IsZoom = 1; }
            else if(deltaMagnitudeDiff >= 0) { IsZoom = -1; }
            else { IsZoom = 0; }
        }
        else
        {
            IsZoom = 0;
        }
    }
    
    


}
