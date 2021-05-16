#pragma once
#include "Student.h"

class MStudent:public Student
{
    int stick;
    int total_scnt;
public:
    MStudent(string name);

    virtual void Study();
    virtual void ListenLecture();
    virtual void Sleep();
    virtual void Relax();
    virtual void Drink();
    virtual void Sing();

    virtual void View()const;
    void Travel();

};

