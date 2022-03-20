//  8.1 Write a program to overload „*‟ Operator to perform below task using
// member function and friend function Concept.
// A[3][3]= B[3][3] * 2
// A[3][3]= 2 * B[3][3]
#include <iostream>
using namespace std;
class Demo
{
    int a;

public:
    Demo() {}
    Demo(int a)
    {
        this->a = a;
    }
    friend Demo operator*(Demo d, int a)
    {
        Demo x;
        x.a = a * d.a;
        return x;
    }
    friend Demo operator*(int a, Demo d)
    {
        Demo x;
        x.a = a * d.a;
        return x;
    }
    void print()
    {
        cout << a << endl;
    }
};
main()
{
    Demo A[5][5], B[5][5];
    A[3][3] = 28;
    B[3][3] = 54;
    cout << "A[3][3] = ";
    A[3][3].print();
    cout << "B[3][3] = ";
    B[3][3].print();
    A[3][3] = B[3][3] * 2;
    cout << "After 'A[3][3] = B[3][3] * 2' :-\n";
    cout << "A[3][3] = ";
    A[3][3].print();
    A[3][3] = 2 * B[3][3];
    cout << "After 'A[3][3] = 2 * B[3][3]' :-\n";
    cout << "A[3][3] = ";
    A[3][3].print();
}