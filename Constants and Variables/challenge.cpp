#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, welcome to Glenio's Carpet Cleaning Services\n\n";
    cout << "How many small rooms would you like to clean? ";
    int number_of_s_rooms {0};
    cin >> number_of_s_rooms;

    cout << "How many large rooms would you like to clean? ";
    int number_of_l_rooms {0};
    cin >> number_of_l_rooms;

    const double price_per_s_room {25.0};
    const double price_per_l_room {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days

    cout << "\nEstimate for carpet cleaning service\n";
    cout << "Number of small rooms: " << number_of_s_rooms << endl;
    cout << "Number of large rooms: " << number_of_l_rooms << endl;
    cout << "Price per small room: $" << price_per_s_room << endl;
    cout << "Price per large room: $" << price_per_l_room << endl;

    double cost = price_per_s_room * number_of_s_rooms + price_per_l_room * number_of_l_rooms;
    cout << "Cost: $" << cost << endl;

    double tax = cost * sales_tax;
    cout << "Tax: $" << tax << endl;
    cout << "===========================================" << endl;
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days\n";

    return 0;
}
