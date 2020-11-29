/*
 Класс стек для хранения символов
 */
#include<iostream>
using namespace std;

#define SIZE 10

class stack
{
    char stck[SIZE];
    int tos;
public:
    void init();
    void push(char ch);
    char pop();
};

void stack::init()
{
    tos = 0;
}

void stack::push(char ch)
{
    if(tos == SIZE){
        cout << "Стек полон" << endl;
        return;
    }

    stck[tos] = ch;
    tos++;
}

char stack::pop()
{
    if(tos == 0){
        cout << "Стек пуст" << endl;
        return 0;
    }

    tos--;
    return stck[tos];
}

int main()
{
    stack s1, s2;
    s1.init();
    s2.init();
    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(i=0; i<3; i++)
        cout << "символ из s1: " << s1.pop() << endl;
    for(i=0; i<3; i++)
        cout << "символ из s2: " << s2.pop() << endl;

    return 0;
}
