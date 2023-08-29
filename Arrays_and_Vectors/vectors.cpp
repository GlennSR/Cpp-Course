// Section 7 - Vectors

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int myints[] = {1,2,3,4,5,4,3,2,1};
    vector<int> v(myints,myints+9);                         // 1 2 3 4 5 4 3 2 1

    for(auto val: v)
        cout << val << endl;
    
    cout << "-----------------------\n";

    // vector<char> vowels; // emoty vector
    // vector<char> vowels(5); // 5 elements initialized with 0
    vector<char> vowels {'a', 'e', 'i', 'o', 'u'};

    // ACESSING ELEMENTS
    // aray sintax
    cout << vowels[0] << endl;
    // vectors sintax
    cout << vowels.at(4) << endl;


    // vector<int> test_scores(3); // 3 elements initialized with 0
    // vector<int> test_scores(3, 100); // 3 elements initialized with 100
    vector<int> test_scores {100, 98, 89};

    // ACESSING ELEMENTS
    cout << test_scores.at(0) << endl;
    cout << test_scores[1] << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

    // MODIFYING ELEMENTS
    cout << "\nEnter 3 scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    // DYNIAMICALLY CHANGING THE VECTOR SIZE AND ADDING ELEMENTS
    cout << "\nEnter a test score to add to the vector: ";

    int score_to_add;
    cin >> score_to_add;
    // Adding element to the end of the vector
    test_scores.push_back(score_to_add);

    cout << "\nEnter one more test score to add to the vector: ";
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now: " << endl;

    for(auto i = test_scores.begin(); i != test_scores.end(); i++){
        cout << *i << endl;
    }

    // EXCEPTION
    // cout << test_scores.at(10) << endl;

    // EXAMPLE OF 2-D VECTOR
    vector <vector<int>> movie_ratings {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };

    cout << "\nReviews from #1 reviewer using array sintax:\n";
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nReviews from #1 reviewer using vector sintax:\n";
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;


    return 0;
    
}
