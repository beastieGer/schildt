// имитация секундомера
//
#include<iostream>
#include<time.h>
using namespace std;

class stopwatch
{
    double begin, end;
public:
    stopwatch();
    stopwatch(clock_t t);
    ~stopwatch();
    void start();
    void stop();
    void show();
};

stopwatch::stopwatch()
{
    begin = end = 0.0;
}

stopwatch::stopwatch(clock_t t)
{
    begin = (double) t / CLOCKS_PER_SEC;
    end = 0.0;
}

stopwatch::~stopwatch()
{
    cout << "Удаление объекта stopwatch ...";
    show();
}

void stopwatch::start()
{
    begin = (double) clock() / CLOCKS_PER_SEC;
}

void stopwatch::stop()
{
   end = (double) clock() / CLOCKS_PER_SEC;
}

void stopwatch::show()
{
    cout << "Измеренное время: " << end - begin << endl;
    // cout << "Измеренное время: " << difftime(end, begin) << endl;
}



int main()
{
    stopwatch s;
    s.start();
    int i;
    for(i=0; i<320000; i++);
    s.stop();
    s.show();

    stopwatch s2(clock());
    s2.start();
    for(i=0; i<320000; i++);
    s2.stop();
    s2.show();

    return 0;
}
