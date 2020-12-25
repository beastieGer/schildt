#include<iostream>
#include<ctype.h>
using namespace std;

const int ignores = 0;
const int upper = 1;
const int lower = 2;

void print(const char *s, int how=-1)
{
    static int oldcase = ignores;
    if(how<0) how = oldcase;
    while(*s){
        switch(how){    
            case upper: cout << (char) toupper(*s); break;
            case lower: cout << (char) tolower(*s); break;
            default: cout << *s;
        }
        s++;
    }
    oldcase = how;
}

int main()
{
    print("Привет\n", ignores);
    print("Привет\n", upper);
    print("Привет\n");
    print("Привет\n", lower);
    print("Привет\n", ignores);
    cout << (char) toupper('a') << endl;

    return 0;
}
