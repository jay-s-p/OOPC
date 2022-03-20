// 1.2 Write a C++ program to demonstrate reference variable
#include <iostream>
using namespace std;
main()
{
    // variable initialization
    int a = 10;
    // Create reference variable and assign address of a;
    int &ref = a;
    // Change ref value and print the value of a and ref
    ref = 20;
    cout << "a = " << a << endl; // a = 20
    cout << "ref = " << ref;     // ref = 20
}