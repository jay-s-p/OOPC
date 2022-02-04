
#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int x)
    {
        a = x;
    }
    // Declare Friend Class B, So in class B we can Access Class A's Variable.
    friend class B; // Try to remove this, It will give an Error
};
class B
{
    int b;

public:
    B(int x)
    {
        b = x;
    }
    void print(A &a)
    {
        cout << a.a << " " << b << endl; // As class B is friend in class A so it can access a variable using "a.a"
    }
};
main()
{
    A a(28);
    B b(54);
    b.print(a);
}