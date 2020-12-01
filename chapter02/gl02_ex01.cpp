#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[80];
    cout << "Введите строку" << endl;
    cin >> s;
    cout << "Количество введеных символов " << strlen(s) << endl;
    return 0;
}
