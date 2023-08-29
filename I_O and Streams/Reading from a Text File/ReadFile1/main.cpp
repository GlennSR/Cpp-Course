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
    
    in_file >> name >> age >> heigth; // Remember that cin stops when encounter a blank space. Use getline to get the entire line
    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << std::setprecision(2) << std::fixed << heigth << std::endl;
    in_file.close();

    return 0;
}
