#include <iostream>
using namespace std;
class Demo
{
    string name;

public:
    friend ostream &operator<<(ostream &out, Demo &d)
    {
        out << d.name;
        return out;
    }
    friend istream &operator>>(istream &in, Demo &d)
    {
        in >> d.name;
        return in;
    }
};
main()
{
    Demo b;
    cout << "Enter name : " << b;
    cin >> b;
    system("cls");
    cout << "Your name is " << b << " :)";
}