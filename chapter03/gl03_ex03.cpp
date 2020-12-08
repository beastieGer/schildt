// эта программа работать не будет, в ней ошибка
#include<iostream>
using namespace std;

class dyna
{
    int *p;
public:
    dyna(int i);
    ~dyna() { delete p; cout << "освобождение \n"; }
    int get() { return *p; }
};

dyna::dyna(int i)
{
    p = new int[sizeof(int)];
    if(!p){
        cout << "ошибка выделения памяти\n";
        exit(1);
    }
    *p = i;
}

int neg(dyna ob)
{
    return -ob.get();
}

int main()
{
    dyna o(-10);
    cout << o.get() << endl;
    cout << neg(o) << endl;

    // dyna o2(-107);
    // cout << o2.get() << endl;
    // cout << neg(o2) << endl;
    //
    cout << o.get() << endl;
    // cout << neg(o) << endl;
    return 0;
}
