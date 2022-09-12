#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vector1;

    // Add to vector1
    vector1.push_back(10);
    vector1.push_back(20);

    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << vector1.size() << endl << endl;

    vector<int> vector2;

    // Add to vector2
    vector2.push_back(100);
    vector2.push_back(200);

    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << endl << endl;

    vector<vector<int>> vector2d;

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout << vector2d.at(0).at(0) << endl;
    cout << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << endl;
    cout << vector2d.at(1).at(1) << endl << endl;

    vector1.at(0) = 1000;

    cout << vector2d.at(0).at(0) << endl;
    cout << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << endl;
    cout << vector2d.at(1).at(1) << endl << endl;

    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    return 0;
}