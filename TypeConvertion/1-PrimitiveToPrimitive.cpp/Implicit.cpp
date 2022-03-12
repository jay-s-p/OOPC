#include <iostream>
using namespace std;
main()
{
    int a = 11;
    cout << "sizeof(a) = " << sizeof(a) << endl; // Size of a = 4

    // Implicit converstion
    cout << "a+0.1 = " << (a + 0.1) << endl;
    cout << "Size of (a+0.1) = " << sizeof(a + 0.1) << endl; // Size of (a+0.1) = 8
}