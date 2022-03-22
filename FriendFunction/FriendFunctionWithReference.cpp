// Its "Call by Reference" not "Pointer"...[Both are diffrent]
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A()
    {
        a = 10;
    }
    friend void printAndIncrement(A &);
};
void printAndIncrement(A &a)
{
    cout << a.a << endl;
    a.a++;
}
main()
{
    A a;
    printAndIncrement(a);
    printAndIncrement(a);
    printAndIncrement(a);
}