#include <iostream>
using namespace std;

void add(int a, int b) // Simple Function
{
    cout << "a + b      = " << (a + b) << endl;
}
void add(int a, int b, float c) // 1. change in no of Parameteres
{
    cout << "a + b + c  = " << (a + b + c) << endl;
}
void add(int a, float c) //  2. change in Datatypes
{
    cout << "a + c      = " << (a + c) << endl;
}
void add(float c, int b) // 3. change in Sequence
{
    cout << "c + b      = " << (c + b) << endl;
}
main()
{
    int a = 28, b = 54;
    float c = 7.9;
    add(a, b);
    add(a, b, c);
    add(a, c);
    add(c, b);
}