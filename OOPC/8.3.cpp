#include <iostream>
using namespace std;

class Staff
{
protected:
    int code;
    char name[20];

public:
    void getStaffInfo()
    {
        cout << "name is : ";
        cin >> name;

        cout << "code : ";
        cin >> code;
    }
};

class Teacher : public Staff
{
    char subject[30];
    char publication[30];

public:
    void getTeacherInfo()
    {
        cout << "subject is : ";
        cin >> subject;

        cout << "publication is : ";
        cin >> publication;
    }

    void display()
    {
        cout << "name is : " << name << endl;
        cout << "code is : " << code << endl;
        cout << "subject is :" << subject << endl;
        cout << "publication is : " << publication << endl;
    }
};

class Officer : public Staff
{
    char grade;

public:
    void getOfficerInfo()
    {
        cout << "grade of officer is : ";
        cin >> grade;
    }

    void display()
    {
        cout << "name is : " << name << endl;
        cout << "code is : " << code << endl;
        cout << "grade is : " << grade << endl;
    }
};

class Typist : public Staff
{
    int speed;

public:
    void getTypistInfo()
    {
        cout << "speed of typist is : ";
        cin >> speed;
    }
    void display()
    {
        cout << "name is : " << name << endl;
        cout << "code is : " << code << endl;
        cout << "speed is : " << speed << endl;
    }
};

class Regular : public Typist
{
};

class Casual : public Typist
{
    int daily_wages;

public:
    void getCasualtyInfo()
    {
        cout << "daily_wages of typist is : ";
        cin >> daily_wages;
    }
    void display()
    {
        cout << "name is :" << name << endl;
        cout << "code is :" << code << endl;
        cout << "daily wages is : " << daily_wages << endl;
    }
};

main()
{

    cout << "For teacher :" << endl;
    Teacher t;
    t.getStaffInfo();
    t.getTeacherInfo();
    cout << endl;

    cout << "For officer :" << endl;
    Officer o;
    o.getStaffInfo();
    o.getOfficerInfo();
    cout << endl;

    cout << "For regular typist" << endl;
    Regular r;
    r.getStaffInfo();
    r.getTypistInfo();
    cout << endl;

    cout << "For casual typist" << endl;
    Casual c;
    c.getStaffInfo();
    c.getTypistInfo();
    c.getCasualtyInfo();
    cout << endl;

    cout << "Information about teacher :" << endl;
    t.display();
    cout << endl;

    cout << "Information about officer :" << endl;
    o.display();
    cout << endl;

    cout << "Information about regular typist :" << endl;
    r.display();
    cout << endl;

    cout << "Information about casual typist :" << endl;
    c.display();
    cout << endl;
}