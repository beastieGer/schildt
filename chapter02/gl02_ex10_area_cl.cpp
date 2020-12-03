// площадь прямоугольника и равнобедренного треугольника
//
#include<iostream>
using namespace std;

class area_cl
{
public:
    double height;
    double width;
};

class box : public area_cl
{
public:
    box(double h, double w);
    double area();    
};

class isosceles : public area_cl
{
public:
    isosceles(double h, double w);
    double area();    
};

box::box(double h, double w)
{
    height = h;
    width = w;
}

double box::area()
{
    return height * width;
}

isosceles::isosceles(double h, double w)
{
    height = h;
    width = w;
}

double isosceles::area()
{
    return (height * width) / 2;
}

 
int main()
{
    box b(2,3);
    isosceles i(10, 12);
    cout << b.area() << endl;
    cout << i.area() << endl;

    return 0;
}
