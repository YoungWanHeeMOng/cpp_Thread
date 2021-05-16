#include "Student.h"

Student::Student(int num, string name)  : num(num)
{
    this->name = name;
}
bool Student::IsEqual(int num)const
{
    return this->num == num;
}
void Student::View()const
{
    cout << "�л� �̸�: " << name << "  �л� ��ȣ: " << num << endl;
}
bool Student::operator == (int num)const
{
    return this->num == num;
}

// bool operator == (const Student &stu, int num)
bool operator == (int num, const Student& stu)
{
    return stu == num;
}
