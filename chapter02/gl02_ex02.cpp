#include<iostream>
using namespace std;

class Info
{
    string name;
    string address;
public:
    void store(string n, string a);
    void display();
};

void Info::store(string n, string a)
{
    name = n;
    address = a;
}

void Info::display()
{
    cout << "Имя: " << name << endl;
    cout << "Адрес: " << address << endl;
}

int main()
{
    Info i;    
    i.store("Alex", "Moscow");
    i.display();

    return 0;
}
