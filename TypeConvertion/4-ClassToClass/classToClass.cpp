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
    friend ostream &operator<<(ostream &stream, Demo &x) // cout ma use karva mate
    {
        stream << x.a;
        return stream;
    }
    int getData()
    {
        return a;
    }
    Demo(Test &); // Class TO Class
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
    friend ostream &operator<<(ostream &stream, Test &x) // cout ma use karva mate
    {
        stream << x.b;
        return stream;
    }
    int getData()
    {
        return b;
    }
    Test(Demo &); // Class TO Class
};
// ...
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
    Demo a(123);
    Test b(789);

    cout << "a : " << a
         << "\t\tb : " << b;
    cout << "\nBefore        ---> a = " << a;
    a = b; // class to class
    cout << "\nAfter 'a = b' ---> a = " << a;

    Demo c(111);
    Test d(999);

    cout << "\n\nc : " << c
         << "\t\td : " << d;
    cout << "\nBefore        ---> d = " << d;
    d = c; //  class to class
    cout << "\nAfter 'd = c' ---> d = " << d;
}