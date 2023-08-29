#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    std::ifstream in_file;
    std::string name;
    int age;
    double heigth;

    in_file.open("text.txt");
    if(!in_file){
        std::cerr << "Problem opening file\n";
        return 1;
    }
    std::cout << std::setprecision(2) << std::fixed;
    while(in_file >> name >> age >> heigth){
        std::cout << std::setw(10) << std::left << name
                  << std::setw(10) << age
                  << std::setw(10) << heigth << std::endl;
    }
    
    in_file.close();

    return 0;
}
