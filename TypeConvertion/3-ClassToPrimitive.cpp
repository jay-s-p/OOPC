#include <iostream>
using namespace std;
class Demo
{
public:
    int a;
    operator int()
    {
        return a;
    }
};
main()
{
    int x;
    Demo obj;

    obj.a = 54;
    x = obj; // class to primitive
    cout << "x = " << x;
}