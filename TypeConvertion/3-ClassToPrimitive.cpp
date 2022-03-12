#include <iostream>
using namespace std;
class Demo
{
    int a;

public:
    Demo(int x)
    {
        a = x;
    }
    void getData(int x)
    {
        a = x;
    }
    void putData()
    {
        cout << a;
    }

    operator int()
    {
        return a;
    }
    
};
main()
{
    Demo d(5);
    int x;
    x = d; // class to primitive
    cout << "x = " << x;
}