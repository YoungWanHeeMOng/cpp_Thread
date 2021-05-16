#include "MStudent.h"


MStudent::MStudent(string name) :Student(name)
{
    stick = 0;
}

void MStudent::Study()
{
    // 공부하다.
    // 체력 3소모, 지력: scnt증가, 스트레스:3증가
    SetHP(GetHP() - 3);
    SetIQ(GetIQ() + GetSCnt() );  
    SetStress(GetStress() +3);
    SetSCnt(GetSCnt() + 1);
    //total_scnt++;
   /* if (total_scnt % 5 == 0)
    {
        dummy++;
    }*/
}
void MStudent::ListenLecture()
{
    // 강의를 받다.
    SetHP(GetHP() -2); // 체력 2소모
    SetIQ(GetIQ() + GetSCnt());     // 지력: scnt 증가
    SetStress(GetStress() +5); // 스트레스 5증가
    SetSCnt(0);
}
void MStudent::Sleep()
{
    // 잠자다  
    //체력 10 회복. 스트레스: 5감소
    SetHP(GetHP() + 10); // 체력 5소모
    //SetIQ(GetIQ() + GetSCnt());     // 지력: scnt + 더미 뇌 증가
    SetStress(GetStress() - 5); // 스트레스 5 감소
    SetSCnt(0);
}
void MStudent::Relax()
{
    // 휴식하다 
    //체력 3 회복. 스트레스: 25감소
    SetHP(GetHP() + 3); // 체력 3소모
    //SetIQ(GetIQ() + GetSCnt());     // 지력: scnt + 더미 뇌 증가
    SetStress(GetStress() - 25); // 스트레스 25 감소
    SetSCnt(0);
}
void MStudent::Drink()
{
    // 음식 섭취
//체력 5 회복+지팡이 회복. 지력 10감소-지팡이 감소, 스트레스: 2증가
    SetHP(GetHP() + 5+stick);
    SetIQ(GetIQ() - (10-stick));
    SetStress(GetStress() + 2);
    SetSCnt(0);
}
void MStudent::Sing()
{
    // 노래하다
    //체력 10-지팡이 소모,. 지력 5갑소  스트레스: 5   감소
    SetHP(GetHP() -( 10-stick));
    SetIQ(GetIQ() - 5);
    SetStress(GetStress() -5);
    SetSCnt(0);
}

void MStudent::View()const
{
    cout << "마법 학생";
    Student::View();
    cout << " 지팡이: " << stick  << endl;
}
void MStudent::Travel()
{
    // 마법여행가다

    stick++;
    /*  SetHP(GetHP() - 10);
      SetIQ(GetIQ() - (5 - GetSCnt()));*/
    //SetStress(GetStress() - 5);
    //SetSCnt(0);
}