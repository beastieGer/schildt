/*
 Переобразование футов в дюймы
  */

#include<iostream>
using namespace std;

int main()
{
    int fut;
    cout << "Введите футы: " << endl;
    cout << "Для окончания введите 0(ноль)" << endl;
    cin >> fut;
    while(0 != fut){
        cout << "В " << fut <<" футах - " << fut * 12 << "дюймов." << endl;
        cout << "Введите футы: " << endl;
        cin >> fut;
    }

    return 0;
}
