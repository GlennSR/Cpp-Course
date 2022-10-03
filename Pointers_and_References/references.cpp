#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int num{100};
    int &ref{num};

    cout << num << ", " << ref << endl;

    num = 200;
    cout << "\n----------------------\n";
    cout << num << ", " << ref << endl;

    ref = 300;
    cout << "\n----------------------\n";
    cout << num << ", " << ref << endl;

    // Using with range-based for-loops
    cout << "\n---------- Normal range-based for-loop ------------\n";
    vector<string> stooges {"Larry", "Moe", "Curly"};

    for(auto str: stooges)
        str = "Funny"; // it won't work, cause str is a COPY of the vector element
    
    for(auto str: stooges)
        cout << str << " "; // No change
    cout << endl;

    cout << "\n---------- Range-based for-loop with reference ------------\n";
    for(auto &str: stooges)
        str = "Funny"; // str is a reference to each vector element
    
    for(auto const &str: stooges) // Notice we are using const to not modify the elements
        cout << str << " "; // Now the elements will change
    cout << endl;

    cout << "\n---------- Normal for-loop ------------\n";
    for(int i{0}; i < stooges.size(); ++i)
        stooges.at(i) = "James"; // str is a reference to each vector element
    
    for(auto const &str: stooges) // Notice we are using const to not modify the elements
        cout << str << " "; // Now the elements will change
    cout << endl;

    return 0;
}
