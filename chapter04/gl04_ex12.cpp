#include<iostream>
#include<string.h>
using namespace std;

class strtype
{
    char *p;
public:
    strtype(const char *s);
    ~strtype() { delete p; }
    char *get() { return p; }
};

strtype::strtype(const char *s)
{
    int i = strlen(s);
    p = new char[i+1];
    if(!p){
        cout << "Ошибка выделения памяти" << endl;
        exit(1);
    }
    strcpy(p, s);
}

void show(strtype &x)
{
    char *s;
    s = x.get();
    cout << s << endl;
}

int main()
{
    strtype a("Привет"), b("Здесь");
    show(a);
    show(b);

    return 0;
}
