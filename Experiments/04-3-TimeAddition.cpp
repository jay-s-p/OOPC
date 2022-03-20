// 4.3 Create a Class “Time” with hours and minutes as two data members, add
// necessary member functions to initialize and display data of class. Define
// a member function sum() which adds two Time objects. Invoke the
// statements like T3.sum(T1, T2) in main().
#include <iostream>
using namespace std;
class Time
{
    int hour, min;

public:
    Time() {}
    Time(int x, int y) : hour(x), min(y) {}
    void printTime()
    {
        cout << "Time = " << hour << "h:" << min << "m";
    }
    void sum(Time T1, Time T2)
    {
        min = T1.min + T2.min;
        int x = (min / 60);
        min = min % 60;
        hour = T1.hour + T2.hour + x;
    }
};
main()
{
    Time T1(3, 50), T2(2, 30);
    Time T3;
    T3.sum(T1, T2);
    T3.printTime();
}