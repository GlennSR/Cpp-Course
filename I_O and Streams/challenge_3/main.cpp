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

    std::string substr;
    int count{};
    std::cout << "Enter a word to be searched: ";
    std::cin >> substr;
    
    std::string word;
    int total_words{};
    while(in_file >> word){
        ++total_words;

        size_t found = word.find(substr);
        if (found != std::string::npos)
            ++count;
    }
    std::cout << total_words << " words were searched..." << std::endl;
    std::cout << "The substring " << substr << " was found " << count << " times\n";

    in_file.close();

    return 0;
}
