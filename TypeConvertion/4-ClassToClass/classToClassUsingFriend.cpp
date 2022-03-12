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
    Test(Demo d);
    int getData()
    {
        return b;
    }
    friend Demo;
};
Demo::Demo(Test t)
{
    a = t.b; // we access the private member b directly
}
Test::Test(Demo d)
{
    b = d.a; // we access the private member a directly
}

main()
{
    Demo d(123);
    Test t(789);

    cout << "d : " << d.getData();
    cout << "   t : " << t.getData();
    cout << "\nBefore d = " << d.getData();
    d = t; // class to class
    cout << "\nAfter (d = t) d = " << d.getData();

    Demo d2(111);
    Test t2(999);

    cout << "\n\nd2 : " << d2.getData();
    cout << "   t2 : " << t2.getData();
    cout << "\nBefore t2 = " << t2.getData();
    t2 = d2; // class to class
    cout << "\nAfter (t2 = d2) t2 = " << t2.getData();
}