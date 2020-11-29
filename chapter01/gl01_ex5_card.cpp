/*
card класс каталога библиотечных карточек. (Заглавие, автор и число экземпляров на руках)
*/
#include<iostream>
using namespace std;

class Card
{
    string book_title;
    string autor;
    int count_ex;
public:
    void store(string book_title, string autor, int count_ex)
    {
        this->book_title = book_title;
        this->autor = autor;
        this->count_ex = count_ex;
    }

    void show()
    {
        cout << book_title << " Autor: " << autor << endl;
        cout << "На руках " << count_ex << "экземпляров." << endl;
    }
};

int main()
{
    Card card;
    card.store("C++", "Шилдт", 1);
    card.show();

    return 0;
}
