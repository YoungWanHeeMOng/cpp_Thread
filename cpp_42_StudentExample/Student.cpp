#include "Student.h"

#define SC StuConst

 int Student::last_pn;


 Student::Student(string name):pn(++last_pn)
 {
     this->name = name;
     SetIQ(SC::def_iq);
     SetHP(SC::def_hp);
     SetStress(SC::def_stress);
     SetSCnt(SC::def_scnt);

 }


void Student::View()const
{
    cout << "주민번호: " << pn << " 이름: " << name << endl;
    cout << "  IQ: " << iq << " HP: " << hp << " Stress: " << stress << endl;
    cout << "  연속으로 공부한 횟수: " << scnt << endl;
}
int Student::GetPN()const
{

    return pn;
}
string Student::GetName()const
{

    return name;
}
int Student::GetIQ()const
{

    return iq;
}
int Student::GetHP()const
{
    return hp;
}
int Student::GetStress()const
{

    return stress;
}
int Student::GetSCnt()const
{

    return scnt;
}


void Student::SetIQ(int iq)
{
    if (iq > SC::max_iq)
    {
        iq = SC::max_iq;
    }
    if (iq < SC::min_iq)
    {
        iq = SC::min_iq;
    }
    this->iq = iq;
}
void Student::SetHP(int hp)
{
    if (hp > SC::max_hp)
    {
        hp = SC::max_hp;
    }
    if (hp < SC::min_hp)
    {
        hp = SC::min_hp;
    }
    this->hp = hp;

}
void Student::SetStress(int stress)
{
    if (stress > SC::max_stress)
    {
        stress = SC::max_stress;
    }
    if (stress < SC::min_stress)
    {
        stress = SC::min_stress;
    }
    this->stress = stress;

}
void Student::SetSCnt(int scnt)
{
    if (scnt > SC::max_scnt)
    {
        scnt = SC::max_scnt;
    }
    if (scnt < SC::min_scnt)
    {
        scnt = SC::min_scnt;
    }
    this->scnt = scnt;

}