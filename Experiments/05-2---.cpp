// 5.2 Define a Class “Distance" having data members as feet and inch and 
// member functions as get_dist(), add_dist() and show_dist(). Write a 
// program to get the information of 2 distances and add these 2 distances 
// and display this result using Constructor concept and also use destructor 
// concept to destroy object. 

// This is program is not correct ~_~ ...
// This is program is not correct ~_~ ...
// This is program is not correct ~_~ ...
// This is program is not correct ~_~ ...

#include<iostream>
#include<string>
using namespace std;
class Distance
{
    double feet, inch;
public:
    Distance()
    {

    }
    ~Distance(){
        cout << "\nKhtam";
        
    }
    void get_dist()
    {
        cout << "\nEnter feet and inch : ";
        cin >> feet >> inch;
    }
    Distance add_dist(Distance d2)
    {
        Distance d3;
        d3.feet = feet +  d2.feet;
        d3.inch = inch + d2.inch;
        return d3;
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
    *d3 = d1.add_dist(d2);
    d3->show_dist();
    delete d3;

}