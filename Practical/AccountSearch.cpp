// 12.1 Create a class “Account”. It has three data member account number, 
// name and balance. Define function to assign value and display value. 
// Define function that search account number given by the user. If account 
// number exists, then print detail of that account. Write a program using 
// array of object. Declare at least 3 account and print details. 

#include<iostream>
#include<string>
using namespace std;
class Account
{
    int accNo;
    long money;
    string name;
    public:
        void getData()
        {
            cout << "Enter name & accNo & money : ";
            cin >> name >> accNo >> money;
        }
        bool match(int a)
        {
            if (a == accNo)
                return true;
            else
                return false;
        }
        void putData()
        {
            cout << "Name   : " << name << endl
                 << "AccNo  : " << accNo << endl
                 << "Money  : " << money << endl;
        }
};
main()
{
    Account a[5];
    int i,x;
    for(i = 0; i < 5; i++)
    {
        a[i].getData();
    }
    while(1)
    {
        cout << "\n\nSearch : ";
        cin >> x;
        if(x == 0)
            return 0;
        for(i = 0; i < 5; i++)
        {
            if(a[i].match(x))
            {
                a[i].putData();
                break;
            }
        }
    }
}