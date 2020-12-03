// циклический сдвиг влево аргумента
//
#include<iostream>
using namespace std;

int rotate(int i)
{
    int x;
    if(i & 0x8000)
        x = 1;
    else
        x = 0;
    i = i << 1;
    i += x;

    return i;
}

long rotate(long i)
{
    int x;
    if(i & 0x80000000)
        x = 1;
    else
        x = 0;
    i = i << 1;
    i += x;

    return i;
}

int main()
{
    int a;
    long b;
    a = 0x8000;
    b = 8;

    cout << rotate(a) << endl;
    cout << rotate(b) << endl;

    return 0;
}
