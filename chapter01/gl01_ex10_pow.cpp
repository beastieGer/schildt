// Возводит x в степень y
//
#include<iostream>
using namespace std;

int main()
{
    int x, y, result=1;
    cout << "Введите 2 числа через пробел" << endl;
    cin >> x >> y;
    for(; y; y--)
        result *= x;
    cout << result;
    return 0;
}
