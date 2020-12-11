// загрузка алфавита в стек
//
#include<iostream>
using namespace std;
#define SIZE 27

class stack
{
    char stck[SIZE];
    int tos;
public:
    stack();
    void push(char ch);
    char pop();
};

stack::stack()
{
    cout << "Работа конструктора стека\n";
    tos = 0;
}

void stack::push(char ch)
{
    if(tos==SIZE)
        cout << "Стек полон\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop()
{
    if(tos==0){
        cout << "Стек пуст\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

void showstack(stack o);
stack loadstack();

int main()
{
    stack s1;
    s1 = loadstack();
    showstack(s1);

    return 0;
}

void showstack(stack o)
{
    char c;
    while(c=o.pop())
        cout << c << endl;
}

stack loadstack()
{
    stack t;
    char c;
    for(c='a'; c<='z'; c++)
        t.push(c);
    return t;
}
