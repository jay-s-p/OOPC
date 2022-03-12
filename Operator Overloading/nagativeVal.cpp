#include <iostream>
using namespace std;

class Demo
{
    int a, b, c;
public:
    void getData()
    {
        cout << "enter the value of a,b & c : ";
        cin >> a >> b >> c;
    }
    void operator-()
    {
        cout << -a << endl;
        cout << -b << endl;
        cout << -c << endl;
    }
};

int main()
{
    Demo d1;

    d1.getData();

    -d1;
}