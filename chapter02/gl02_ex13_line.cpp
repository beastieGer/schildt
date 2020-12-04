// line
//
#include<iostream>
using namespace std;

class Line
{
    int len;
public:
    Line(int l)
    { 
        len = l;
        for(int i=0; i<len; i++) cout << "*" ;
        cout << endl;
    }

};

int main()
{
    Line l(10);
    return 0;
}
