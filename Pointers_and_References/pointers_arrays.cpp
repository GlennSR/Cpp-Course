// Section 12
// Pointers referencing and array

#include <iostream>

using namespace std;

int main()
{
    int scores [] = {100, 95, 89};
    int *score_ptr = scores;

    cout << "\nValue of scores: " << scores << endl;
    cout << "Value of score_ptr: " << score_ptr << endl;

    cout << "\nArray Subscript notation: -----------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    
    cout << "\nPointer Subscript notation: -----------" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    cout << "\nArray offset notation: -----------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    cout << "\nPointer offset notation: -----------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    return 0;
}
