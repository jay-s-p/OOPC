// 13.1 Declare a class called “Item” having data members item code, item 
// name, cost and discount. Derive two classes from class item, namely 
// “Employee” and “Customer”. The class employee has data members like 
// employee_code, employee_name and amount. The class customer has 
// data members like customer_name and amount. Define following 
// functions for - initializing data members. - displaying the values of data 
// members. - computing amount to be paid for a purchased item. Also 
// define function main to create objects of both derived classes and to show 
// usage of above functions.
#include <iostream>
using namespace std;
class Item
{
    
    string name;
    int code;
    protected:
    int cost, discount;
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
class Employee : public Item
{
    int employee_code, amount;
    string employee_name;
    public:
        void getData()
        {
            Item::getData();
            cout << "Enter Employee name, code : ";
            cin >> employee_name >> employee_code;
        }
        void calculateDiscount()
        {
            amount = cost - discount;
            cout << "Amount = " << amount << endl;
        }
        void print()
        {
            Item::print();
            cout << "Employee name  : " << employee_name << endl;
        }

};
class Customer : public Item
{
    int amount;
    string customer_name;
    public:
        void getData()
        {
            Item::getData();
            cout << "Enter Customer name : ";
            cin >> customer_name;
        }
        void calculateDiscount()
        {
            amount = cost - discount;
            cout << "Amount = " << amount << endl;
        }
        void print()
        {
            Item::print();
            cout << "Customer name  : " << customer_name << endl;
        }
};
main()
{
    Customer cus;
    Employee emp;
    cus.getData();
    emp.getData();
    cus.calculateDiscount();
    emp.calculateDiscount();
}
// O/P :-
// Customer name  : Jay
// Item name      : pen
// Code           : 1
// Cost           : 1200
// Discount       : 100
// Amount         = 1100

// Employee name  : Dev
// Item name      : mouse
// Code           : 2
// Cost           : 5500
// Discount       : 500
// Amount         = 5000