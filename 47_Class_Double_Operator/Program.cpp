

#include "Student.h"

int main()
{
    Student stu(3, "ȫ�浿");
    int num;
    cout << "��ȣ: ";
    cin >> num;
    if (stu == num)
    {
        cout << "�����ϴ�." << endl;
    }
    else
    {
        cout << "�ٸ��ϴ�." << endl;
    }
    if  (num == stu)
    {
        cout << "�����ϴ�." << endl;
    }
    else
    {
        cout << "�ٸ��ϴ�." << endl;
    }
}