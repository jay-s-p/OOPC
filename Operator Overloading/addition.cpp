#include<iostream>
using namespace std;

class Test
{
    int a;
public:
    void getdata()
    {
        cin >> a;
    }
    void putdata()
    {
        cout << a << endl;
    }
    Test operator+(Test x)
    {
        Test temp;
        temp.a = x.a + a;
        return temp; 
    }
};
main()
{
    Test t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t3 = t1 + t2;    
    cout<<endl;
    t3.putdata();
}