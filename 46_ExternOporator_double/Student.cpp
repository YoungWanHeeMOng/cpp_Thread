

#include "Student.h"

Student::Student(int num, string name):num(num)
{
    this->name = name;
}
bool Student::IsEmpty(int num)const
{

    return this->num==num;
}
void Student::View()const
{
    cout << "�̸� : " << name << "   ��ȣ : " << num << endl;
}


bool operator == (const Student& stu, int num)
{
    return stu.IsEmpty(num);
}
bool operator == (int num, const Student& stu)
{
    return stu.IsEmpty(num);
}
