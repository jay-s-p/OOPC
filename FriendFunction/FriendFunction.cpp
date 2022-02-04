#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(){
        a = 28;
    }
    friend void print(A);
};
void print(A a)
{
    cout<<a.a<<endl;
}

main()
{
    A a;
    print(a);
    // print(a);
    // print(a);
}