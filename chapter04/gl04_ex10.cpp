#include<iostream>
using namespace std;

void neg(int &x)
{
    x = -x;
}

void negp(int *p)
{
   *p = -*p;
}

int main()
{
    int a = 10;
    cout << a << endl;
    neg(a);
    cout << a << endl;
    cout << "=====================" << endl;
    a = 10;
    cout << a << endl;
    negp(&a);
    cout << a << endl;

    return 0;
}
