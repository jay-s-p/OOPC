#include<iostream>
using namespace std;
class Shape{
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
        cout << "Enter r : ";
        cin >> r;
    }
    void area()
    {
        cout << "Area of cicle is " << 3.14*r*r << endl;
    }
};
class Rectangle : public Shape 
{
    int l,b;
    public:
    void getData()
    {
        cout << "Enter l & b : ";
        cin >> l >> b;
    }
    void area()
    {
        cout << "Area of rectangle is " << (l * b) << endl;
    }
};
class Triangle : public Shape 
{
    int l,b;
    public:
    void getData()
    {
        cout << "Enter l & b : ";
        cin >> l >> b;
    }
    void area()
    {
        cout << "Area of triangle is " << (l * b)/2 << endl;
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