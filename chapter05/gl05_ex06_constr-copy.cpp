#include<iostream>
using namespace std;

class array{
    int *p;
    int size;
public:
    array(int sz){
        p = new int[sz];
        if(!p) exit(1);
        size = sz;
        cout << "Использование обычного конструктора" << endl;
        cout << "Указатель p = " << p << endl;
    }

    ~array() { delete[] p; cout << "DESTRUCTOR" << endl; 
        cout << "Указатель p = " << p << endl;
}
    array(const array &a){
        p = new int[a.size];
        if(!p) exit(1);
        for(int i=0; i<a.size; i++) p[i] = a.p[i];
        cout << "Использование конструктора копирования" << endl;
        cout << "Указатель p = " << p << endl;
    }
    void put(int i, int j){ if(i>0 && i<size) p[i] = j; }
    int get(int i) { return p[i]; }
};

int main()
{   
    array num(10);
    for(int i=0; i<10; i++) num.put(i,i);
    for(int i=9; i>=0; i--) cout << num.get(i) << endl;

    array x = num;
    for(int i=9; i>=0; i--) cout << x.get(i) << endl;

    return 0;
}
