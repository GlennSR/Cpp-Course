#include <iostream>
#include <memory>

class Test{
private:
    int data;
public:
    Test() : data{0} { std::cout << "Test constructor (" << data << ")\n";}
    Test(int data) : data{data} { std::cout << "Test constructor (" << data << ")\n";}
    int get_data() const{return data;}
    ~Test() { std::cout << "Test destructor (" << data << ")\n";}
};

void my_deleter(Test *ptr){
    std::cout << "Using my custom function deleter\n";
    delete ptr;
}

int main()
{
    {
        // Using a function
        std::shared_ptr<Test> ptr1{new Test{100}, my_deleter};
    }

    std::cout << "===============================\n";
    {
        // Using lambda expression
        std::shared_ptr<Test> ptr2 {new Test{200},
        [] (Test *ptr){
            std::cout << "Using my custom lambda deleter\n";
            delete ptr;
        }};
    }

    return 0;
}
