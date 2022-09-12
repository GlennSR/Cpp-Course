#include <iostream>

using namespace std;

/*
    Write a program that displays how to provide a change to a specific amount of cents
    Assume that the number of cents entered is >= 0

    In the US:
        1 dollar = 100 cents
        1 quarter = 25 cents
        1 dime = 10 cents
        1 nickel = 5 cents
        1 penny = 1 cent

    Sample run:
        Enter an amout in cents: 92

        You can provide change for this as follows: 
        Dollars  : 0
        Quarters : 3
        Dimes    : 1
        Nickels  : 1
        Pennies  : 2
*/

int main(){
    int cents{0};

    cout << "Enter an amout in cents: ";
    cin >> cents;

    int dollars{};
    dollars = cents / 100;
    cents %= 100;

    int quarters{};
    quarters = cents / 25;
    cents %= 25;

    int dimes{};
    dimes = cents / 10;
    cents %= 10;

    int nickels{};
    nickels = cents / 5;
    cents %= 5;

    int pennies{};
    pennies = cents;

    cout << "\nYou can provide change for this as follows: \n";
    cout << "Dollars  : " << dollars << endl;
    cout << "Quarters : " << quarters << endl;
    cout << "Dimes    : " << dimes << endl;
    cout << "Nickels  : " << nickels << endl;
    cout << "Pennies  : " << pennies << endl;

    return 0;
}