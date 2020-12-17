#include<iostream>
using namespace std;

class myclass
{
    int x;
public:
    myclass() { x = 0; }
    myclass(int n) { x = n; }
    int getx() { return x; }
    void setx(int n) { x = n; }
};

int main()
{
    myclass *p;
    myclass ob(10);

    cout << ob.getx() << endl;
    
    p = new myclass[10];
    if(!p){
        cout << "Ошибка выделения памяти" << endl;
        exit(1);
    }

    for(int i=0; i<10; i++) p[i].setx(i*i);
    for(int i=0; i<10; i++) cout << p[i].getx() << ' ';
    cout << endl;

    return 0;
}
