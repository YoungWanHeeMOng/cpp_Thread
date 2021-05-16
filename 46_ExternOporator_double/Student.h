#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
    string name;
    const int num;
public:
    Student(int num, string name);
    bool IsEmpty(int num)const;
    void View()const;
};

bool operator == (const Student& stu, int num);
bool operator == ( int num,const Student& stu);