#include<iostream>
#include<vector>

using namespace std;

int main()
{
    for(int i{0}, j{5}; i <= 5; i++, j++)
        cout << i << " + " << j << " = " << (i + j) << endl;
    cout << endl;

    for(int i{1}; i <= 100; i++)
        cout << i << ((i % 10 == 0) ? "\n" : " ");
    cout << endl;

    vector<int> nums {10, 20, 30, 40, 50};
    for(int i{0}; i < nums.size(); i++)
        cout << nums[i] << endl;
    
    return 0;
}
