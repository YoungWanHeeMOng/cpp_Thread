

#include "Student.h"

int main()
{
    Student stu(3, "홍길동");
    int num;
    cout << "번호: ";
    cin >> num;
    if (stu == num)
    {
        cout << "같습니다." << endl;
    }
    else
    {
        cout << "다릅니다." << endl;
    }
    if  (num == stu)
    {
        cout << "같습니다." << endl;
    }
    else
    {
        cout << "다릅니다." << endl;
    }
}