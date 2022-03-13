#include <iostream>
using namespace std;
class Person
{
    string n;
    int c;

public:
    void getPersonData()
    {
        cout << "\nEnter name : ";
        cin >> n;
        cout << "\nEnter code : ";
        cin >> c;
    }
    void displayPerson()
    {
        cout << "\nName : " << n;
    }
};

class Account : public virtual Person
{
    double p;

public:
    void getAccData()
    {
        cout << "\nEnter pay : ";
        cin >> p;
    }
    void displayAcc()
    {
        cout << "\nPay : " << p;
    }
};
class Admin : public virtual Person
{
    int e;

public:
    void getAdminData()
    {
        cout << "\nEnter experience : ";
        cin >> e;
    }
    void displayAdmin()
    {
        cout << "\nExperience : " << e;
    }
};
class Master : public Account, public Admin
{
public:
    void getData()
    {
        getPersonData();
        getAdminData();
        getAccData();
    }

    void display()
    {
        displayPerson();
        displayAdmin();
        displayAcc();
    }
};
int main()
{
    Master m;
    int choice, t = 1;
    do
    {
        cout << "\nEnter 1 for create";
        cout << "\nEnter 2 for update";
        cout << "\nEnter 3 for display";
        cin >> choice;
        if (choice == 1)
        {
            if (t == 1)
            {
                m.getData();
                t++;
            }
            else
            {
                cout << "Cannot Create!";
            }
        }
        if (choice == 2)
        {
            if (t == 1)
            {
                cout << "\nCreate object first!";
            }
            else
            {
                m.getData();
                t++;
            }
        }
        if (choice == 3)
        {
            if (t == 1)
            {
                cout << "\nCreate object first!";
            }
            else
            {
                m.display();
                t++;
            }
        }
    } while (choice >= 1 && choice <= 3);
}