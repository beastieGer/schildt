#include<iostream>
using namespace std;

class myclass
{
    int who;
public:
    myclass(int n){
        who = n;
        cout << "Работа конструктора " << who << endl;
    }
    ~myclass() { cout << "Работа деструктора " << who << endl; }
    int  id() { return who; }
};

void f(myclass &o)
{
    cout << "Получено " << o.id() << endl;
}

int main()
{
    myclass x(1), y(2);
    f(x);
    f(y);

    return 0;
}
