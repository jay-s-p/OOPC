// Shallow Copy work well with normal values,  
// But with pointer It will copy the address,
// So that if we change in any of that object 
// it will change in both as the address are same :)
#include <iostream>
using namespace std;
class Demo
{
    int *a, *b;

public:
    Demo(int x, int y)
    {
        a = new int;
        b = new int;
        *a = x;
        *b = y;
    }
    void print()
    {
        cout << endl
             << "a : " << *a << " | "<< a << endl
             << "b : " << *b << " | "<< b << endl;
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