#include<iostream>

using namespace std;

class Shallow{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() {return *data; }
    // Constructor
    Shallow(int d);
    // Copy Constructor
    Shallow(const Shallow &source);
    // Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source) : data{source.data}{
    cout << "Copy Contructor - shallow copy\n";
}

Shallow::~Shallow(){
    delete data;
    cout << "Destructor freeing data\n";
}

void display_shallow(Shallow s){
    cout << s.get_data_value() << endl;
}

int main()
{
    Shallow obj1{100};
    display_shallow(obj1);

    // ERROR, Shallow copy will copy the pointer, not what it is pointing to, so when obj1 is destroyed the 
    // address will be released, so obj2 will get invalid data
    Shallow obj2{obj1};
    obj2.set_data_value(1000);
    // display_shallow(obj1);
    // display_shallow(obj2);

    return 0;
}
