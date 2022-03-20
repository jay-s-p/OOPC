// 7.1 Write a program to overload Unary Operators („-‟and „++‟) with member
// function and friend function.
#include <iostream>
using namespace std;
class Demo
{
    int a;

public:
    void getData()
    {
        cout << "Enter a = ";
        cin >> a;
    }
    void printData()
    {
        cout << "\na = " << a;
    }
    void operator-()
    {
        a = -a;
    }
    void operator++()
    {
        ++a;
    }
};
main()
{
    Demo D;
    D.getData();
    D.printData();
    cout << "\nAfter ++D : ";
    ++D;
    D.printData();
    cout << "\nAfter -D : ";
    -D;
    D.printData();
}