// вывод времени и даты на экран
//
#include<iostream>
#include<time.h>
using namespace std;

class t_and_d
{
    time_t tp;
public:
    t_and_d(time_t tp);
    void show();
};

t_and_d::t_and_d(time_t tp)
{
    this->tp = tp;
}

void t_and_d::show()
{
    cout << ctime(&tp) << endl;
}

int main()
{
    time_t t;
    t = time(0);

    t_and_d td(t);
    td.show();

    return 0;
}
