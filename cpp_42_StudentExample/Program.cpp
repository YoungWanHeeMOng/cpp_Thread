
//#include"StuConst.h"
//#include "Student.h"
#include "MStudent.h"
#include "PStudent.h"
#include "SStudent.h"

int main()
{
    Student* stues[3];
    stues[0] = new SStudent("���� ����");
    stues[1] = new MStudent("�������");
    stues[2] = new PStudent("� ����");
    // �л����� ���� �� ��ü �л����� ����  -> �ڽ� -> ���ڱ� -> �޽��ϱ�
    // ->���Ḷ�ð� -> �뷡�ϱ� ������ ����

    //(�� �ܰ踶�� �л� ������ ���
    cout << "����" << endl;
    for (int i = 0; i< 3; i++)
    {
        stues[i]->ListenLecture();
        stues[i]->View();
    }
    //�ڽ��ϱ⿡���� �ش� �л��� �л��л��̸� ������ ������
    cout << "�ڽ�" << endl;
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
  
    cout << "���ڱ�" << endl;
    for (int i = 0; i< 3; i++)
    {
        stues[i]->Sleep();
        stues[i]->View();
    }
    //�޽��ϱ⿡���� �ش� �л��� ���� �л��̸� ����             �� ������
   cout << "�޽�" << endl;
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
    cout << "���� ���ñ�" << endl;
    for (int i = 0;i< 3; i++)
    {
        stues[i]->Drink();
        stues[i]->View();
    }
    
    //�뷡�ϱ⿡���� �ش� �л��� � �л��̸� �㵵 ���� ��
    cout << "�뷡" << endl;
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