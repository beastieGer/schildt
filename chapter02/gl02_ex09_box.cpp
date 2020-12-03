// обьем сторон параллелепипеда
//
#include<iostream>
using namespace std;

class Box
{
    // double a1, a2, a3;
    double result;
public:
    Box(double a, double b, double c);
    void vol();
};

Box::Box(double a, double b, double c)
{
    result = a * b * c;
}

void Box::vol()
{
    cout << "Объем параллелепипеда = " << result << endl;
}

int main()
{
    Box b(2, 3, 5);
    b.vol();

    return 0;
}
