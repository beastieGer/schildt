// программа разворачивает строку на обратный порядок
//
#include<iostream>
using namespace std;

void rev_str(string s1, string &s2)
{
    for(unsigned int i=0; i<s1.length(); i++)
    {
        s2[i] = s1[s1.length()-1-i];
    } 
}

void rev_str(string &s)
{
    string tmp;
    for(unsigned int i=0; i<s.length()/2; i++)
    {
        tmp[0] = s[i];
        s[i] = s[s.length()-1-i];
        s[s.length()-1-i] = tmp[0];
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    string s1, s2;

    s1 = "123456";
    s2 = s1;
    rev_str(s1, s2);
    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}
