/*
 Класс стек для хранения символов
 */
#include<iostream>
using namespace std;


class stack
{
    char *stck;
    int tos;
    int size;
public:
    stack(int n);
    ~stack();
    void push(char ch);
    char pop();
};

stack::stack(int n)
{
    size = n;
    stck = new char[size];
    tos = 0;
}

stack::~stack()
{
    delete [] stck;
}

void stack::push(char ch)
{
    if(tos == size){
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
    stack s1(3), s2(3);
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
