#include <iostream>
using namespace std;
main()
{
    short a = 123;
    cout << "Size of a         = " << sizeof(a) << endl;

    // Implicit converstion
    cout << "Size of (a + 0.1) = " << sizeof(a + 0.1)   << endl; // as we add floating point, it will convert to double
}