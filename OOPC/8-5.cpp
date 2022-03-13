#include <iostream>
using namespace std;
class Person
{
    string name;
    int code;

public:
    void getPersonData()
    {
        cout << "Enter Name &  Code : ";
        cin >> name >> code;
    }
    void displayPersonData()
    {
        cout << "Name       : " << name << endl;
    }
};

class Account : public virtual Person
{
    double pay;

public:
    void getAccData()
    {
        cout << "Enter Pay : ";
        cin >> pay;
    }
    void displayAccData()
    {
        cout << "Pay        : " << pay << endl;
    }
};
class Admin : public virtual Person
{
    int expr;

public:
    void getAdminData()
    {
        cout << "Enter experience : ";
        cin >> expr;
    }
    void displayAdminData()
    {
        cout << "Experience : " << expr << endl;
    }
};
class master : public Account, public Admin
{
public:
    void getdata()
    {
        getPersonData();
        getAdminData();
        getAccData();
    }

    void display()
    {
        system("cls");
        displayPersonData();
        displayAdminData();
        displayAccData();
    }
};
int main()
{
    master m;
    int choice, t = 0;
    do
    {
        cout << "1. Create" << endl
             << "2. Update" << endl
             << "3. Display" << endl;
        cout << "Enter choice : ";
        cin >> choice;
        if (choice == 1)
        {
            m.getdata();
            t = 1;
        }
        else if (t == 0)
            cout << "\nCreate object first!\n\n";
        else if (choice == 2)
            m.getdata();
        else if (choice == 3)
            m.display();
        else
            exit(0);
    } while (choice >= 1 && choice <= 3);
}