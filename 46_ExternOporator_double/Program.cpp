
#include "Student.h"





int main()
{
    Student stu(3, "ȫ�浿");
    int num;
    cout << "��ȣ : ";
    cin >> num;
    if (stu == num)// if (stu.IsEmpty(num))
    {
        cout << "�л� ��ȣ�� " << num << "�Դϴ�." << endl;
    }
    else
    {
        cout << "�л� ��ȣ�� " << num << "�� �ƴմϴ�." << endl;
    }
    stu.View();
    if ( num == stu)// if (stu.IsEmpty(num))
    {
        cout << "�л� ��ȣ�� " << num << "�Դϴ�." << endl;
    }
    else
    {
        cout << "�л� ��ȣ�� " << num << "�� �ƴմϴ�." << endl;
    }
    stu.View();

    Student *stu2=new Student(4, "������");

    if ((*stu2) == num)// if (stu2->IsEmpty(num))
    {
        cout << "�л� ��ȣ�� " << num << "�Դϴ�." << endl;
    }
    else
    {
        cout << "�л� ��ȣ�� " << num << "�� �ƴմϴ�." << endl;
    }
    stu2->View();


    return 0;
}