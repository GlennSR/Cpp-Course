#include<iostream>
#include<string>
#include<vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

int main()
{
    print(100);
    print('A'); //character is always converted to int, so it should print 65 ('A' in ASCII table)

    print(123.5);
    print(123.5F);

    print("C-style string"); // Converted into a C++ string

    string s{"C++ string"};
    print(s);

    print("C-style string", s);

    print({"Larry", "Moe", "Curly"});

    return 0;
}

void print(int n){
    cout << "Printing int: " << n << endl;
}

void print(double n){
    cout << "Printing double: " << n << endl;
}

void print(string s){
    cout << "Printing string: " << s << endl;
}

void print(string s1, string s2){
    cout << "Printing string s1: " + s1 << endl;
    cout << "Printing string s2: " + s2 << endl;
}

void print(vector<string> vec){
    cout << "Printing vector of strings: ";
    for(auto v: vec)
        cout << v + " ";
    cout << endl;
}
