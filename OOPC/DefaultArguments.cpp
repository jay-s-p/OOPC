#include <iostream>
using namespace std;

void add(int a, int b = 3, int c = 3)
{
    printf("\n%02d + %02d + %02d = %d", a, b, c, a + b + c);
}
main()
{
    add(2, 4, 1);
    add(2, 4); // c assigned to 3
    add(2);    // b & c are assigned to 3
    // add() will give error.
}