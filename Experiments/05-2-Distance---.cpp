// 5.2 Define a Class “Distance" having data members as feet and inch and
// member functions as get_dist(), add_dist() and show_dist(). Write a
// program to get the information of 2 distances and add these 2 distances
// and display this result using Constructor concept and also use destructor
// concept to destroy object.

// This program may not correct ¯\_(ツ)_/¯

#include <iostream>
using namespace std;
class Distance
{
    double feet, inch;

public:
    Distance()
    {
    }
    ~Distance()
    {
        cout << "\nKhtam " << feet << ":" << inch;
    }
    void get_dist()
    {
        cout << "\nEnter feet and inch : ";
        cin >> feet >> inch;
    }
    void add_dist(Distance &d1, Distance &d2)
    {
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;
    }
    void show_dist()
    {
        cout << "\nFeet : " << feet;
        cout << "\nInch : " << inch;
    }
};
main()
{
    Distance d1, d2;
    Distance *d3 = new Distance();
    d1.get_dist();
    d2.get_dist();
    d3->add_dist(d1, d2);
    d3->show_dist();
    delete d3;
    d3->show_dist();
}