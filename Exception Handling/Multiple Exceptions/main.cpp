#include <iostream>
#include <string>

double calculate_mpg(int miles, int gallons){
    if(gallons == 0)
        throw 0;
    if(miles < 0 || gallons < 0)
        throw std::string{"Negative value error"};
    return static_cast<double>(miles)/gallons;
}

int main()
{
    int miles {};
    int gallons {};
    double miles_per_gallon {};

    std::cout << "Enter the miles driven: ";
    std::cin >> miles;
    std::cout << "Enter the gallons used: ";
    std::cin >> gallons;

    try{
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    catch(int &ex){
        std::cerr << "Sorry, you can't divide by zero\n";
    }
    catch(std::string &ex){
        std::cerr << ex << std::endl;
    }
    catch(...){
        std::cerr << "Unknown exception\n";
    }
    std::cout << "Bye!\n";

    return 0;
}
