#include<iostream>
using namespace std;

class myclass
{
    int x;
public:
    myclass(int n=0) { x = n; }
    int getx() { return x; }
};

int main()
{
    myclass o1(10);
    myclass o2;
    cout << o1.getx() << endl;
    cout << o2.getx() << endl;

}
