#include <iostream>
using namespace std;
main()
{
    short a = 11;
    cout << "Size of a                 = " << sizeof(a) << endl; // Size of a = 2

    // Explicit converstion
    cout << "Size of (int)(a+0.1)      = " << sizeof((int)(a + 0.1)) << endl; // here it will convert to int explicitly
    cout << "Size of (double)(a + 0.1) = " << sizeof((float)(a + 0.1)) << endl; // here it will convert to float explicitly
}