#include <iostream>
using namespace std;
class Student
{
protected:
    string name;
    int rollNo;

public:
    void getData()
    {
        cout << "\nEnter name and roll-no. : ";
        cin >> name >> rollNo;
    }
};
class Internal : virtual public Student
{
protected:
    int internal_mark;

public:
    void getData()
    {
        cout << "\nEnter Internal marks : ";
        cin >> internal_mark;
    }
};
class External : virtual public Student
{
protected:
    int external_mark;

public:
    void getData()
    {
        cout << "\nEnter external marks : ";
        cin >> external_mark;
    }
};
class University
{
protected:
    int university_mark;

public:
    void getData()
    {
        cout << "\nEnter University marks : ";
        cin >> university_mark;
    }
};
class Result : public Internal, public External, public University
{
public:
    void getData()
    {
        Student::getData();
        Internal::getData();
        External::getData();
        University::getData();
    }
    void printData()
    {
        cout << "Name             = " << name << endl;  
        cout << "Roll no          = " << rollNo << endl;
        cout << "Internal Marks   = " << internal_mark << endl;
        cout << "External Marks   = " << external_mark << endl;
        cout << "University Marks = " << university_mark << endl;
    }
};
main()
{
    Result r;
    r.getData();
    r.printData();
}