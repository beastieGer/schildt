#include<iostream>
#include<string.h>
using namespace std;

class strtype
{
    char *p;
    int len;
public:
    strtype();
    strtype(const char* str, int num);
    char *getstring() { return p; }
    int getlength() { return len; }
};

strtype::strtype()
{
    len = 255;
    p = new char[len];
    if(!p){
        cout << "ERROR" << endl;
        exit(1);
    }
    *p = '\0';
}

strtype::strtype(const char* str, int num)
{
    p = new char[num];
    if(!p){
        cout << "ERROR" << endl;
        exit(1);
    }
    strcpy(p, str);
    len = num;
}

int main()
{
    strtype ob1("oleg", 4);

    cout <<  ob1.getstring() << endl;

    strtype ob2;
    cout <<  ob2.getstring() << endl;

    return 0;
}
