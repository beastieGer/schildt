#include<iostream>
using namespace std;

class samp
{
    int i;
public:
    samp(int n) { cout << "Конструктор\n"; i = n; }
    ~samp() { cout << "Деструктор\n"; }
    void set_i(int n) { i = n; }
    int get_i() { return i; }
};

int sqr_it(samp *o)
{
    o->set_i(o->get_i() * o->get_i());
    return o->get_i();
}

int main()
{
    samp a(10);
    cout << a.get_i() << endl;
    cout << sqr_it(&a) << endl;
    cout << a.get_i() << endl;

    samp b(6);
    cout << b.get_i() << endl;
    cout << sqr_it(&b) << endl;
    cout << b.get_i() << endl;

    return 0;
}
