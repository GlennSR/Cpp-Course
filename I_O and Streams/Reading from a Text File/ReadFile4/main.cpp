// Read and display Yellow by ColdPlay using unformatted get
#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("music.txt");
    if(!in_file){
        std::cerr << "Problem opening file\n";
        return 1;
    }
    
    char c{};
    while(in_file.get(c))
        std::cout << c;
    
    std::cout << std::endl;
    in_file.close();

    return 0;
}
