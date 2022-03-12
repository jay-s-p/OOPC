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
    Zzz operator+(Zzz x)
    {
        Zzz temp;
        temp.a = x.a + a;
        return temp;
    }
};
main()
{
    Zzz t1, t2, t3;
    cout << "Enter t1 : ";
    t1.getData();
    cout << "Enter t2 : ";
    t2.getData();
    t3 = t1 + t2;
    cout << "\nAddition of t1 + t2 = ";
    t3.putData();
}