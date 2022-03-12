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
    Demo(Test &);
    int getData()
    {
        return a;
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
    Test(Demo &);
    int getData()
    {
        return b;
    }
};
Test::Test(Demo &d)
{
    b = d.getData();
}
Demo::Demo(Test &t)
{
    a = t.getData();
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
    t2 = d2; //  class to class
    cout << "\nAfter (t2 = d2) t2 = " << t2.getData();

}