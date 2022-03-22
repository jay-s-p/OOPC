// Single Inheritance
#include <iostream>
using namespace std;
class Vehicle
{
    protected:
    Vehicle(int x)
    {
        cout << x;
    }
public:
    Vehicle()
    {
        cout << "Vehicle created." << endl;
    }
    ~Vehicle()
    {
        cout << "Vehicle destroyed." << endl;
    }
};
// Car is inherited from Vehicle
class Car : public Vehicle
{
    public:
    Car()
    {
        cout << "Car is created." << endl;
    }
    ~Car()
    {
        cout << "Car is destroyed." << endl;
    }
};
main()
{
    Car carLOL;
}