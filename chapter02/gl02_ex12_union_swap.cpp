// меняем местами старший и младший байты целого
//!!!!!!! не понятно как работает
#include<iostream>
// using namespace std;

union swap
{
    unsigned char c[2];
    short int i;
    swap(short int x);
    void swp();
};

swap::swap(short int x)
{
    i = x;
}

void swap::swp()
{
    unsigned char temp;
    temp = c[0];
    c[0] = c[1];
    c[1] = temp;
}

int main()
{
    swap ob(5);
    ob.swp();
    std::cout << ob.i;

    return 0;
}
