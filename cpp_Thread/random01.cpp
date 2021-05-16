

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    long next_value=0;
    srand(time(NULL));                  // seed random 

    for (int i = 0; i < 10; i++)
    {
        cout << rand() << endl;
    }

    for (int i = 0; i < 10000; i++)
    {
        if (rand() % 10000 <= 340)
          cout <<next_value++ <<  " Hello"  << endl;
        else
            cout << "Goodbye" << endl;
    }

    return 0;
}