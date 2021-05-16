#pragma once
#include "Student.h"
class PStudent :
    public Student
{
    int air;
public:
    PStudent(string name);

    virtual void Study();
    virtual void ListenLecture();
    virtual void Sleep();
    virtual void Relax();
    virtual void Drink();
    virtual void Sing();

    virtual void View()const;
    void Dance();
};

