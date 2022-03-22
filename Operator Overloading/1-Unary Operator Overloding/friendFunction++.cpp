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
    friend void operator++(Zzz &);
};
void operator++(Zzz &x)
{
    x.a = ++x.a;
}
main()
{
    Zzz z;
    cout << "Enter value : ";
    z.getData();
    ++z;
    cout << "After Increment = ";
    z.putData();
}