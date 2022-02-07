#include <iostream>
using namespace std;
class Zzz
{
    int a;
    
public:
    Zzz(){}
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
    // Zzz operator=(int x)
    // {
    //     a = x;
    // }
};
main()
{
    Zzz d;
    int x = 5;
    d = x;
    d.putData();
}