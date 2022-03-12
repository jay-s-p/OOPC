// online class ma apiyo to eeee program ...
#include <iostream>
using namespace std;
int n = 20;
void sunRise(int a[])
{
    int result[n], j = 0, k;
    k = 0;
    for (int i = 0; i < n; i++)
    {
        if (k < a[i])
        {
            k = a[i];
            result[j] = a[i];
            j++;
        }
    }
    cout << "\nSunrise  [" << j << "] : ";
    for (int i = 0; i < j; i++)
    {
        cout << result[i] << " ";
    }
}
void sunSet(int a[])
{
    int b[n], j = 0, k;
    k = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (k < a[i])
        {
            k = a[i];
            b[j] = a[i];
            j++;
        }
    }
    cout << "\nSunset   [" << j << "] : ";
    for (int i = 0; i < j; i++)
    {
        cout << b[i] << " ";
    }
}
main()
{
    // int a[n] = { 6, 11, 11, 15, 13, 19, 2, 19, 17, 20, 3, 12, 108, 5, 16, 18, 8, 4, 14, 9 };
    int a[n] = {3, 5, 7, 3, 2, 1};
    sunRise(a);
    sunSet(a);
}