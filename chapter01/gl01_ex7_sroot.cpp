// Перегрузка 3 функция, возвращающих квадратный корень числа
//
//
#include<iostream>
#include<math.h>
using namespace std;

int sroot(int num)
{
    return (int)sqrt((double)num);
}

long sroot(long num)
{
    return (long)sqrt((double)num);
}

double sroot(double num)
{
    return sqrt(num);
}

int main()
{
    cout << sroot(10) << endl;
    cout << sroot(10L) << endl;
    cout << sroot(10.) << endl;

    return 0;
}
