//
// IGNORE this program
// IGNORE this program
//
#include <iostream>
using namespace std;
main()
{
    int a = 11;
    cout << "sizeof(a) = " << sizeof(a) << endl; // Size of a = 4

    // Explicit converstion
    cout << "static_cast<int>(a+0.1) = " << static_cast<int>(a + 0.1) << endl;
    cout << "Size of static_cast<int>(a+0.1) = " << sizeof(static_cast<int>(a + 0.1)) << endl; // Size of static_cast<int>(a+8.123) = 4
}