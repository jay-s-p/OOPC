#include <iostream>
using namespace std;
class Demo
{
public:
    int a;
    Demo() {}
    Demo(int x)
    {
        a = x;
    }
};
main()
{
    int x = 28;
    Demo obj;

    obj = x; // primitive to class
    cout << "obj.a = " << obj.a;
}