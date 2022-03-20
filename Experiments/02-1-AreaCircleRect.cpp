// 2.1 Write a program to create two user defined functions which finds area of
// circle and rectangle.
#include <iostream>
#define PI 3.14159265
using namespace std;
double area(int r)
{
    return (PI * r * r);
}
double area(int a, int b)
{
    return (a * b);
}
main()
{
    int r, a, b;
    cout << "Enter radius of circle : ";
    cin >> r;
    cout << "Area of circle is " << area(r);
    cout << "\n\nEnter length and width of rectangle : ";
    cin >> a >> b;
    cout << "Area if Rectangle is " << area(a, b);
}