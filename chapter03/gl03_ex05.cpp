// эта программа с ошибкой
#include<iostream>
#include<string.h>
using namespace std;

class samp
{
    char *s;
public:
    samp() { s = 0; }
    ~samp() { if(s) delete s; cout << "Освобождение s" << endl; }
    void show() { cout << s << endl; }
    void set(char *str);
};

void samp::set(char *str)
{
    s = new char[strlen(str)];
    if(!s){
        cout << "Ошибка выделения памяти" << endl;
        exit(1);
    }
    strcpy(s, str);
}

samp input()
{
    char s[80];
    samp str;
    cout << "Введите строку: " << endl;
    cin >> s;
    str.set(s);

    return str;
}

int main()
{
    samp ob;
    ob=input();
    ob.show();

    return 0;
}
