// Overloading Stream Insertion and Extraction Operators << >>
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;

    cout << "Enter the third stooge's first name: ";
    cin >> curly; // Extraction overload

    cout << "The three stooges are: " << larry << ", " << moe << " and " << curly << endl; // Insertion Overload

    cout << "\nEnter the three stooges names separated by a space: ";
    cin >> larry >> moe >> curly; // Extraction overload

    cout << "The three stooges are: " << larry << ", " << moe << " and " << curly << endl; // Insertion Overload

    return 0;
}
