// 15 Develop an object-oriented system “Visiting Card Management” which allows
// user to add, delete and update and search the visiting card details.

// ---------------------- Incomplate ---------------------

#include <iostream>
using namespace std;
class VCard
{
    string
        *__cName,
        *__email,
        *__address,
        *__contact;

public:
    VCard()
    {
        __cName = new string;
        __email = new string;
        __address = new string;
        __contact = new string;
    }
    ~VCard()
    {
        delete __cName;
        delete __email;
        delete __address;
        delete __contact;
    }
    void getData()
    {
        cout << "\nEnter Company name, address, Email, and Contact : ";
        cin >> *__cName >> *__address >> *__email >> *__contact;
    }
    void printDetails()
    {
        cout << endl;
        cout << "Company name   : " << *__cName << endl
             << "Address        : " << *__address << endl
             << "Email          : " << *__email << endl
             << "Contect        : " << *__contact << endl;
    }
    // --> For Case Sensitive
    bool match(const string &cName)
    {
        if (cName == *__cName)
            return true;
        else
            return false;
    }
    // --> For Searching Case Insensitive
    bool imatch(const string &cName)
    {
        if (cName.size() != (*__cName).size())
            return false;
        for (int i = 0; i < (*__cName).size(); ++i)
            if (tolower(cName[i]) != tolower((*__cName)[i]))
                return false;
        return true;
    }
};
void printLine()
{
    cout << "---------------------------------------";
}
void printMsg(string s)
{
    system("cls");
    cout << s;
}
main()
{
    VCard vCards[20];
    int size;
    string choice, temp;
    char flag;

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
            printLine();
            for (int i = 0; i < size; i++)
                vCards[i].printDetails();
            printLine();
        }

        else if (choice == "add" || choice == "2")
        {
            ++size;
            vCards[size - 1].getData();
            printMsg("*** Inserted Succesfully ***");
        }

        else if (choice == "delete" || choice == "3")
        {
            cout << "Enter Company name for DELETE : ";
            cin >> temp;
            for (int i = 0; i < size; i++)
            {
                if (vCards[i].imatch(temp))
                {
                    system("cls");
                    printLine();
                    vCards[i].printDetails();
                    printLine();
                    cout << "\nConfirm Delete this info (y/n) : ";
                    cin >> flag;

                    if (flag == 'y')
                    {
                        for (int j = i; j < size - 1; j++)
                            vCards[j] = vCards[j + 1];
                        --size;
                        printMsg("*** Deleted Succesfully ***");
                    }
                    else
                    {
                        printMsg("*** Operation canceled ***");
                    }
                }
            }
        }

        else if (choice == "update" || choice == "4")
        {
            cout << "Enter Company name for UPDATE : ";
            cin >> temp;
            for (int i = 0; i < size; i++)
            {
                if (vCards[i].imatch(temp))
                {
                    system("cls");
                    printLine();
                    cout << "\n*** OLD Details ***";
                    vCards[i].printDetails();
                    printLine();
                    cout << "\n***Enter New Details ***\n";
                    vCards[i].getData();
                    system("cls");
                    printLine();
                    cout << "\n*** New Details ***";
                    vCards[i].printDetails();
                    printLine();
                }
            }
        }

        else if (choice == "search" || choice == "5")
        {
            cout << "Enter Company name to search : ";
            cin >> temp;
            flag = '0';
            for (int i = 0; i < size; i++)
            {
                if (vCards[i].imatch(temp))
                {
                    system("cls");
                    vCards[i].printDetails();
                    flag = '1';
                }
            }
            if (flag != '1')
                printMsg("*** Not Found ***");
        }
    }
}