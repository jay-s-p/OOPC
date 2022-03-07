// 4.3 Create a Class “Time” with hours and minutes as two data members, add 
// necessary member functions to initialize and display data of class. Define 
// a member function sum() which adds two Time objects. Invoke the 
// statements like T3.sum(T1, T2) in main(). 
#include<iostream>
using namespace std;
class Time
{
    int hour, min;
public:
    Time(){}
    Time(int x, int y):hour(x),min(y){}
    void printTime()
    {
        cout << "Time = " << hour << "h:" << min <<"m";
    }
    void sum(Time t1,Time t2)
    {
        Time t3;
        min = t1.min + t2.min;
        int x = (min/60);
        min = min%60;
        hour = t1.hour + t2.hour + x;
    }

};
main()
{
    Time t1(3,50), t2(2,30);
    Time t3;
    t3.sum(t1,t2);
    t3.printTime();
}