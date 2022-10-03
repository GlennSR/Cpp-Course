#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int random_num{};
    size_t count{10}; // Number of random numbers to generate
    int min{1}, max{6};

    // Seed the random number generator
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    for(int i{0}; i < count; ++i){
        random_num = rand() % max + min;
        cout << random_num << endl;
    }


    return 0;
}
