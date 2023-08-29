#include <iostream>
#include <memory>
#include <vector>

class Test{
private:
    int data;
public:
    Test() : data{0} { std::cout << "\tTest constructor (" << data << ")\n";}
    Test(int data) : data{data} { std::cout << "\tTest constructor (" << data << ")\n";}
    int get_data() const{return data;}
    ~Test() { std::cout << "\tTest destructor (" << data << ")\n";}
};

// Function prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(); // or auto make()
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);

int main()
{
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "How many data points do you want to enter? ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;
}

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(){ // or "auto make()"
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num){
    int data;
    for(int i{1}; i <= num; ++i) {
        std::cout << "Enter data point [" << i << "]: ";
        std::cin >> data;
        vec.push_back(std::make_shared<Test>(data));
    }
}

void display(const std::vector<std::shared_ptr<Test>> &vec){
    std::cout << "\nDisplaying vector data\n========================\n";
    for (const auto &v: vec)
    	std::cout << v->get_data() << std::endl;
    std::cout << "========================\n";
}