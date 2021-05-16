//
// 40. 상속 과 다형성 실습2 (도형)
//
//

#include <iostream>
#include <string>

using namespace std;


//interface IGetArea
//{
//    int IGetArea()
//    {
//
//       }
//};



class Diagram
{
    const int id;
    static int last_id;

public:
    Diagram():id(++last_id)
    {

    }
    virtual void Draw() = 0;
protected: 
    virtual int GetID()const
    {
        return id;
    }
};

int Diagram::last_id;


class Point : public Diagram
{
    int x;
    int y;
public:
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
   virtual void Draw()
    {
       cout << GetID() << " 점(" << x << "," << y << ")" << endl;
    }
};

class Line : public Diagram
{
    Point* p1;
    Point* p2;
public:
    Line(int x1, int y1, int x2, int y2)
    {
        p1 = new Point(x1, y1);
        p2 = new Point(x2, y2);
    }
    ~Line()
    {
        delete p1;
        delete p2;
    }
  virtual  void Draw()
    {
      cout << GetID() << " 선" << endl;
      cout << "   ";
      p1->Draw();
      cout << "   ";
      p2->Draw();
    }
};

#define  interface        struct
interface IGetArea
{
    virtual int GetArea() const = 0;
};

class Rectangle :public Diagram  , public IGetArea
{
    int bottom;
    int left;
    int right;
    int top;
public:
    Rectangle(int left, int top, int right, int bottom)
    {
        this->left = left;
        this->top = top;
        this->right = right;
        this->bottom = bottom;
    }

 virtual   void Draw()
    {
     cout << GetID() << " 사각형";
     cout << "(" << left << "," << top << "," << right << "," << bottom << endl;
    }
   virtual  int GetArea() const
    {
       int width = right - left;
       if (width)
       {
           width = -width;
       }
       int height = bottom - top;
       if (height)
       {
           height = -height;
       }
       return width * height;
    }
};

void testGetArea(IGetArea* iga)
{
    cout << "면적: " << iga->GetArea() << endl;
}
int main()
{
    Diagram* diagram[3];
    diagram[0] = new Point(3, 4);
    diagram[1] = new Line(0, 0, 5, 5);
    diagram[2] = new Rectangle(0, 0, 10, 10);

    for (int i = 0; i < 3; i++)
    {
        diagram[i]->Draw();
        IGetArea* iga = dynamic_cast<IGetArea*> (diagram[i]);
        if (iga)
        {
            testGetArea(iga);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        delete diagram[i];
    }

    return 0;
}