#include <iostream>
using namespace std;
void area(int a) // Simple Function
{
    cout << "\nArea Of Square = " << a * a;
}
void area(int a, int b) // 1. change in number of arguments/parameters.
{
    cout << "\nArea Of Rectangle = " << a * b;
}
float area(float pi, int a) // 2. change in datatype
{
    float result = pi * (a * a);
    cout << "\nArea of Circle = " << result << "\t";
    return (result * 3);
}
int area(int a, int b, int h) // 1. change in number of arguments/parameters.
{
    int result = ((a + b) * h) / 2;
    cout << "\nArea of Trapezoid = " << result << "\t";
    return (result * 10);
}
// NOTE :  3. change in Sequence pan avse!
main()
{
    area(2);
    area(2, 4);
    float f = area(3.14f, 4);
    cout << "Area of 3 circles = " << f;
    int i = area(4, 8, 2);
    cout << "Area of 10 Trapezoid = " << i;
}