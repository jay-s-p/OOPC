// 7.2 Define a Class “Book” having members like book_title, publisher and
// author_name. Overload extractor and inserter operators (>> and <<).
#include <iostream>
using namespace std;
class Book
{
    string book_title, publisher, author_name;

public:
    friend ostream &operator<<(ostream &out, Book &b)
    {
        out << "Book Title  : " << b.book_title << endl
            << "Publisher   : " << b.publisher << endl
            << "Author      : " << b.author_name;
        return out;
    }
    friend istream &operator>>(istream &in, Book &b)
    {
        cout << "\nEnter book name, publisher and author : ";
        in >> b.book_title >> b.publisher >> b.author_name;
        return in;
    }
};
main()
{
    Book b;
    cin >> b;
    cout << b;
}