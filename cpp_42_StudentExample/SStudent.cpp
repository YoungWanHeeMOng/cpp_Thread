#include "SStudent.h"

SStudent::SStudent(string name) :Student  (name)
{
    dummy = 0;
    total_scnt = 0;
}

void SStudent::Study()
{
    // �����ϴ�.
    SetHP(GetHP() - 5); // ü�� 5�Ҹ�
    SetIQ(GetIQ() + GetSCnt() + dummy);     // ����: scnt + ���� �� ����
    SetStress(GetStress() - 2); // ��Ʈ���� 2 ����
    SetSCnt(GetSCnt() + 1);
    total_scnt++;
    if (total_scnt % 5 == 0)
    {
        dummy++;
    }
}
 void SStudent::ListenLecture()
{
     // ���Ǹ� �޴�.
     SetHP(GetHP() -3); // ü�� 3�Ҹ�
     SetIQ(GetIQ() + GetSCnt() );     // ����: scnt ����
     SetStress(GetStress() - GetSCnt()); // ��Ʈ���� ����
     SetSCnt(0);
}
 void SStudent::Sleep()
{
     // ���ڴ�  ü�� 10 ȸ��. ��Ʈ����: 5����
     SetHP(GetHP()+10); // ü�� 5�Ҹ�
     //SetIQ(GetIQ() + GetSCnt());     // ����: scnt + ���� �� ����
     SetStress(GetStress() - 5); // ��Ʈ���� 5 ����
     SetSCnt(0);
}
 void SStudent::Relax()
{
     // �޽��ϴ� 
     //ü�� 3 ȸ��. ��Ʈ����: 25����
     SetHP(GetHP() + 3); // ü�� 3�Ҹ�
     //SetIQ(GetIQ() + GetSCnt());     // ����: scnt + ���� �� ����
     SetStress(GetStress() - 25); // ��Ʈ���� 25 ����
     SetSCnt(0);
}
 void SStudent::Drink()
{
     // ���� ����
//ü�� 5 ȸ��. ���� 10���� ��Ʈ����: 2����
     SetHP(GetHP() + 5); 
     SetIQ(GetIQ() -10);    
     SetStress(GetStress()+2); 
     SetSCnt(0);
}
void SStudent::Sing()
{
    // �뷡�ϴ�
    //ü�� 10�Ҹ�. ���� 5-scnt����  ��Ʈ����: 5-scnt����
    SetHP(GetHP() - 10);
    SetIQ(GetIQ() - (5-GetSCnt()));
    SetStress(GetStress() + (5 - GetSCnt()));
    SetSCnt(0);
}

void SStudent::View()const
{
    cout << "�л� �л�";
    Student::View();
    cout << " ���� ��: " << dummy << " ��ü ������ Ƚ��: " << total_scnt << endl;
}
void SStudent::Reading()
{
    // �����ϴ�
//���� �� 1 ����.   ��Ʈ����: 5����
    dummy++;
  /*  SetHP(GetHP() - 10);
    SetIQ(GetIQ() - (5 - GetSCnt()));*/
    SetStress(GetStress() -5);
    //SetSCnt(0);
}