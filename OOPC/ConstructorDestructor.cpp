// Try it yourself
#include <iostream>
using namespace std;
class A
{
    int count = 1;

public:
    A(int a)
    {
        count = a;
        cout << "Constructor d" << count << endl;
    }
    ~A()
    {
        cout << "--- d" << count << " Destroyed ---" << endl;
    }
};
main()
{
    {
        A d1(1);
    }
    A d2(2), d3(3), d4(4);
    {
        A d5(5);
    }
}