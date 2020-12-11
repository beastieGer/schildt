#include<iostream>
using namespace std;

class myclass
{
    int num;
public:
    myclass(int x) { num = x; }
    friend int isneg(myclass m);
};

int isneg(myclass m)
{
    if(m.num<0) return 1;
    return 0;
}

int main()
{
    myclass m(-4);
    if(isneg(m))
        cout << "Число отрицательное" << endl;
    else
        cout << "Число положительное" << endl;
    return 0;
}
