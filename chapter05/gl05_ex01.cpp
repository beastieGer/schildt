#include<iostream>
using namespace std;

void mag(long &num, long order)
{
    for(;order;order--) num *= 10;
}

int main()
{
    long n = 4;
    cout << n << endl;
    mag(n,2);
    cout << n << endl;


    return 0;
}
