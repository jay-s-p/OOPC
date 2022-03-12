// 1.3 Write a C++ program to demonstrate scope resolution operator
#include <iostream>
#include<string>
using namespace std;

// global variable
string a = "global";
main()
{

    // local variable
    string a = "local";

    cout << "a = " << a << endl;
    cout << "::a = " << ::a;
}