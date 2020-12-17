#include<iostream>
using namespace std;

class a_type
{
    double a, b;
public:
    a_type(double x, double y){ a = x; b = y;}
    void show() { cout << a << ' ' << b << endl; }
};

int main()
{
    a_type at[2][5] = {
        a_type(1,1),a_type(1,1),
        a_type(2,2),a_type(1,1),
        a_type(4,4),a_type(1,1),
        a_type(5,5),a_type(1,1),
        a_type(6,6),a_type(1,1)
    };

    a_type *ar = at[0];
    for(int i=0; i<2; i++)
        for(int j=0; j<5; j++){
            ar->show();
            ar++;
        }

    return 0;
}
