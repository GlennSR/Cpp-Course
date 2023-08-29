#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

void header(){
    std::cout << std::setw(15) << std::left << "Student"
              << std::setw(5) << "Score\n";
    std::cout << "--------------------\n";
}

int process_score(const std::string correct_keys, const std::string student_keys){
    int score{};
    for(int i{0}; i < student_keys.length(); ++i){
            if(student_keys[i] == correct_keys[i])
                score++;
    }
    return score;
}

void print_average(const int total, const int count){
    std::cout << "--------------------\n";
    std::cout << std::setw(17) << std::left << "Average score"
              << static_cast<double>(total)/count << std::endl;
}

int main()
{
    std::ifstream in_file;
    in_file.open("responses.txt");
    if(!in_file){
        std::cerr << "Problem opening file\n";
        return 1;
    }
    
    std::string correct_keys;
    in_file >> correct_keys;
    std::cout << correct_keys << std::endl;

    std::string name, student_keys;
    int score {}, total {}, count {};
    std::vector<std::string> students, scores;

    header();

    while(in_file >> name >> student_keys){
        students.push_back(name);
        scores.push_back(student_keys);

        int score = process_score(correct_keys, student_keys);
        total += score;

        std::cout << std::setw(15) << std::left << name
                  << std::setw(4) << "" << score << std::endl;
        count++;
    }
    print_average(total, count);
    
    std::cout << std::endl;
    in_file.close();

    return 0;
}
