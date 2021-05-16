
#include <iostream>
#include <string>

using namespace std;

template <typename Iter>
int ComputeSum(Iter b, Iter e)
{
    int sum = 0;

     for (; b <= e; ++b)
    {
        sum += b;
    }
    return sum;
}

unsigned char GLOBAL_BUFFER[] = { 1,2,3,4,5 };
constexpr size_t BUF_SIZE = 6;

void CopyGlobalBuffer(unsigned char* dst)
{
    for (int i = 0; i < sizeof(dst); i++)
        cout << (int)dst[i] << "  ";
    cout << endl;
    // ERROR: AddressSanitizer: global-buffer-overflow
    std::memcpy(dst, GLOBAL_BUFFER, BUF_SIZE);
    cout << "dst : " << " " << sizeof(dst) << endl;

    for (int i = 0; i < sizeof(dst); i++)
        cout <<  (int)dst[i]<< "  ";
    cout << endl;
}


int main()
{
    cout << ComputeSum(1, 100) << "  ";

    unsigned char str[] = {'I','a','m',' ','Y','o','u','n','g',' ','W','a','n','  ', 'K','i','m'};
    for (int i = 0; i < sizeof(str); i++)
        cout <<(int)str[i] << "  ";
    cout << endl;
    for (int i = 0; i < sizeof(str); i++)
        cout << str[i] << "  ";
    cout << endl;
   CopyGlobalBuffer(str);
   for (int i = 0; i < sizeof(str); i++)
       cout << (int)str[i]  << "  ";
   cout << endl;
   for (int i = 0; i < sizeof(str); i++)
       cout << str[i]  <<"  ";
   cout << endl;
    return 0;
}