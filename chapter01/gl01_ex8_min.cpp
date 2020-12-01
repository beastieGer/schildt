#include<iostream>
using namespace std;

int min(int a, int b)
{
    return a > b ? b : a;
}

char min(char a, char b)
{
    return a > b ? b : a;
}

double min(double a, double b)
{
    return a > b ? b : a;
}

int main()
{
    cout << min(5, 6) << endl;
    cout << min('y', 'b') << endl;
    cout << min(5.7, 5.6) << endl;
    return 0;
}
