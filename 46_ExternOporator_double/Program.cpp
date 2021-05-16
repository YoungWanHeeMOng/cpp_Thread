
#include "Student.h"





int main()
{
    Student stu(3, "홍길동");
    int num;
    cout << "번호 : ";
    cin >> num;
    if (stu == num)// if (stu.IsEmpty(num))
    {
        cout << "학생 번호는 " << num << "입니다." << endl;
    }
    else
    {
        cout << "학생 번호는 " << num << "이 아닙니다." << endl;
    }
    stu.View();
    if ( num == stu)// if (stu.IsEmpty(num))
    {
        cout << "학생 번호는 " << num << "입니다." << endl;
    }
    else
    {
        cout << "학생 번호는 " << num << "이 아닙니다." << endl;
    }
    stu.View();

    Student *stu2=new Student(4, "강감찬");

    if ((*stu2) == num)// if (stu2->IsEmpty(num))
    {
        cout << "학생 번호는 " << num << "입니다." << endl;
    }
    else
    {
        cout << "학생 번호는 " << num << "이 아닙니다." << endl;
    }
    stu2->View();


    return 0;
}