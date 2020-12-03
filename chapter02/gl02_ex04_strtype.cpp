// класс для строк
//
#include<iostream>
using namespace std;


class strtype
{
    string p;
public:
    strtype(string p);
    ~strtype();
    void show();
};

strtype::strtype(string p)
{
    this->p = p;
}

strtype::~strtype()
{
    cout << "Освобождение памяти" << endl;
}

void strtype::show()
{
    cout << p << " - длина " << p.size() << endl;
}

int main()
{
    strtype s1("Это проверка"), s2("Я люблю С++");
    s1.show();
    s2.show();

    return 0;
}
