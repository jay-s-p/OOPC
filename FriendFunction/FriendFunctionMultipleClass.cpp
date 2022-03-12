#include <iostream>
using namespace std;
class B; // Declaration is needed

class A
{
    int a;

public:
    A()
    {
        a = 28;
    }
    friend void print(A, B); // class B declaration is need because we need here for Friend Function
};
class B
{
    int b;

public:
    B()
    {
        b = 54;
    }
    friend void print(A, B);
};
void print(A a, B b)
{
    cout << "A = " << a.a << endl
         << "B = " << b.b << endl;
}
main()
{
    A a;
    B b;
    print(a, b);
}