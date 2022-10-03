#include<iostream>
#include<vector>
#include<cctype>

using namespace std;

void display_menu();
char to_uppercase(char);
void print_vector(const vector<int> &);
void add_numbers(vector<int> &);
void calc_mean(const vector<int> &);
void find_smaller_number(const vector<int> &);
void find_largest_number(const vector<int> &);
void empty_list(vector<int> &);
void find_number(const vector<int> &);
void quit();

int main()
{
    char option{};
    vector<int> vec{};

    do{
        display_menu();
        cin >> option;
        option = to_uppercase(option);
        cout << endl;

        switch (option)
        {
        case 'P':
            print_vector(vec);
            break;
        case 'A':
        {
            add_numbers(vec);
            break;
        }
        case 'M':
            calc_mean(vec);
            break;
        case 'S':
            find_smaller_number(vec);
            break;
        case 'L':
            find_largest_number(vec);
            break;
        case 'C':
            empty_list(vec);
            break;
        case 'F':
            find_number(vec);
            break;
        case 'Q':
            quit();
            break; 
        default:
            cout << "Unknown option, please try again...\n";
            break;
        }
    }while(option != 'q' && option != 'Q');

    return 0;
}

void display_menu(){
    cout << "-----------------------------------\n";
    cout << "P - Print numbers\n";
    cout << "A - Add a number\n";
    cout << "M - Display mean of the numbers\n";
    cout << "S - Display the smallest number\n";
    cout << "L - Display the largest number\n";
    cout << "F - Search for a number in the list\n";
    cout << "C - Empty the list\n";
    cout << "Q - Quit\n\n";
    cout << "Choose an option: ";
}

char to_uppercase(char option){
    return toupper(option);
}

void print_vector(const vector<int> &vec){
    if(vec.empty()){
        cout << "[] - the list is empty, add numbers first!\n";
    }
    else{
        cout << "[ ";
        for(auto val: vec)
            cout << val << " ";
        cout << "]" << endl;
    }
}

void add_numbers(vector<int> &vec){
    int number{};
    cout << "What number would you like to add? ";
    cin >> number;
    vec.push_back(number);
    cout << number << " added\n";
}

void calc_mean(const vector<int> &vec){
    if(vec.empty()){
        cout << "Unable to calculate the mean - list is empty\n";
    }
    else{
        int sum{};
        for(auto val: vec)
            sum += val;
        cout << "The mean of the list numbers is: " << static_cast<double>(sum)/vec.size() << endl;
    }
}

void find_smaller_number(const vector<int> &vec){
    if(vec.empty()){
        cout << "Unable to determine the smallest number - list is empty\n";
    }
    else{
        int small = vec[0];
        for(auto val: vec)
            if(val <= small)
                small = val;
        cout << "The smallest number is " << small << endl;
    }
}

void find_largest_number(const vector<int> &vec){
    if(vec.empty()){
        cout << "Unable to determine the largest number - list is empty\n";
    }
    else{
        int largest = vec[0];
        for(auto val: vec)
            if(val >= largest)
                largest = val;
        cout << "The largest number is " << largest << endl;
    }
}

void empty_list(vector<int> &vec){
    vec.clear();
    cout << "Emptying the list...\nList is empty - []" << endl;
}

void find_number(const vector<int> &vec){
    if(vec.empty()){
        cout << "Unable to find number - list is empty\n";
    }
    else{
        int number{};
        cout << "What number you want to find? ";
        cin >> number;

        int count{};
        for(auto val: vec)
            if(val == number)
                ++count;
        if(count == 0)
            cout << "\nThe number " << number << " is not in the list\n";
        else
            cout << "\nThe number " << number << " appears " << count << " time(s) in the list\n"; 
    }
}

void quit(){
    cout << "Exiting the program, bye!\n";
}