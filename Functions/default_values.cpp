/*
Default values in functions are used to set fixed values to variables that will be used if the user don't provide then
when calling the function.

We define the default values either in the funtion prototype or in the function itself, never in both.
*/

#include<iostream>
#include<iomanip>

using namespace std;

double calc_cost(double = 100.0, double tax_rate = 0.06, double shipping = 3.5);

int main()
{
    double cost{};
    cost = calc_cost(100.0, 0.08, 4.25); // Don't use the default values

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(100.0, 0.08); // Uses default shipping value of 3.5
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(200.0); // Uses default shipping value of 3.5 and tax_rate of 0.06
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(); // Uses all the default values
    cout << "Cost is: " << cost << endl;

    return 0;
}

double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost + (base_cost * tax_rate) + shipping;
}
