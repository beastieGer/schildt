// загрузка алфавита в стек
// выбор верхнего или нижнего регистра
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
    if(tos==SIZE){
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
stack loadstack(int upper);

int main()
{
    stack s1, s2, s3;
    s1 = loadstack();
    showstack(s1);

    s2 = loadstack(1);
    showstack(s2);

    s3 = loadstack(0);
    showstack(s3);

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

stack loadstack(int upper)
{
    stack t;
    char c;

    if(upper) c = 'A';
    else c = 'a';

    for(; toupper(c)<='Z'; c++)
        t.push(c);
    return t;
}
