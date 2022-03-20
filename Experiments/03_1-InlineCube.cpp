// 3.1 Write a program to create inline function named cube to calculate cube of
// given number and it should return this value.
#include <iostream>
using namespace std;
inline int cube(int x)
{
    return x * x * x;
}
main()
{
    int a, b;
    cout << "Enter value : ";
    cin >> a;
    b = cube(a);
    printf("Cube of %d is %d", a, b);
}