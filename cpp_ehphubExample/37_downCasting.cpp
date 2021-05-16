
#include <iostream>
#include <string>

using namespace std;

class Musician
{
    string name;
public:
    Musician(string name)
    {
        this->name = name;
    }

    string GetName() const
    {
        return name;
    }
    virtual void Play() = 0;
};

class Pianist   : public Musician
{
public:
    Pianist(string name): Musician(name) { }
    virtual void Play()
    {
        cout << GetName() << " 딩동댕~~~" << endl;
    }
    void Tuning()
    {
        cout << GetName() << " 도돋 래래 미미 솔솔~~~" << endl;
    }
};

class Drummer : public Musician
{
public:
    Drummer(string name) : Musician(name) { }
    virtual void Play()
    {
        cout << GetName() << " 두두둥~~~" << endl;
    }
  /*  void Tuning()
    {
        cout << GetName() << " 도돋 래래 미미 솔솔~~~" << endl;
    }*/
};

int main()
{
    Musician* musician[2];

    musician[0] = new Pianist("피아니스트맨");
    musician[1] = new Drummer("드러머맨");

    Pianist* pianist = 0;
    for (int i = 0; i < 2; i++)
    {
        pianist =dynamic_cast< Pianist*>(musician[i]);
        if (pianist)
        {
            pianist->Tuning();
        }
        musician[i]->Play();
    }

    delete musician[0];
    delete musician[1];

    return 0;
}