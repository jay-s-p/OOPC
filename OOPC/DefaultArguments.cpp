#include <iostream>
using namespace std;

void add(int a = 3, int b = 3, int c = 3) // em na puchta 3 value kem api, gamme eee api sakay.
{
    printf("\n%02d + %02d + %02d = %d", a, b, c, a + b + c); // %d lakso to pan chalse   &&   mane khbar che C++ ma COUT ave chhe!
    // %02d na samjay to google kari lejo!!!
}
main()
{
    add(2, 4, 1); // d assigned to 3
    add(2, 4);    // c and d assigned to 3
    add(2);       // b,c,d are assigned to 3
    add();        // badda 3 thi assigned thase
}