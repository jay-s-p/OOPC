// 11.3 Write a program to implement following Class hierarchy using the
// concept of Abstract Class:

#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void getData() = 0;
    virtual void area() = 0;
};
class Circle : public Shape
{
    int r;

public:
    void getData()
    {
        cout << "Enter radius of Circle : ";
        cin >> r;
    }
    void area()
    {
        cout << "Area of Circle is " << 3.14 * r * r << "\n\n";
    }
};
class Rectangle : public Shape
{
    int l, b;

public:
    void getData()
    {
        cout << "Enter l & b of Rectangle : ";
        cin >> l >> b;
    }
    void area()
    {
        cout << "Area of Rectangle is " << (l * b) << "\n\n";
    }
};
class Triangle : public Shape
{
    int l, b;

public:
    void getData()
    {
        cout << "Enter l & b of Triangle : ";
        cin >> l >> b;
    }
    void area()
    {
        cout << "Area of Triangle is " << (l * b) / 2 << "\n\n";
    }
};
main()
{
    Circle c;
    Rectangle r;
    Triangle t;
    c.getData();
    c.area();
    r.getData();
    r.area();
    t.getData();
    t.area();
}