// генератор случайных чисел от 1 до 6
//
#include<iostream>
using namespace std;

class Dice
{
    int i;
public:
    void roll()
    {
        i = 1 + rand() % 6;
        cout << i << endl;
    }
};  

int main()
{
    Dice i;
    srand(time(0));
    i.roll();
    i.roll();
    i.roll();
    i.roll();
    i.roll();

    return 0;
}
