// 13.2 Define a class “String” that could work as user defined string type.
// Include constructors that will enable us to create an uninitialized string
// String s1; and also, to initialize an object with a string constant at the time
// of creation like String s2 (“Well Done”); And also create copy constructor
// to copy from string object to another string object. (Dynamic constructor)
#include <iostream>
using namespace std;
class String
{
    char *str;

public:
    String()
    {
        str = "";
    }
    String(char s[])
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
    String s2("LOL");
    cout << "s2 : " << s2 << endl;
    String s3 = s2;
    cout << "s3 : " << s3 << endl;
}