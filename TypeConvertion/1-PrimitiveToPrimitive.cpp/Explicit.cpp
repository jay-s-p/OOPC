#include <iostream>
using namespace std;
main()
{
    int a = 11;
    cout << "sizeof(a) = " << sizeof(a) << endl; // Size of a = 4

    // Explicit converstion
    cout << "(int)(a+0.1) = " << (int)(a + 0.1) << endl;
    cout << "Size of (int)(a+0.1) = " << sizeof((int)(a + 0.1)) << endl; // Size of (int)(a+8.123) = 4
}