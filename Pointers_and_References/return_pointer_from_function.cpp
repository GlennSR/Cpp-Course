#include<iostream>

using namespace std;

int *create_array(size_t, int = 0);
void display(const int *const, size_t);

int main()
{
    int *my_array{nullptr};
    size_t size;
    int init_value{};

    cout << "How many values would you like to allocate? ";
    cin >> size;
    cout << "\nWhat value would you like them initialized to? ";
    cin >> init_value;

    my_array = create_array(size, init_value);
    cout << "\n-------------------------------\n";

    display(my_array, size);
    delete [] my_array;

    return 0;
}

int *create_array(size_t size, int init_value){
    int *new_storage{nullptr};
    new_storage = new int[size];
    for(size_t i{0}; i < size; ++i)
        *(new_storage + i) = init_value;
    return new_storage;
}

void display(const int *const array, size_t size){
    for(size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}
