#include "SStudent.h"

SStudent::SStudent(string name) :Student  (name)
{
    dummy = 0;
    total_scnt = 0;
}

void SStudent::Study()
{
    // 공부하다.
    SetHP(GetHP() - 5); // 체력 5소모
    SetIQ(GetIQ() + GetSCnt() + dummy);     // 지력: scnt + 더미 뇌 증가
    SetStress(GetStress() - 2); // 스트레스 2 감소
    SetSCnt(GetSCnt() + 1);
    total_scnt++;
    if (total_scnt % 5 == 0)
    {
        dummy++;
    }
}
 void SStudent::ListenLecture()
{
     // 강의를 받다.
     SetHP(GetHP() -3); // 체력 3소모
     SetIQ(GetIQ() + GetSCnt() );     // 지력: scnt 증가
     SetStress(GetStress() - GetSCnt()); // 스트레스 증가
     SetSCnt(0);
}
 void SStudent::Sleep()
{
     // 잠자다  체력 10 회복. 스트레스: 5감소
     SetHP(GetHP()+10); // 체력 5소모
     //SetIQ(GetIQ() + GetSCnt());     // 지력: scnt + 더미 뇌 증가
     SetStress(GetStress() - 5); // 스트레스 5 감소
     SetSCnt(0);
}
 void SStudent::Relax()
{
     // 휴식하다 
     //체력 3 회복. 스트레스: 25감소
     SetHP(GetHP() + 3); // 체력 3소모
     //SetIQ(GetIQ() + GetSCnt());     // 지력: scnt + 더미 뇌 증가
     SetStress(GetStress() - 25); // 스트레스 25 감소
     SetSCnt(0);
}
 void SStudent::Drink()
{
     // 음식 섭취
//체력 5 회복. 지력 10감소 스트레스: 2증가
     SetHP(GetHP() + 5); 
     SetIQ(GetIQ() -10);    
     SetStress(GetStress()+2); 
     SetSCnt(0);
}
void SStudent::Sing()
{
    // 노래하다
    //체력 10소모. 지력 5-scnt갑소  스트레스: 5-scnt증가
    SetHP(GetHP() - 10);
    SetIQ(GetIQ() - (5-GetSCnt()));
    SetStress(GetStress() + (5 - GetSCnt()));
    SetSCnt(0);
}

void SStudent::View()const
{
    cout << "학사 학생";
    Student::View();
    cout << " 더미 뇌: " << dummy << " 전체 공부한 횟수: " << total_scnt << endl;
}
void SStudent::Reading()
{
    // 독서하다
//더미 뇌 1 증가.   스트레스: 5감소
    dummy++;
  /*  SetHP(GetHP() - 10);
    SetIQ(GetIQ() - (5 - GetSCnt()));*/
    SetStress(GetStress() -5);
    //SetSCnt(0);
}