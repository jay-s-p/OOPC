#include <iostream>
using namespace std;
class Test
{
    int a;
public:
    void getdata()
    {
        cin >> a;
    }
    void putdata()
    {
        cout << a << endl;
    }
    friend Test operator+(Test x,Test y);
};
Test operator+(Test x, Test y)
{
    x.a = x.a + y.a;
    return x;
}
main()
{
    Test t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t3 = t1 + t2;
    cout << endl;
    t3.putdata();
}