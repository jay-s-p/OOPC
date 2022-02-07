/********************************************************************************
 * Here I used All Posibble Operator Overloding...
********************************************************************************/
#include <iostream>
using namespace std;
class Person
{
public:
    int _age;

    Person() {}
    Person(int age) // Parameterized constructor for setting the data
    {
        _age = age;
    }
    void getData() // setting tha data using function
    {
        cout << "\nEnter your age = ";
        cin >> _age;
    }
    void getData() // display Data
    {
        cout << _age << endl;
    }
    void operator++() // Increment the age of person
    {
        ++_age;
    }
    Person operator-(Person x) // subtraction of 2 person's ages [ diffrence between 2 person's age ]
    {
        Person result;
        result._age = _age - x._age;
        return result; // Retuen the result
    }
};

    ostream &operator<<(ostream &os)
    {
        os << _age;
        return os;
    }
main()
{
    Person p1(19); // set p1's value using constructor
    Person p2;
    p2.getData(); // set p2's value using member function

    // Print both person's age...
    cout << "p1's age = ";
    p1.getData();
    cout << "p2's age = ";
    p2.getData();

    // Increment p2's age and print it
    ++p2;
    cout<<p2;
}