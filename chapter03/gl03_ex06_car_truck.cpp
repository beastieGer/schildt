// friend функция

#include<iostream>
using namespace std;

class truck;

class car
{
    int passengers;
    int speed;
public:
    car(int p, int s) { passengers = p; speed = s; }
    int sp_greater(truck t);
};

class truck
{
    int weight;
    int speed;
public:
    truck(int w, int s) { weight = w; speed = s; }
    friend int car::sp_greater(truck t);
};

int car::sp_greater(truck t)
{
    return speed - t.speed;
}

int main()
{
    int t;
    car c1(6, 55), c2(2, 120);
    truck t1(10000, 55), t2(20000, 72);

    cout << "Сравнение c1 и t1:" << endl;
    t = c1.sp_greater(t1);
    if(t<0) cout << "Грузовик быстрее." << endl;
    else if(t==0) cout << "Скорости машин одинаковы." << endl;
    else cout << "Легковая машина быстрее." << endl;

    cout << "Сравнение c1 и t1:" << endl;
    t = c2.sp_greater(t2);
    if(t<0) cout << "Грузовик быстрее." << endl;
    else if(t==0) cout << "Скорости машин одинаковы." << endl;
    else cout << "Легковая машина быстрее." << endl;

    return 0;
}
