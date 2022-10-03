/*In my program I used the two for loops to go through the lines and columns of the pyramid.
The first if-statement make the program display a ' ' if the column c is smaller or bigger than (s.length() - 1 - l) which changes for each line, for example, with 'ABC' we have 5 columns, than the first if will give us (s.length() - 1 - l = 2) so if c < 2 or c > 2 it displays ' ' or else it displays the character.
To display the characters of the pyramid I used an index variable that when c is smaller than the columns/2 the index wil increase, displaying the characters from begin to end, and when c >= columns/2 index will decrease, doing the inverse*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;

    cout << "Enter a word to generate the pyramid: ";
    cin >> s;

    int columns = s.length() * 2 - 1;
    int lines = s.length();

    for(int l{0}; l < lines; ++l){
        int index{0};
        for(int c{0}; c < columns; ++c){
            if(c < s.length() - 1 - l || c > columns - 1 - (s.length() - 1 - l) )
                cout << ' ';
            else{
                cout << s.at(index);
                if(c < columns/2)
                    index++;
                else
                    index--;
            }
        }
        cout << endl;
    }


    return 0;
}
