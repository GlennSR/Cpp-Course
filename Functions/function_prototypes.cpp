#include<iostream>

using namespace std;

const double pi{3.14159};

// Prototypes
double calc_area_circle(double);
// or double calc_area_circle(double radius); // Both work
void area_circle();

int main()
{
    area_circle();
    
    return 0;
}


void area_circle(){
    double radius{};
    cout << "\nEnter circle's radius: ";
    cin >> radius;

    cout << "The circle's area is: " << calc_area_circle(radius) << endl;
}

double calc_area_circle(double radius){
    return pi * radius * radius;
}