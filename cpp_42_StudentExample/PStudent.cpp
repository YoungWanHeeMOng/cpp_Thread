#include "PStudent.h"

PStudent::PStudent(string name) :Student(name)
{
    air = 0;
}


void PStudent::Study()
{
    // �����ϴ�.
    // ü�� 2�Ҹ�, ����: scnt����/2    , air3����, air*3��ŭ ��Ʈ���� ����
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
    // ���Ǹ� �޴�.
    SetHP(GetHP() - 1); // ü�� 1�Ҹ�
    SetIQ(GetIQ() + GetSCnt()/2 -(air-5));     // ����: scnt ����/2 , air 5����
    SetStress(GetStress() - (air*3)); // ��Ʈ���� air*3 ��ŭ ����
    SetSCnt(0);
}
void PStudent::Sleep()
{
    // ���ڴ�  
    //ü�� 10 ȸ��. ��Ʈ����: 5����
    SetHP(GetHP() + 10); // ü�� 5�Ҹ�
    //SetIQ(GetIQ() + GetSCnt());     // ����: scnt + ���� �� ����
    SetStress(GetStress() - 5); // ��Ʈ���� 5 ����
    SetSCnt(0);
}
void PStudent::Relax()
{
    // �޽��ϴ� 
    //ü�� 8 ȸ��. ��Ʈ����: 25����
    SetHP(GetHP() + 8); // ü�� 3�Ҹ�
    //SetIQ(GetIQ() + GetSCnt());     // ����: scnt + ���� �� ����
    SetStress(GetStress() - 25); // ��Ʈ���� 25 ����
    SetSCnt(0);
}
void PStudent::Drink()
{
    // ���� ����
//ü�� 5 ȸ��. ���� 3����, ��Ʈ����: 2����
    SetHP(GetHP() + 5 );
    SetIQ(GetIQ() -3);
    SetStress(GetStress() - 2);
    SetSCnt(0);
}
void PStudent::Sing()
{
    // �뷡�ϴ�
    //ü�� 5�Ҹ�,. ���� 2����  ��Ʈ����: 5   ����
    SetHP(GetHP() -5);
    SetIQ(GetIQ() + 2);
    SetStress(GetStress() - 5);
    SetSCnt(0);
}

void PStudent::View()const
{
    cout << "� �л�";
    Student::View();
    cout << " ��: " << air << endl;
}
void PStudent::Dance()
{
    // ���� �ߴ�
    // ü�� 5�Ҹ�, ����: 3����, air 1����
    SetHP(GetHP() - 5);
    SetIQ(GetIQ() + 3);
    //SetStress(GetStress() - 5);
    //SetSCnt(0);
    air++;
    
}