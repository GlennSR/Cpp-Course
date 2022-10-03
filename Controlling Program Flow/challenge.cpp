#include<iostream>
#include<vector>

using namespace std;

int main()
{
    char option{};
    vector<int> vec{};

    do{
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
        cin >> option;
        cout << endl;

        switch (option)
        {
        case 'P':
        case 'p':
            if(vec.empty()){
                cout << "[] - the list is empty, add numbers first!\n";
            }
            else{
                cout << "[ ";
                for(auto val: vec)
                    cout << val << " ";
                cout << "]" << endl;
            }
            break;
        case 'A':
        case 'a':
        {
            int number{};
            cout << "What number would you like to add? ";
            cin >> number;
            vec.push_back(number);
            cout << number << " added\n";
            break;
        }
        case 'M':
        case 'm':
            if(vec.empty()){
                cout << "Unable to calculate the mean - list is empty\n";
            }
            else{
                int sum{};
                for(auto val: vec)
                    sum += val;
                cout << "The mean of the list numbers is: " << static_cast<double>(sum)/vec.size() << endl;
            }
            break;
        case 'S':
        case 's':
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
            break;
        case 'L':
        case 'l':
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
            break;
        case 'C':
        case 'c':
            vec.clear();
            cout << "Emptying the list...\nList is empty - []" << endl;
            break;
        case 'F':
        case 'f':
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
                cout << "\nThe number " << number << " appears " << count << " time(s) in the list\n"; 
            }
            break;
        case 'Q':
        case 'q':
            cout << "Exiting the program, bye!\n";
            break; 
        default:
            cout << "Unknown option, please try again...\n";
            break;
        }
    }while(option != 'q' && option != 'Q');




    return 0;
}
