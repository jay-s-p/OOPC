//  11.1 Write a program to show working of pointers in C++

#include <iostream>
using namespace std;

int a = 11;
int *p = &a;

void print()
{
    cout << "a  : " << a << endl;
    cout << "&a : " << &a << endl;
    cout << "*p : " << *p << endl;
    cout << "p  : " << p << endl;
}
main()
{
    print();
    a = 55;
    cout << "\nAfter 'a = 55' :-\n";
    print();
    *p = 99;
    cout << "\nAfter '*p = 99' :-\n";
    print();
}
