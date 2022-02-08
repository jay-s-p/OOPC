#include <iostream>
using namespace std;
class Zzz
{
    int a;

public:
    Zzz(int x)
    {
        a = x;
    }
    void getData(int x)
    {
        a = x;
    }
    void putData()
    {
        cout << a;
    }
    operator int()
    {
        return a;
    }
};
main()
{
    Zzz d(5);
    int x;
    x = d;
    cout<<x;
}