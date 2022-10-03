#include<iostream>
#include<vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(vector<string>);
void print_vector(vector<string>);

int main()
{
    int num{10};

    cout << "num before function pass_by_value1(): " << num << endl;
    pass_by_value1(num);
    cout << "num after function pass_by_value1(): " << num << endl; 
    // It will print '10' because it doesn't change the actual variable, it changes the copy of it (a formal variable)

    vector<string> stooges{"Larry", "Moe", "Curly"};

    cout << "stooges before function pass_by_value2(): ";
    print_vector(stooges);
    pass_by_value2(stooges);
    cout << "stooges after function pass_by_value2(): ";
    print_vector(stooges); // It will print "Larry Moe Curly"

    return 0;
}

void pass_by_value1(int num){
    num = 100;
}

void pass_by_value2(vector<string> stooges){
    stooges.clear();
}

void print_vector(vector<string> vec){
    for(auto v: vec)
        cout << v << " ";
    cout << endl;
}
