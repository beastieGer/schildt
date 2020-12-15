#include<iostream>
using namespace std;

void f(int &n)
{
    n++;
}

void Swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int i = 0;

    f(i);

    cout << i << endl;

    int a = 8, b = 40;
    cout << a << ' ' << b << endl;
    Swap(a, b);
    cout << a << ' ' << b << endl;

    return 0;
}
