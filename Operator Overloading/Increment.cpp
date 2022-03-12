#include <iostream>
using namespace std;
class Zzz
{
    int _var;

public:
    void getData()
    {
        cin >> _var;
    }
    void putData()
    {
        cout << _var;
    }
    void operator++() // Here is Operator Overloading
    {
        _var = ++_var; // Increment the value
    }
    void operator--() // Here is Operator Overloading
    {
        _var = --_var; // Decrement the value
    }
};
main()
{
    Zzz obj; // Creating object of class Zzz
    cout << "Enter value : ";
    obj.getData();
    ++obj; // calling for increment object overloading function
    cout << "\nAfter Increment = ";
    obj.putData();
    --obj; // calling for decrement object overloading function
    cout << "\nAfter Decrement = ";
    obj.putData();
}