// 3.2 Write a program to find Maximum of three floating point numbers and 
// three integers using Function Overloading concept. 
#include<iostream>
using namespace std;
void max(int a, int b, int c)
{
    if(a>b)
        if(a>c)
            cout << a <<" is max";
        else
            cout << c << " is max";
    else if(b > c)
        cout << b << " is max";
    else
        cout << c << " is max";
}
void max(double a, double b, double c)
{
    if(a>b)
        if(a>c)
            cout << a <<" is max";
        else
            cout << c << " is max";
    else if(b > c)
        cout << b << " is max";
    else
        cout << c << " is max";
}
main()
{
    int a,b,c;
    double x,y,z;
    system("cls");
    cout<<"Enter 3 integers : ";
    cin >> a >> b >> c;
    max(a, b, c);
    cout<<"\n\nEnter 3 integers with floating point : ";
    cin >> x >> y >> z;
    max(x, y, z);
}