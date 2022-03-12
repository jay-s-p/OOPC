#include <iostream>
using namespace std;
class Zzz
{
    int a, b;

public:
    Zzz(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << endl
             << "a    = " << a << endl
             << "b    = " << b << endl;
        cout << "&a   = " << &a << endl
             << "&b   = " << &b << endl;
    }
};
main()
{
    Zzz z(2, 5);
    z.print();
    Zzz zzz = z;
    zzz.print();
}