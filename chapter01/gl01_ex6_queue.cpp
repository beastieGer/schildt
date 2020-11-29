/*
класс циклической очереди целых
*/
#include<iostream>
using namespace std;

#define SIZE 100

class Queue
{
    int head, tail; // индекс вершины и хвоста
    int queue[SIZE];
public:
    void init();
    void save(int n);
    int deq();
};

void Queue::init()
{
    head = tail = 0;
}

void Queue::save(int n)
{
    if(tail + 1 == head || (tail + 1 == SIZE && !head)){
        cout << "Очередь полна" << endl;
        return;
    }
    tail++;
    if(tail == SIZE)
        tail = 0;
    queue[tail] = n;
}

int Queue::deq()
{
    if(head == tail){
        cout << "Очередь пуста" << endl;
        return 0;
    }
    head++;
    if(head == SIZE)
        head = 0;
    return queue[head];
}

int main()
{
    Queue q1, q2;
    int i;

    q1.init();
    q2.init();

    for(i=0; i<=10; i++){
        q1.save(i);
        q2.save(i*i);
    }

    for(i=0; i<=10; i++){
        cout << "Элемент из очереди 1: " << q1.deq() << endl;
        cout << "Элемент из очереди 2: " << q2.deq() << endl;
    }


    return 0;
}
