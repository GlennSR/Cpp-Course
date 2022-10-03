#include<iostream>

using namespace std;

int main()
{
    int *int_ptr{nullptr};
    int_ptr = new int;
    cout << int_ptr;
    delete int_ptr;

    cout << "\n------------------\n";
    size_t size{0};
    double *temp_str{nullptr};
    
    cout << "How many temps: ";
    cin >> size;
    temp_str = new double[size];

    cout << temp_str << endl;

    delete [] temp_str;

    return 0;
}
