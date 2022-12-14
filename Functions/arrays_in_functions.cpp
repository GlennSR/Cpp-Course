#include<iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

int main()
{
    int my_scores[] {100, 98, 96, 86, 84};

    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);

    return 0;
}

void print_array(const int arr[], size_t size){
    for(size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}


// Set each array element to value
// This changes the array because the function receives the location of the array, not a copy of it
void set_array(int arr[], size_t size, int value){
    for(size_t i{0}; i < size; ++i)
        arr[i] = value;
}
