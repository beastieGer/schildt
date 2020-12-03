// имитация секундомера
//
#include<iostream>
#include<time.h>
using namespace std;

class stopwatch
{
    time_t on;
    time_t st;
    time_t sto;
public:
    stopwatch();
    ~stopwatch();
    void start();
    void stop();
    void show();
};

stopwatch::stopwatch()
{
    on = time(0);
}

stopwatch::~stopwatch()
{
    time_t off;
    off = time(0);
    cout << "Время от создания обьекта: " << difftime(off, on) << endl;
}

void stopwatch::start()
{
    st = time(0);
}

void stopwatch::stop()
{
    sto = time(0);
}

void stopwatch::show()
{
    cout << "Время от создания обьекта: " << difftime(sto, st) << endl;
}



int main()
{
    stopwatch s;
    s.start();
    int i;
    cin >> i;
    s.stop();
    s.show();

    return 0;
}
