#include <iostream>
using namespace std;
class Demo
{
    int a;

public:
    Demo() {}

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
};
main()
{
    Demo d;
    int x = 5;

    d = x; // primitive to class
    cout << "d = ";
    d.putData();
}