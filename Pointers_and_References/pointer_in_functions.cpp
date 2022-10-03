#include<iostream>
#include<string>
#include<vector>

using namespace std;

void double_data(int *int_ptr);
void display(const vector<string> *const v);
void display(int *array, int sentinel);

int main()
{
    int value{10};
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    int *int_ptr{nullptr};
    cout << "-----------------------------\n";
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;
    

    cout << "\n-----------------------------\n";
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);

    cout << "\n-----------------------------\n";
    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);

    return 0;
}

void double_data(int *int_ptr){
    *int_ptr *= 2;
}

void display(const vector<string> *const v){
    // (*v).at(0) = "Funny"; ERROR
    for(auto str: *v)
        cout << str << " ";
    cout << endl;
    //v = nullptr ERROR
}

void display(int *array, int sentinel){
    while(*array != sentinel)
        cout << *array++ << " ";
    cout << endl;
}