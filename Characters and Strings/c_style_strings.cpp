#include<iostream>
#include<cstring> // for c-style string functions
#include<cctype> //for character-based fuctions

using namespace std;

int main()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // cout << first_name; // display garbage

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;

    cout << "--------------------------------\n";
    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters\n";
    cout << "and your last name has " << strlen(last_name) << " characters\n";

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout << "Your full name is " << full_name << endl;

    cout << "---------------------------------\n";
    cout << "Enter your full name: ";
    cin >> full_name; // Will not get the characters after the space, so it will only store the fisrt name
    cout << "Your full name is " << full_name << endl; // Will only show the fisrt name

    cout << "---------------------------------\n";
    cout << "Enter your full name: ";
    cin.getline(full_name, 50); // This function store all the characters until 50 or until find the null character \0
    cout << "Your full name is " << full_name << endl;

    // Comparing
    cout << "---------------------------------\n";
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same\n";
    else
        cout << temp << " and " << full_name << " are different\n";
    cout << "---------------------------------\n";

    // Using toupper()
    for(size_t i{0}; strlen(full_name); ++i)
        if(isalpha(full_name[i]))
            full_name[i] == toupper(full_name[i]);
    cout << "Your full name is " << full_name << endl;

    cout << "---------------------------------\n";
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same\n";
    else
        cout << temp << " and " << full_name << " are different\n";
    cout << "---------------------------------\n";
    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(full_name, temp) << endl;

    return 0;
}
