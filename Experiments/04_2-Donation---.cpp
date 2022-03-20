// 4.2 Create a Class “Donation” containing data members as personname and
// amount. Create a static function to calculate amount contributed by all
// person until now. Write a program to evaluate it.

// May be this prog is wrong ¯\_(ツ)_/¯

#include <iostream>
using namespace std;
class Donation
{
    string personname;
    int amount;

public:
    static int totalAmount;
    Donation(string x, int y) : personname(x), amount(y)
    {
        totalAmount += y;
    }
    static void seeAllDonation()
    {
        cout << "Amount contributed by all person until now : " << totalAmount;
    }
};
int Donation::totalAmount = 0;
main()
{
    Donation d1("Jay", 10), d2("Harshad", 20), d3("Husen", 30);
    Donation::seeAllDonation();
}