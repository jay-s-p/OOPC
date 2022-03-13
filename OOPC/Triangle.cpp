#include <iostream>
using namespace std;
class Triangle
{
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }
    float area()
    {
        return (base * height) / 2;
    }
};
main()
{
    int b, h;
    cout << "Enter base & height : ";
    cin >> b >> h;
    Triangle t(b, h);
    cout << "Area of trinagle is " << t.area();
}