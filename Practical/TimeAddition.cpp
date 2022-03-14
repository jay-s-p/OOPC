#include <iostream>
using namespace std;
class Time
{
private:
    int ss, mm, hh;

public:
    Time()
    {
    }
    Time(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }

    Time sum(Time t2)
    {
        Time t3;
        t3.ss = ss + t2.ss;

        int minute = t3.ss / 60;
        t3.mm = mm + t2.mm + minute;

        int hour = t3.mm / 60;
        t3.hh = hh + t2.hh + hour;

        t3.mm %= 60;
        t3.ss %= 60;
        return t3;
    }
    void display()
    {
        cout << hh << ":" << mm << ":" << ss;
    }
};

int main()
{
    Time t1(1, 35, 35), t2(1, 35, 35), t3;
    t3 = t1.sum(t2);
    t3.display();
}