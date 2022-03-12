#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A()
    {
        a = 28;
    }
    friend void printAndIncrement(A *);
};
void printAndIncrement(A *a)
{
    cout << a->a << endl; // Pointer mate "->" use thay, "."(dot) nai
    a->a++;
}
main()
{
    A a;
    printAndIncrement(&a);
    printAndIncrement(&a);
    printAndIncrement(&a);
}