#include<iostream>
using namespace std;

class who
{
    char c;
public:
    // who() { cout << "Пустой конструктор"; }
    who(char c1) { c = c1; cout << "Создание who #" << c << endl; }
    ~who() { cout << "Деструктор who #" << c << endl; }
};

who make_who()
{
    who w('3');
    return w;
}

int main()
{   
    who ob1('1'), ob2('2');
    make_who();

    return 0;
}
