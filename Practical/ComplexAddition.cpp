#include <iostream>
using namespace std;
class Complex
{
    int real, imagenary;

public:
    void getData()
    {
        cout << "Enter the Real and Imagenary number : ";
        cin >> real >> imagenary;
    }

    void print()
    {

        cout << real << " + " << imagenary << "i" << endl;
    }

    Complex sum(Complex c2)
    {
        Complex c3;

        c3.real = real + c2.real;
        c3.imagenary = imagenary + c2.imagenary;

        return c3;
    }
};

main()
{

    Complex c1, c2, c3;

    c1.getData();
    c2.getData();

    cout << "1st complex number : ";
    c1.print();

    cout << "2nd complex number : ";
    c2.print();

    cout << endl;

    c3 = c1.sum(c2);

    cout << "Addition = ";
    c3.print();
}