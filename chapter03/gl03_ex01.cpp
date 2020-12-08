#include<iostream>
using namespace std;
#define SIZE 10

class stack
{
    char stck[SIZE];
    int tos;
public:
    stack() { tos = 0; }
    void push(char ch);
    char pop();
};

void stack::push(char ch)
{
    if(tos==SIZE){
        cout << "Стек полон \n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop()
{
    if(tos==0){
        cout << "Стек пуст \n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main()
{
    stack a1, a2;
    int i;
    a1.push('a');
    a1.push('b');
    a1.push('c');

    a2=a1;

    for(i=0; i<3; i++) cout << "символ из a1: " << a1.pop() << endl;
    for(i=0; i<3; i++) cout << "символ из a2: " << a2.pop() << endl;

    return 0;
}
