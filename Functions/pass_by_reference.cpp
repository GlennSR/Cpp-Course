#include<iostream>
#include<vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

int main()
{
    int num{10};

    cout << "num before function pass_by_ref1(): " << num << endl;
    pass_by_ref1(num);
    cout << "num after function pass_by_ref1(): " << num << endl; 

    string name{"Frank"};
    cout << "name before function pass_by_ref2(): " << name << endl;
    pass_by_ref2(name);
    cout << "name after function pass_by_ref2(): " << name << endl; 

    vector<string> stooges{"Larry", "Moe", "Curly"};

    cout << "stooges before function pass_by_ref3(): ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after function pass_by_ref3(): ";
    print_vector(stooges); 
    
    return 0;
}

void pass_by_ref1(int &num){
    num = 1000;
}

void pass_by_ref2(string &s){
    s = "Changed";
}

void pass_by_ref3(vector<string> &v){
    v.clear();
}

void print_vector(const vector<string> &v){
    for(auto s: v)
        cout << s << " ";
    cout << endl;
}