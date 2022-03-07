/********************************************************************************
--> Here, I used some Operator Overloding methods together... 
--> Baddhi include nathi kari... Jetli jarur lagti hti atli j kari chhe.
********************************************************************************/
#include <iostream>
using namespace std;
class Person
{
    int _age;

public:
    Person() {}
    Person(int age)
    {
        _age = age;
    }

    // Member function to get and print age
    void getData()
    {
        cin >> _age;
    }
    void printData()
    {
        cout << "\nAge = " << _age;
    }

    // Unary Operator Overloading
    void operator++()
    {
        ++_age;
    }

    // Binary Operator Overloading
    Person operator-(Person x); // we can use "+", "*", "/","%" also.
    

    // Relational Operators Overloading
    friend bool operator>(Person, Person); // we can use "<" also

    // I/O Operator Overloading [ Advance ] :-
    friend ostream &operator<<(ostream &, Person &); // cout ma use karva mate
    friend istream &operator>>(istream &, Person &); // cin ma use karva mate
};
Person Person::operator-(Person x) // we can use "+", "*", "/","%" also.
{
    Person result;
    result._age = _age - x._age;
    return result;
}
bool operator>(Person x, Person y)
{
    return (x._age > y._age);
}
ostream &operator<<(ostream &stream, Person &x)
{
    stream << x._age;
    return stream;
}
istream &operator>>(istream &stream, Person &x)
{
    stream >> x._age;
}

main()
{
    Person p1, p2; // initialize objects p1 and p2

    // get p1's value using member function & print it.
    cout << "\nEnter p1's age = ";
    p1.getData();
    p1.printData();

    // Increment p1's age and print it
    ++p1;
    cout << "\n--- After increment p1 ---\n";
    p1.printData();

    // Now, let's get p2's age using cin & print using cout
    cout<<"\n\n--------------------------------";
    cout << "\n\nEnter p2's age = ";
    cin >> p2;
    cout << "\nAge of p2 = " << p2;

    // Now, see the difference between p1 and p2's age and store in p3;
    Person p3;
    p3 = p1 - p2;
    cout << "\n\nAge difference between p1 and p2 = " << p3;

    // Now, let's see who is elder
    cout<<"\n\n--------------------------------";
    if (p1>p2)
        cout<<"\np1 is elder";
    else
        cout<<"\np2 is elder";   
}