// 9.2 Define two Classes “Time-12” and “Time-24” to represent time format.
// Write a program to convert one time format to another time format using
// Type Conversion concept. (class to class)
#include <iostream>
using namespace std;
class Time24;
class Time12
{
    int sec, min, hour, ampm;

public:
    Time12(int a = 0, int b = 0, int c = 0, int d = 0)
        : hour(a), min(b), sec(c), ampm(d) {}
    Time12(Time24);
    void print()
    {
        printf("%02d:%02d:%02d%s\n", hour, min, sec, (ampm == 0) ? "am" : "pm");
    }
    friend Time24;
};

class Time24
{
    int sec, min, hour;

public:
    Time24() {}
    Time24(int a = 0, int b = 0, int c = 0)
        : hour(a), min(b), sec(c) {}
    Time24(Time12);
    void print()
    {
        printf("%02d:%02d:%02d\n", hour, min, sec);
    }
    friend Time12;
};

Time12::Time12(Time24 t)
{
    hour = t.hour % 12;
    min = t.min;
    sec = t.sec;
    ampm = (t.hour >= 12) ? 1 : 0;
}
Time24::Time24(Time12 t)
{
    hour = t.hour + ((t.ampm != 0) ? 12 : 0);

    min = t.min;
    sec = t.sec;
}

main()
{
    system("cls");
    Time12 t1, t2(4, 35, 23, 1);
    Time24 t24(20, 45, 48);
    cout << "t1  :- ";
    t1.print();
    cout << "t2  :- ";
    t2.print();
    cout << "t24 :- ";
    t24.print();
    cout << "\n\nAfter 't1 = t24' \nt1  :- ";
    t1 = t24;
    t1.print();
    cout << "\n\nAfter 't24 = t2' \nt24 :- ";
    t24 = t2;
    t24.print();
}