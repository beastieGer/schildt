#include<iostream>
using namespace std;

class letters
{
    char ch;
public:
    letters(char c) { ch = c; }
    char get_ch() { return ch; }
};

int main()
{
    letters let[6] = { 'A', 'B', 'C', 'D', 'E', 'J'}; 
    for(int i=0; i<6; i++)
        cout << let[i].get_ch() << ' ';
    cout << endl;
    
    return 0;
}
