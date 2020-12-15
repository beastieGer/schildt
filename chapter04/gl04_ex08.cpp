#include<iostream>
using namespace std;

int main()
{
    int *p;
    p = new int[5];
    if(!p){
        cout << "Ошибка выделения памяти" << endl;
        return 1;
    }

    for(int i=0; i<5; i++) { p[i] = i; }
    for(int i=0; i<5; i++) { cout << p[i] << endl; }

    delete [] p;

    return 0;
}
