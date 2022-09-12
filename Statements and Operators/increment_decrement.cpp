/*
    Increment ++
    Decrement --

    Can be used with integers, floating point types and pointers

    Prefix ++num
    Postfix num++
*/

#include <iostream>

using namespace std;

int main(){

    int counter {10};
    int result {0};

    // Example 1 - Simple Increment
    cout << "EXAMPLE 1:\n";
    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl << endl;

    // Example 2 - Pre-increment
    counter = 10;
    result = 0;

    cout << "EXAMPLE 2:\n";
    cout << "Counter: " << counter << endl;

    result = ++counter;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl << endl;

    // Example 3 - Post-increment
    counter = 10;
    result = 0;

    cout << "EXAMPLE 3:\n";
    cout << "Counter: " << counter << endl;

    result = counter++;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl << endl;

    // Example 4 - Pre-increment and operation
    counter = 10;
    result = 0;

    cout << "EXAMPLE 4:\n";
    cout << "Counter: " << counter << endl;

    result = ++counter + 10;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl << endl;

    // Example 5 - Post-increment and operation
    counter = 10;
    result = 0;

    cout << "EXAMPLE 5:\n";
    cout << "Counter: " << counter << endl;

    result = counter++ + 10;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl << endl;

    return 0;
}