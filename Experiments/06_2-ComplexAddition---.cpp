// 6.2 Define a Class “Complex” having data members as real and imag and
// member functions as get_comp(), add_comp() and show_comp(). Write a
// program to get information of 2 complex numbers and add these 2
// complex numbers and display this result using Overloaded Constructor
// Concept.
#include <iostream>
using namespace std;
class Complex
{
    int real, imag;

public:
    void get_comp()
    {
        cout << "\nEnter the real & imaginary number : ";
        cin >> real >> imag;
    }
    Complex add_comp(Complex c2)
    {
        Complex c3;
        c3.real = real + c2.real;
        c3.imag = imag + c2.imag;
        return c3;
    }
    void show_comp()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
main()
{
    Complex c1, c2, c3;
    system("cls");

    c1.get_comp();
    c2.get_comp();

    cout << "c1 = ";
    c1.show_comp();
    cout << "c2 = ";
    c2.show_comp();

    cout << "\nSum is : ";
    c3 = c1.add_comp(c2);
    c3.show_comp();
}