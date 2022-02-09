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
    Demo(Test t);
    int getData()
    {
        return a;
    }
    void putData()
    {
        cout << "a = " << a << endl;
    }
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
    Test(Demo d);
    int getData()
    {
        return b;
    }
    void putData()
    {
        cout << "b = " << b << endl;
    }
};

Demo::Demo(Test t)
{
    a = t.getData();
}
Test::Test(Demo d)
{
    b = d.getData();
}

main()
{
    Demo d(11);
    Test t(1111);

    cout<<"Before :";
    d.putData();
    cout<<"After  :";
    d = t;
    d.putData();

    d = 9999;
    t = 99;

    cout<<"Before :";
    t.putData();
    cout<<"After  :";
    t = d;
    t.putData();
}