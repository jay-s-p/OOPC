//  5.1 Define a Class “Person” having name and age as data members and 
// having constructor to initialize these data members and display() member 
// function to display values of data members. 
#include<iostream>
#include<string>
using namespace std;
class Person
{
    string name;
    int age;
public:
    Person(string name, int age):name(name),age(age){}
    void display()
    {
        cout << "\nName = " << name << "\nAge = " << age;
    }
};
main()
{
    Person p1("Jay",19);
    p1.display();
}