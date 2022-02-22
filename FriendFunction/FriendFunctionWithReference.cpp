// Its "Call by Reference" not "Pointer"...[Both are diffrent]
#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(){
        a = 10;
    }
    friend void print(A&);
};
void print(A &a) // Reference can declared using "&", pointer ma "*" ave ne eee rite.
{
    cout<<a.a<<endl;
    a.a++;
}
main()
{
    A a;
    print(a);// only "a" as parameter not "&a", because we are passing Reference Not Pointer
    print(a);
    print(a);
    // NOTE : we have to pass "&a" for Pointer. But for reference we have to pass variable only "a";
}