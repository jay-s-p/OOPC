// 15 Develop an object-oriented system “Visiting Card Management” which allows
// user to add, delete and update and search the visiting card details.
#include <iostream>
#include <string>
using namespace std;
class VCard
{
    string _cName, _email, _address;
    int _contect;

public:
    void getData()
    {
        cout << "Enter Company Name, Address, Email, and Contect : ";
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
    int n;
    cout << "Enter no of Visiting Cards : ";
    cin >> n;
    VCard vCards[n];
    for (int i = 0; i < n; i++)
        vCards[i].getData();
    // for (int i = 0; i < n; i++)
    //     vCards[i].printDetails();
    string cName;
    system("cls");
    while (1)
    {
        cout << "\nEnter Company name : ";
        cin >> cName;
        if (cName == "exit")
            return 0;
        for (int i = 0; i < n; i++)
        {
            if (vCards[i].imatch(cName))
            {
                system("cls");
                vCards[i].printDetails();
                // return 0;
            }
        }
    }
}