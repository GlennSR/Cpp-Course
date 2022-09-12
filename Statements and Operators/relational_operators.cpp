#include <iostream>

using namespace std;

int main(){
    int n1{}, n2{};

    cout << boolalpha; // Will display true/false instead of 1/0 for booleans
    cout << "Enter 2 integers separated by a space: ";
    cin >> n1 >> n2;

    cout << n1 << " > " << n2 << "? " << (n1 > n2) << endl;
    cout << n1 << " >= " << n2 << "? " << (n1 >= n2) << endl;
    cout << n1 << " < " << n2 << "? " << (n1 < n2) << endl;
    cout << n1 << " <= " << n2 << "? " << (n1 <= n2) << endl;
    // cout << n1 << "<=> " << n2 << "? " << (n1 <=> n2) << endl; (C++ 20 or greater)

    const int lower{10}, upper{20};

    cout << "\nEnter an integer greater than " << lower << ": ";
    cin >> n1;
    cout << n1 << " > " << lower << " is " << (n1 > lower) << endl << endl;

    cout << "\nEnter an integer that is less than or equal to " << upper << ": ";
    cin >> n1;
    cout << n1 << " < " << upper << " is " << (n1 < upper) << endl << endl;

    return 0;
}