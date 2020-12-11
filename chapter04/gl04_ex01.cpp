#include<iostream>
using namespace std;

class summation
{
    int num;
    long sum;
public:
    void set_sum(int n);
    void show_sum(){ cout << num << " сумма равна " << sum << endl; }
};

void summation::set_sum(int n)
{
    num = n;
    sum = 0;
    for(int i=0; i<=n; i++)
        sum += i;
}

summation make_sum()
{
    summation s;
    int i;
    cout << "Введите число \n";
    cin >> i;
    s.set_sum(i);
    return s;
}

int main()
{
    summation s;
    // s.set_sum(5);
    s = make_sum();
    s.show_sum();

    return 0;
}
