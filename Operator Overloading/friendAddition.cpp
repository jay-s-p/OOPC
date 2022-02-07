#include <iostream>
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
    friend Zzz operator+(Zzz x,Zzz y);
};
Zzz operator+(Zzz x, Zzz y)
{
    x.a = x.a + y.a;
    return x;
}
main()
{
    Zzz t1, t2, t3;
    t1.getData();
    t2.getData();
    t3 = t1 + t2;
    cout << endl;
    t3.putData();
}