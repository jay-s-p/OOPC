#include <iostream>
using namespace std;
class Demo
{
    int a, b;

public:
    Demo(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << endl
             << "a : " << a << " | "<< &a << endl
             << "b : " << b << " | "<< &b << endl;
    }
};
main()
{
    Demo x(2, 5);
    cout << "--- x ---";
    x.print();
    Demo y = x;
    cout << "--- y ---";
    y.print();
}