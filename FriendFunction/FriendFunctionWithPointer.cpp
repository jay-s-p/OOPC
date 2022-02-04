#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(){
        a = 28;
    }
    friend void print(A*);
};
void print(A *a)
{
    cout<<a->a<<endl; // Pointer mate "->" use thay, "."(dot) nai
    a->a++;
}
main()
{
    A a;
    print(&a);
    print(&a);
    print(&a);
}