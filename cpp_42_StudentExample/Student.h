#pragma once
#include "StuConst.h"
#include <iostream>
#include <string>

using namespace std;

class Student
{
    static int last_pn;
    const int pn;
    string name;
    int iq;
    int hp;
    int stress;
    int scnt;

public:
    Student(string name);
    virtual void Study() = 0;
    virtual void ListenLecture() = 0;
    virtual void Sleep() = 0;
    virtual void Relax() = 0;
    virtual void Drink() = 0;
    virtual void Sing() = 0;

    virtual void View()const;
    int GetPN()const;
    string GetName()const;
    int GetIQ()const;
    int GetHP()const;
    int GetStress()const;
    int GetSCnt()const;

protected:
    void SetIQ(int iq);
    void SetHP(int hp);
    void SetStress(int stress);
    void SetSCnt(int scnt);
};

