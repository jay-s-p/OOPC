#include<iostream>
using namespace std;
class Zzz
{
    int a;
public:
    void getData()
    {
        cin >> a;
    }
    void putData()
    {
        cout << a << endl;
    }
    friend void operator++(Zzz&);
};
void operator++(Zzz &x)
{
    x.a = ++x.a;
}
main()
{
    Zzz t1, t2, t3;
    t1.getData();
    t2.getData();
    t3.getData();
    ++t1;
    ++t2;
    ++t3;
    cout<<endl;
    t1.putData();
    t2.putData();
    t3.putData();
}