#include <iostream>
using namespace std;
class Test;
class Demo
{
    int a;
public:
    Demo() {}
    Demo(int x)
    {
        a = x;
    }
    void putData()
    {
        cout << a << endl;
    }
    friend Test;
};
class Test
{
    int b;
public:
    Test() {}
    Test(int x)
    {
        b = x;
    }
    Test(Demo d)
    {
        b = d.a;
    }
    void putData()
    {
        cout << b << endl;
    }
    operator Demo()
    {
        return b;
    }
};
main()
{
    Demo d(5);
    d.putData();
    Test t(10);
    t.putData();
    t = d;
    t.putData();
}