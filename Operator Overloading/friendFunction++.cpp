#include<iostream>
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
    friend void operator++(Test&);
};
void operator++(Test &x)
{
        x.a = ++x.a;
}
main()
{
    Test t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t3.getdata();
    ++t1;
    ++t2;
    ++t3;
    cout<<endl;
    t1.putdata();
    t2.putdata();
    t3.putdata();
}