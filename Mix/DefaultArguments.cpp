#include <iostream>
using namespace std;

void add(int a, int b = 9, int c = 9)
{
    printf("\n%02d + %02d + %02d = %d", a, b, c, a + b + c);
}
main()
{
    add(1, 1, 1);
    add(1, 1); // c assigned to 3
    add(1);    // b & c are assigned to 3
    // add() will give error.
}