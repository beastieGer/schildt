#include<iostream>
using namespace std;

class samp
{
    string s;
public:
    void show() { cout << s << endl; }
    void set(string str) { s = str; }
};

samp input()
{
    string s;
    samp temp;
    cout << "Введите строку:" << endl;
    cin >> s;
    temp.set(s);
    return temp;
}

int main()
{
    samp ob;
    ob = input();
    ob.show();

    return 0;
}
