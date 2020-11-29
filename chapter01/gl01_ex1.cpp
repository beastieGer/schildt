#include<iostream>
using namespace std;

int main()
{
    int time_work;
    int payment;
    cout << "Введите кол-во отработанных персоналом часов: " << endl;
    cin >> time_work;
    cout << "Введите размер почасовой оплаты каждого: " << endl;
    cin >> payment;

    cout << "Выведите суммарную зарплату персонала: " << time_work * payment << endl;

    return 0;
}
