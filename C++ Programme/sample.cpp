#include <iostream>
#include <string.h>
using namespace std;
struct book
{
private:
    int bookid;
    char title[20];
    float price;
};
void display(book);
book input();
int main()
{
    book b1;
    b1 = input();
    display(b1);
}

void display(book b)
{
    cout << "\n"
         << b.bookid << " " << b.price << " " << b.title;
}
book input()
{
    book b;
    cout << "enter book id ,title and price of book";
    cin >> b.bookid >> b.title >> b.price;
    return (b);
}
