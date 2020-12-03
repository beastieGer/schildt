// timer
//
#include<iostream>
#include<time.h>
using namespace std;

class timer
{
    clock_t start;
public:
    timer();
    ~timer();
};

timer::timer()
{
    start = clock();
}

timer::~timer()
{
    clock_t end;
    end = clock();
    cout << "Затраченное время: " << difftime(end, start) << endl;
        //(end - start) / CLOCKS_PER_SEC << endl;
    // cout << CLOCKS_PER_SEC << endl;
}

int main()
{
    timer t;
    // int i;
    // cin >> i;

    return 0;
}
