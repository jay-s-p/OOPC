// Run karine joy lyo
// Ama me alag alag rite karlo chhe Khali reference mate j refer karjo
#include <iostream>
using namespace std;
inline int fact(int n)
{
    if (n < 1)
        return 1;
    else
        return n * fact(n - 1);
}
main()
{
    system("cls");
    int n;

    cout<<"Enter a value = ";
    cin>>n;

    cout << "Factorial of " << n << " using recursion = " << fact(n);
    cout << "\n\n";
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }

    cout << "Factorial of " << n << " using loop = " << result;
    int fact = 1;
    cout << "\n\nFactorial Series :\n";
    for (int i = 1; i <= n; i++)
    {
        printf("%7d   ",i);
    }

    // print the complate series to the given number. [ Try it yourself ]
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
        printf("%7d   ",fact);
    }
}