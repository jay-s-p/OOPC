// 12.2 Write a program to find out sum of two private data members x and y of
// two classes A and B using a common friend function. Assume that the
// prototype for both the classes will be void sum (A, B).

#include <iostream>
using namespace std;
class B;
class A
{
    int x;

public:
    void getData()
    {
        cout << "Enter x : ";
        cin >> x;
    }
    friend void sum(A, B);
};
class B
{
    int y;

public:
    void getData()
    {
        cout << "Enter y : ";
        cin >> y;
    }
    friend void sum(A, B);
};
void sum(A a, B b)
{
    cout << "\nx + y = " << (a.x + b.y);
}

main()
{
    A a;
    B b;
    a.getData();
    b.getData();
    sum(a, b);
}