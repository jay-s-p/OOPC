//  9.1 Define a Class “String” with array of characters. Write a program to get
// integer number and convert into string number and convert this string
// number into integer number using Type Conversion concept. (basic to
// class).

// This Program is Wrong and Incomplate
// This Program is Wrong and Incomplate
// This Program is Wrong and Incomplate

#include <iostream>
#include <stdlib.h>
using namespace std;
class String
{
    char s[123];

public:
    void getStr()
    {
        cout << "Enter string : ";
        cin >> s;
    }
    void print()
    {
        cout << "s = " << s << endl;
    }
};
main()
{
    String s;
    s.getStr();
    s.print();
}