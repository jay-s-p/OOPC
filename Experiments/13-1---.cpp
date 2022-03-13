// 13.1 Declare a class called “Item” having data members item code, item 
// name, cost and discount. Derive two classes from class item, namely 
// “Employee” and “Customer”. The class employee has data members like 
// employee_code, employee_name and amount. The class customer has 
// data members like customer_name and amount. Define following 
// functions for - initializing data members. - displaying the values of data 
// members. - computing amount to be paid for a purchased item. Also 
// define function main to create objects of both derived classes and to show 
// usage of above functions 
#include <iostream>
using namespace std;
class Item
{
    string name;
    int code, cost;
    float discount;
    public:
        void getData()
        {
            cout << "Enter Name, Code, Cost & discount : ";
            cin >> name >> code >> cost >> discount;
        }
        void print()
        {
            cout << "Name       : " << name << endl
                 << "Code       : " << code << endl
                 << "Cost       : " << cost << endl
                 << "Discount   : " << discount << endl;
        }
};
class Employee
{
    int employee_code, amount;
    string employee_name;
    public:
        void getData()
        {
            cout << "Enter Employee name, code & amount : ";
            cin >> employee_name >> employee_code >> amount;
        }
        void print()
        {
            cout << "Employee name  : " << employee_name << endl;
        }

};
class Customer
{
    int amount;
    string customer_name;
    public:
        void getData()
        {
            cout << "Enter Customer name & amount : ";
            cin >> customer_name >> amount;
        }
        void print()
        {
            cout << "Customer name  : " << customer_name << endl;
        }
};