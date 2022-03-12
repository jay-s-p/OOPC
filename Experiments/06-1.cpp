//  6.1 Define a Class “Point” which represents 2-D Point, i.eP(x, y). Define
// Default constructor to initialize both data member with value 5,
// Parameterized constructor to initialize member according to value
// supplied by user and Copy Constructor. Define necessary functions and
// Write a program to test class point

#include <iostream>
using namespace std;
class Point
{
    int x, y;

public:
    Point() : x(5), y(5) {}
    Point(int a, int b) : x(a), y(b) {}
    Point(const Point &p)
    {
        x = p.x;
        y = p.y;
    }
    void printData()
    {
        cout << "\nx = " << x
             << "\ny = " << y << endl;
    }
};
main()
{
    Point p1, p2(2, 3);
    p1.printData();
    p2.printData();
}