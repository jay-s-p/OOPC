// 2.2 Write a program to find simple interest using interest() function using
// default argument concept.
#include <iostream>
using namespace std;
void interest(float P, float R = 8, float T = 1)
{
    cout << "Simple interest = " << (P * R * T) / 100
         << "\tper " << T << " year "
         <<"\tat interest rate of " << R << "%\n";
}
main()
{
    float P, R, T;
    cout << "Enter Principal, Interest and Duration(in years) : ";
    cin >> P >> R >> T;
    interest(P, R, T);
    interest(P, R);
    interest(P);
}