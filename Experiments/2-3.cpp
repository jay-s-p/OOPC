// 2.3 Write a program to swap the values of two integer number using swap() 
// function using the concepts of Call by Value & Call by Reference. 
#include<iostream>
using namespace std;
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void swap2(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
main()
{
    int a = 28, b = 54;
    system("cls");
    cout << "Before Swap : ";
    cout << "\na :" << a << "  b : " << b;
    cout << "\nCall By value : ";
    swap(a,b);
    cout << "\na :" << a << "  b : " << b;
    cout << "\nCall By reference : ";
    swap2(a,b);
    cout << "\na :" << a << "  b : " << b;
}