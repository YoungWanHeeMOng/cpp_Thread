
//#include"StuConst.h"
//#include "Student.h"
#include "MStudent.h"
#include "PStudent.h"
#include "SStudent.h"

int main()
{
    Student* stues[3];
    stues[0] = new SStudent("공부 좋아");
    stues[1] = new MStudent("빠쮸따꾸");
    stues[2] = new PStudent("운동 잘해");
    // 학생ㅇㄹ 생성 후 전체 학생에게 강의  -> 자습 -> 잠자기 -> 휴식하기
    // ->음료마시가 -> 노래하기 순으로 진행

    //(각 단계마다 학생 정보를 출력
    cout << "강의" << endl;
    for (int i = 0; i< 3; i++)
    {
        stues[i]->ListenLecture();
        stues[i]->View();
    }
    //자습하기에선ㄴ 해당 학생이 학사학생이면 독서도 지시함
    cout << "자습" << endl;
    for (int i = 0; i< 3; i++)
    {
        stues[i]->ListenLecture();
        SStudent* sstu = dynamic_cast<SStudent*>(stues[i]);
        if (sstu)
        {
            sstu->Reading();
        }
        stues[i]->View();
    }
  
    cout << "잠자기" << endl;
    for (int i = 0; i< 3; i++)
    {
        stues[i]->Sleep();
        stues[i]->View();
    }
    //휴식하기에서는 해당 학생이 마법 학생이면 여행             도 지시함
   cout << "휴식" << endl;
    for (int i = 0; i< 3; i++)
    {
        stues[i]->Relax();
        MStudent* mstu = dynamic_cast<MStudent*>(stues[i]);
        if (mstu)
        {
            mstu->Travel();
        }
        stues[i]->View();
    }
    cout << "음료 마시기" << endl;
    for (int i = 0;i< 3; i++)
    {
        stues[i]->Drink();
        stues[i]->View();
    }
    
    //노래하기에서는 해당 학생이 운동 학생이면 춤도 지시 함
    cout << "노래" << endl;
    for (int i = 0; i< 3; i++)
    {
        stues[i]->Sing();
        PStudent* pstu = dynamic_cast<PStudent*>(stues[i]);
        if (pstu)
        {
            pstu->Dance();
        }
        stues[i]->View();
    }


    for (int i = 0; i < 3; i++)
    {
        delete stues[i];
    }

    return 0;
}