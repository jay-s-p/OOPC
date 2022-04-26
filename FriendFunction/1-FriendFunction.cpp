#include <iostream>
using namespace std;
class Demo
{
    int a;

public:
    Demo()
    {
        a = 28;
    }
    friend void print(Demo);
};
void print(Demo x)
{
    cout << "a = " << x.a;
}

main()
{
    Demo a;
    print(a);
}