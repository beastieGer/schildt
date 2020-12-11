#include<iostream>
using namespace std;

class pr2;

class pr1
{
    int printing;
public:
    pr1() { printing = 0; }
    void set_print(int status) { printing = status; }
    friend int inuse(pr1 p1, pr2 p2);
};

class pr2
{
    int printing;
public:
    pr2() { printing = 0; }
    void set_print(int status) { printing = status; }
    friend int inuse(pr1 p1, pr2 p2);
};

int inuse(pr1 p1, pr2 p2)
{
   if(p1.printing || p2.printing) 
       return 1;
   return 0;
}

int main()
{
    pr1 p1;
    pr2 p2;
    // p2.set_print(1);

    if(inuse(p1, p2))
        cout << "Принтер используется" << endl;
    else
        cout << "Принтер свободен" << endl;
    return 0;
}
