// Challenge 1: Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City{
    std::string name;
    long population;
    double cost;
};

struct Country{
    std::string name;
    std::vector<City> cities;
};

struct Tours
{
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
    { "Tour Ticket Prices from Miami",
        {
            {
                "Colombia", {
                    { "Bogota", 8778000, 400.98 },
                    { "Cali", 2401000, 424.12 },
                    { "Medellin", 2464000, 350.98 },
                    { "Cartagena", 972000, 345.34 }
                },
            },
            {
                "Brazil", {
                    { "Rio de Janeiro", 13500000, 567.45 },
                    { "Sao Paulo", 11310000, 975.45 },
                    { "Salvador", 18234000, 855.99 }
                },
            },
            {
                "Chile", {
                    { "Valdivia", 260000, 569.12 },
                    { "Santiago", 7040000, 520.00 }
                },
            },
            {
                "Argentina", {
                    { "Buenos Aires", 3010000, 728.77 }
                }
            },
        }
    };

    const int total_length {70};
    int title_length = tours.title.length();

    std::cout << "1234567890123456789012345678901234567890123456789012345678901234567890\n" << std::endl;
    std::cout << std::setw(total_length/2 - title_length/2) << "" << std::right << tours.title << std::endl << std::endl;

    std::cout << std::setw(20) << std::left << "Country"
              << std::setw(20) << std::left << "City"
              << std::setw(20) << std::left << "Population"
              << std::setw(20) << std::left << "Price"
              << std::endl;

    std::cout << std::setw(total_length) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');

    for(auto country: tours.countries){
        std::cout << std::setw(20) << std::left << country.name;
        for(auto city: country.cities){
            std::cout << std::setw(20) << std::left << city.name
                      << std::setw(20) << std::left << city.population
                      << std::setw(20) << std::left << city.cost
                      << std::endl;
            std::cout << "                    ";
        }
        std::cout << std::endl;
    }

    return 0;
}

