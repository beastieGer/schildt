// программа делает задержку в секундах
#include<iostream>
#include<ostream>
#include<unistd.h>
using namespace std;

void Sleep(int sec)
{
    while(sec){
        sleep(1);
        cout << ".";
        flush(cout);
        sec--;
    }
    cout << endl;
}

void Sleep(string sec)
{
    int s = stoi(sec);
    while(s){
        sleep(1);
        cout << ".";
        flush(cout);
        s--;
    }
    cout << endl;
}

int main()
{
    Sleep(10);
    Sleep("10");
    return 0;
}
