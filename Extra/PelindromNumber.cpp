// Mari jate kariyo chhe
// Atle exam nai hoy.
#include <iostream>
using namespace std;
bool isPalindrome(int n)
{
    if (n < 0) // Negative values are not palindrome!!! :)
        return false;

    int temp = n, // copy value to temp
        rev = 0;  // we will store output in this
    while (temp != 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (rev != n)
        return false;
    else
        return true;
}
int main()
{
    int n;
    system("cls");
    cout << "Enter number : ";
    cin >> n;
    if (isPalindrome(n))
        cout << n << " is a palindrome.";
    else
        cout << n << " is NOT a palindrome.";
    return 0;
}