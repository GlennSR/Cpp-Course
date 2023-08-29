#include <iostream>

void func_a();
void func_b();
void func_c();

void func_a(){
    std::cout << "Starting func_a\n";
    func_b();
    std::cout << "Ending func_a\n"; 
}

void func_b(){
    std::cout << "Starting func_b\n";
    try{
        func_c();
    }
    catch(int &ex){
        std::cout << "Caught error in func_b\n";
    }
    std::cout << "Ending func_b\n"; 
}

void func_c(){
    std::cout << "Starting func_c\n";
    throw 100;
    std::cout << "Ending func_c\n"; 
}

int main()
{
    std::cout << "Starting main\n";
    try{
        func_a();
    }
    catch(int &ex){
        std::cout << "Caught error in main\n";
    }
    std::cout << "Finishing main\n";
    
    return 0;
}


