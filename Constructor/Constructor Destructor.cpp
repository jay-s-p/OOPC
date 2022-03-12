// Try it yourself
#include <iostream>
using namespace std;
class A
{
    char ch;

public:
    A(int a)
    {
        ch = a;
        cout << "+ " << ch << " Created" << endl;
    }
    ~A()
    {
        cout << "- " << ch << " Destroyed" << endl;
    }
};
main()
{
    {
        A d1('A');
    }
    A d2('I'), d3('J'), d4('K');
    {
        A d5('Z');
    }
}