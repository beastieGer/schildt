/*
 Переобразование футов в дюймы
  */

#include<iostream>
using namespace std;

class Foot_inch
{
    int foot;
    int inch;
public:
    Foot_inch(int f)
    {
        foot = f;
        inch = foot * 12;
        cout << "В " << foot <<" футах - " << inch << " дюймов." << endl;
    }
};

int main()
{
    int fut;
    cout << "Введите футы: " << endl;
    cin >> fut;
    Foot_inch fi(fut);

    return 0;
}
