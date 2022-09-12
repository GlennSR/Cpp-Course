#include <iostream>

using namespace std;

int main(){
    bool equal {false}, not_equal {false};

    cout << boolalpha; // Will display true/false instead of 1/0 for booleans
    // cout << noboolalpha; // Will display 1/0 for booleans (Standard)

    int n1{}, n2{};

    // cout << "Enter 2 integers separated by space: ";
    // cin >> n1 >> n2;
    // equal = (n1 == n2);
    // not_equal = (n1 != n2);
    // cout << "Equals? " << equal << endl;
    // cout << "Not equals? " << not_equal << endl << endl;

    // int char1{}, char2{};

    // cout << "Enter 2 characters separated by space: ";
    // cin >> char1 >> char2;
    // equal = (char1 == char2);
    // not_equal = (char1 != char2);
    // cout << "Equals? " << equal << endl;
    // cout << "Not equals? " << not_equal << endl << endl;

    double d1{}, d2{};

    cout << "Enter 2 doubles separated by space: ";
    cin >> d1 >> d2;
    equal = (d1 == d2);
    not_equal = (d1 != d2);
    cout << "Equals? " << equal << endl;
    cout << "Not equals? " << not_equal << endl << endl;

    cout << "Enter an integer and a double separated by space: ";
    cin >> n1 >> d1;
    equal = (n1 == d1);
    not_equal = (n1 != d1);
    cout << "Equals? " << equal << endl;
    cout << "Not equals? " << not_equal << endl << endl;

    return 0;
}