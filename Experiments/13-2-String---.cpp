// 13.2 Define a class “String” that could work as user defined string type.
// Include constructors that will enable us to create an uninitialized string
// String s1; and also, to initialize an object with a string constant at the time
// of creation like String s2 (“Well Done”); And also create copy constructor
// to copy from string object to another string object. (Dynamic constructor)

// ------------------- Incomplate -----------------------

#include <iostream>
using namespace std;
class String
{
    const char *str;

public:
    String()
    {
        str = ":)";
    }
    String(const char s[])
    {
        str = s;
    }
    String(const String &s)
    {
        str = s.str;
    }
    friend ostream &operator<<(ostream &stream, String &x)
    {
        stream << x.str;
        return stream;
    }
};
main()
{
    String s;
    cout << "s  : " << s << endl;
    String s2 = "Well Done";
    cout << "s2 : " << s2 << endl;
    String s3 = s2;
    cout << "s3 : " << s3 << endl;
}

// #include <iostream>
// #include <cstring>
// class String
// {
//     char str[999];

// public:
//     String()
//     {
//         strcpy(str, "");
//     }
//     String(const char s[])
//     {
//         strcpy(str, s);
//     }
//     String(const String &s)
//     {
//         strcpy(str, s.str);
//     }
//     friend std::ostream &operator<<(std::ostream &stream, String &x)
//     {
//         stream << x.str;
//         return stream;
//     }
// };
// main()
// {
//     String s;
//     std::cout << "s  : " << s << std::endl;
//     String s2 = "Well Done :)";
//     std::cout << "s2 : " << s2 << std::endl;
//     String s3 = s2;
//     std::cout << "s3 : " << s3 << std::endl;
// }