#include <iostream>
#include <cmath>
using namespace std;
void area(int a) // Simple Function
{
    cout << "\nArea Of Square = " << a * a;
}
void area(int a, int b) // 1. change in number of Parameters.
{
    cout << "\nArea Of Rectangle = " << a * b;
}
void area(float pi, int a) // 2. change in Datatype
{
    float result = pi * (a * a);
    cout << "\nArea of Circle = " << result << "\t";
}
void area(int a, int b, int c)
{
    float s = (a + b + c);
    float result = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "\nArea of Circle using 3 sides = " << result << "\t";
}
// NOTE :  3. change in Sequence pan avse!
main()
{
    area(2);
    area(2, 4);
    area(3.14f, 4);
    area(4, 8, 2);
}