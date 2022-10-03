#include<iostream>

using namespace std;

int main()
{
    char selection{};
    do{
        cout << "\n---------------------\n";
        cout << "1. Do this\n";
        cout << "2. Do that\n";
        cout << "3. Do something else\n";
        cout << "Q. Quit\n";
        cout << "\nEnter your selection: ";
        cin >> selection;

        switch (selection)
        {
        case '1':
            cout << "You chose 1 - Doing this\n";
            break;
        case '2':
            cout << "You chose 2 - Doing that\n";
            break;
        case '3':
            cout << "You chose 3 - Doing something else\n";
            break;
        case 'Q':
        case 'q':
            cout << "Goodbye...\n";
            break;
        default:
            cout << "Unknown option -- try again...\n";
            break;
        }
    }while(selection != 'Q' && selection != 'q');


    return 0;
}
