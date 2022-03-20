// 15 Develop an object-oriented system “Visiting Card Management” which allows
// user to add, delete and update and search the visiting card details.

// ---------------------- Incomplate ---------------------

#include <iostream>
using namespace std;
class VCard
{
    string _cName, _email, _address, _contect;

public:
    void getData()
    {
        cout << "\nEnter Company name, address, Email, and Contect : ";
        cin >> _cName >> _address >> _email >> _contect;
    }
    void printDetails()
    {
        cout << endl;
        cout << "Company name   : " << _cName << endl
             << "Address        : " << _address << endl
             << "Email          : " << _email << endl
             << "Contect        : " << _contect << endl;
    }
    // --> For Case Sensitive
    bool match(const string &cName)
    {
        if (cName == _cName)
            return true;
        else
            return false;
    }
    // --> For Searching Case Insensitive
    bool imatch(const string &cName)
    {
        if (cName.size() != _cName.size())
            return false;
        for (int i = 0; i < _cName.size(); ++i)
            if (tolower(cName[i]) != tolower(_cName[i]))
                return false;
        return true;
    }
};
main()
{
    VCard vCards[999];
    int size;
    string choice, temp;

    cout << "Enter no of Visiting Cards : ";
    cin >> size;

    for (int i = 0; i < size; i++)
        vCards[i].getData();

    system("cls");
    while (1)
    {
        cout << "\n\n"
             << "1. print  -> Print all Visiting card details.\n"
             << "2. add    -> Add Visiting card.\n"
             << "3. delete -> Delete Visiting card.\n"
             << "4. update -> Update Visiting card details.\n"
             << "5. search -> Search Visiting card details.\n"
             << "   exit   -> Exit\n\n"
             << "Enter operation :- ";
        cin >> choice;

        system("cls");
        if (choice == "exit")
            exit(0);

        else if (choice == "print" || choice == "1")
        {
            cout << "-----------------------------------------------------";
            for (int i = 0; i < size; i++)
                vCards[i].printDetails();
            cout << "-----------------------------------------------------";
        }

        else if (choice == "add" || choice == "2")
        {
            size = size + 1;
            vCards[size - 1].getData();
        }

        else if (choice == "delete" || choice == "3")
        {
            cout << "\n\nComing Soon...";
        }

        else if (choice == "update" || choice == "4")
        {
            cout << "Enter Company name for update : ";
            cin >> temp;
            for (int i = 0; i < size; i++)
            {
                if (vCards[i].imatch(temp))
                {
                    system("cls");
                    cout << "OLD Details :-";
                    vCards[i].printDetails();
                    cout << "\nEnter new Details :-";
                    vCards[i].getData();
                    system("cls");
                    cout << "New Details :-";
                    vCards[i].printDetails();
                }
            }
        }

        else if (choice == "search" || choice == "5")
        {
            cout << "Enter Company name to search : ";
            cin >> temp;
            for (int i = 0; i < size; i++)
            {
                if (vCards[i].imatch(temp))
                {
                    system("cls");
                    vCards[i].printDetails();
                }
            }
        }
    }
}