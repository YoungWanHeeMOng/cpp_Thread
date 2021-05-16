#include "PStudent.h"

PStudent::PStudent(string name) :Student(name)
{
    air = 0;
}


void PStudent::Study()
{
    // 공부하다.
    // 체력 2소모, 지력: scnt증가/2    , air3감소, air*3만큼 스트레스 감소
    SetHP(GetHP() - 2);
    SetIQ(GetIQ() + GetSCnt()/2 -(air-3));
    SetStress(GetStress() - (air*3));
    SetSCnt(GetSCnt() + 1);
    //total_scnt++;
   /* if (total_scnt % 5 == 0)
    {
        dummy++;
    }*/
}
void PStudent::ListenLecture()
{
    // 강의를 받다.
    SetHP(GetHP() - 1); // 체력 1소모
    SetIQ(GetIQ() + GetSCnt()/2 -(air-5));     // 지력: scnt 증가/2 , air 5감소
    SetStress(GetStress() - (air*3)); // 스트레스 air*3 만큼 감소
    SetSCnt(0);
}
void PStudent::Sleep()
{
    // 잠자다  
    //체력 10 회복. 스트레스: 5감소
    SetHP(GetHP() + 10); // 체력 5소모
    //SetIQ(GetIQ() + GetSCnt());     // 지력: scnt + 더미 뇌 증가
    SetStress(GetStress() - 5); // 스트레스 5 감소
    SetSCnt(0);
}
void PStudent::Relax()
{
    // 휴식하다 
    //체력 8 회복. 스트레스: 25감소
    SetHP(GetHP() + 8); // 체력 3소모
    //SetIQ(GetIQ() + GetSCnt());     // 지력: scnt + 더미 뇌 증가
    SetStress(GetStress() - 25); // 스트레스 25 감소
    SetSCnt(0);
}
void PStudent::Drink()
{
    // 음식 섭취
//체력 5 회복. 지력 3감소, 스트레스: 2감소
    SetHP(GetHP() + 5 );
    SetIQ(GetIQ() -3);
    SetStress(GetStress() - 2);
    SetSCnt(0);
}
void PStudent::Sing()
{
    // 노래하다
    //체력 5소모,. 지력 2증가  스트레스: 5   감소
    SetHP(GetHP() -5);
    SetIQ(GetIQ() + 2);
    SetStress(GetStress() - 5);
    SetSCnt(0);
}

void PStudent::View()const
{
    cout << "운동 학생";
    Student::View();
    cout << " 춤: " << air << endl;
}
void PStudent::Dance()
{
    // 춤을 추다
    // 체력 5소모, 지력: 3증가, air 1증가
    SetHP(GetHP() - 5);
    SetIQ(GetIQ() + 3);
    //SetStress(GetStress() - 5);
    //SetSCnt(0);
    air++;
    
}