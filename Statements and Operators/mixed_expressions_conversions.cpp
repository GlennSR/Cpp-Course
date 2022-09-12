#include <iostream>

using namespace std;

int main(){
    int total {}, n1 {}, n2 {}, n3{};
    const int count {3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> n1 >> n2 >> n3;
    total = n1 + n2 + n3;

    double average {0.0};
    average = static_cast<double>(total) / count; // Convert total to double and the compiler will then divide double/int and get a double
    // average = (double)total / count; // Old-Style: Obsolete

    cout << "The 3 numbers are: " << n1 << ", " << n2 << ", " << n3 << endl;
    cout << "The sum is: " << total << endl;
    cout << "The average is: " << average << endl << endl;

    return 0;
}