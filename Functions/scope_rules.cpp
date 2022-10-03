#include<iostream>

using namespace std;

int num{300};

void global_example(){
    cout << "\nGlobal variable is: " << num << " in global_example - start\n";
    num *= 2;
    cout << "\nGlobal variable is: " << num << " in global_example - end\n";
}

void static_local_example(){
    static int num{5000}; // local to static_local_example - retains its value between calls
    cout << "Local static is: " << num << " in static local example - start\n";
    num += 1000;
    cout << "Local static is: " << num << " in static local example - end\n";
}

void local_example(int x){
    int num{1000};
    cout << "Local num is: " << num << " in local_example - start\n";
    num = x;
    cout << "Local num is: " << num << " in local_example - end\n";
}

int main()
{
    int n{100}, n1{500};

    cout << "Local n is: " << n << " in main\n"; 

    { // Creating a new level of scope
        int n{200};
        cout << "Local n is: " << n << " in inner block in main\n"; 
        cout << "Inner block in main can see out - n1 is: " << n1 << endl;
    }

    cout << "Local n is: " << n << " in main\n\n"; // print 100

    local_example(10);

    global_example();
    global_example();

    static_local_example();
    static_local_example();

    return 0;
}

