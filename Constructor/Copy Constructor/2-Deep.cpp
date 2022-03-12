#include <iostream>
using namespace std;
class Zzz
{
    int a, *b;

public:
    Zzz(int x, int y)
    {
        a = x;
        b = new int;
        *b = y;
    }
    Zzz(Zzz &x)
    {
        a = x.a;
        b = new int;
        *b = *(x.b);
    }
    void print()
    {
        cout << endl
             << "a  = " << a << endl
             << "*b = " << *b << endl;
        cout << "&a = " << &a << endl
             << "b  = " << b << endl;
    }
};
main()
{
    Zzz z(2, 50);
    cout << "--- z ---";
    z.print();
    Zzz zzz = z;
    cout << "--- zzz ---";
    zzz.print();
}