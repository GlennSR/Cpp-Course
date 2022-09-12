#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, welcome to Glenio's Carpet Cleaning Services\n\n";
    cout << "How many rooms would you like to clean? ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    cout << "=== USING LITERAL CONSTANTS === " << endl;
    cout << "\nEstimate for carpet cleaning service\n";
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << 32.5 << endl;
    cout << "Cost: $" << 32.5 * number_of_rooms << endl;
    cout << "Tax: $" << 32.5 * number_of_rooms * 0.06 << endl;
    cout << "===========================================" << endl;
    cout << "Total estimate: $" << 32.5 * number_of_rooms * (1 + 0.06) << endl;
    cout << "This estimate is valid for " << 30 << " days\n\n";

    cout << "=== USING DEFINED CONSTANTS === " << endl;

    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days

    cout << "\nEstimate for carpet cleaning service\n";
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * 0.06 << endl;
    cout << "===========================================" << endl;
    cout << "Total estimate: $" << price_per_room * number_of_rooms * (1 + sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days\n";

    return 0;
}
