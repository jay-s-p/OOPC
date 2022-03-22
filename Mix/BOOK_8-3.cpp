#include <iostream>
using namespace std;

class Staff
{
protected:
    int code = 0;
    string name = "";

public:
    void getStaffData()
    {
        cout << "Enter Name & Code : ";
        cin >> name >> code;
    }
    void displayStaffData()
    {
        cout << "Name           : " << name << endl
             << "Code           : " << code << endl;
    }
};

class Teacher : public Staff
{
    string subject = "";
    string publication = "";

public:
    void getData()
    {
        getStaffData();
        cout << "Enter Subject & Publication : ";
        cin >> subject >> publication;
    }

    void display()
    {
        displayStaffData();
        cout << "Subject        : " << subject << endl
             << "Publication    : " << publication << endl;
    }
};

class Officer : public Staff
{
    char grade = ' ';

public:
    void getData()
    {
        getStaffData();
        cout << "Enter Grade : ";
        cin >> grade;
    }

    void display()
    {
        displayStaffData();
        cout << "Grade          : " << grade << endl;
    }
};

class Typist : public Staff
{
    int speed = 0;

public:
    void getTypistData()
    {
        getStaffData();
        cout << "Enter Speed : ";
        cin >> speed;
    }
    void displayTypistData()
    {
        displayStaffData();
        cout << "Speed          : " << speed << endl;
    }
};

class Regular : public Typist
{
public:
    void getData()
    {
        getTypistData();
    }
    void display()
    {
        displayTypistData();
    }
};

class Casual : public Typist
{
    int daily_wages = 0;

public:
    void getData()
    {
        getTypistData();
        cout << "Enter daily wages : ";
        cin >> daily_wages;
    }
    void display()
    {
        displayTypistData();
        cout << "Daily wages    : " << daily_wages << endl;
    }
};

main()
{
    short choice;
    Teacher teacher;
    Officer officer;
    Regular regularTypist;
    Casual casualTypist;
    while (1)
    {
        if (choice % 2 != 0)
            system("cls");
        cout << endl
             << "1. Edit teacher's Data" << endl
             << "2. Display teacher's Data" << endl
             << "3. Edit officer's Data" << endl
             << "4. Display officer's Data" << endl
             << "5. Edit regular Typist's Data" << endl
             << "6. Display regular Typist's Data" << endl
             << "7. Edit casual Typist's Data" << endl
             << "8. Display casual Typist's Data" << endl;
        cout << "Enter choice : ";
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
            teacher.getData();
            break;
        case 2:
            teacher.display();
            break;
        case 3:
            officer.getData();
            break;
        case 4:
            officer.display();
            break;
        case 5:
            regularTypist.getData();
            break;
        case 6:
            regularTypist.display();
            break;
        case 7:
            casualTypist.getData();
            break;
        case 8:
            casualTypist.display();
            break;
        default:
            return 0;
        }
    }
}