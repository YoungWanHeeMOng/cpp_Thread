#include "MStudent.h"


MStudent::MStudent(string name) :Student(name)
{
    stick = 0;
}

void MStudent::Study()
{
    // �����ϴ�.
    // ü�� 3�Ҹ�, ����: scnt����, ��Ʈ����:3����
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
    // ���Ǹ� �޴�.
    SetHP(GetHP() -2); // ü�� 2�Ҹ�
    SetIQ(GetIQ() + GetSCnt());     // ����: scnt ����
    SetStress(GetStress() +5); // ��Ʈ���� 5����
    SetSCnt(0);
}
void MStudent::Sleep()
{
    // ���ڴ�  
    //ü�� 10 ȸ��. ��Ʈ����: 5����
    SetHP(GetHP() + 10); // ü�� 5�Ҹ�
    //SetIQ(GetIQ() + GetSCnt());     // ����: scnt + ���� �� ����
    SetStress(GetStress() - 5); // ��Ʈ���� 5 ����
    SetSCnt(0);
}
void MStudent::Relax()
{
    // �޽��ϴ� 
    //ü�� 3 ȸ��. ��Ʈ����: 25����
    SetHP(GetHP() + 3); // ü�� 3�Ҹ�
    //SetIQ(GetIQ() + GetSCnt());     // ����: scnt + ���� �� ����
    SetStress(GetStress() - 25); // ��Ʈ���� 25 ����
    SetSCnt(0);
}
void MStudent::Drink()
{
    // ���� ����
//ü�� 5 ȸ��+������ ȸ��. ���� 10����-������ ����, ��Ʈ����: 2����
    SetHP(GetHP() + 5+stick);
    SetIQ(GetIQ() - (10-stick));
    SetStress(GetStress() + 2);
    SetSCnt(0);
}
void MStudent::Sing()
{
    // �뷡�ϴ�
    //ü�� 10-������ �Ҹ�,. ���� 5����  ��Ʈ����: 5   ����
    SetHP(GetHP() -( 10-stick));
    SetIQ(GetIQ() - 5);
    SetStress(GetStress() -5);
    SetSCnt(0);
}

void MStudent::View()const
{
    cout << "���� �л�";
    Student::View();
    cout << " ������: " << stick  << endl;
}
void MStudent::Travel()
{
    // �������డ��

    stick++;
    /*  SetHP(GetHP() - 10);
      SetIQ(GetIQ() - (5 - GetSCnt()));*/
    //SetStress(GetStress() - 5);
    //SetSCnt(0);
}