#include<iostream>
using namespace std;

class samp
{
    int i, j;
public:
    samp(int a, int b) { i = a; j = b; }
    // void set_ij(int a, int b) { i = a; j = b; }
    int get_product() { return i*j; }
};

int main()
{

    samp *ob;
    ob = new samp(4, 5);
    if(!ob){
        cout << "Ошибка выделения памяти" << endl;
        return 1;
    }

    // ob->set_ij(4, 5);
    cout << ob->get_product() << endl;

    delete ob;

    int *p;
    p = new int(1000);
    if(!p){
        cout << "Ошибка выделения памяти" << endl;
        return 1;
    }
    // *p = 1000;
    cout << *p << endl;
    delete p;

    return 0;
}
