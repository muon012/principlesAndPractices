// Create a program that takes a name-value pair. Add the names to a vector and the numbers to another keeping the 
// same order. No duplicated names allowed.Finally, display all the pairs back.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    vector<string> names;
    vector<int> scores;
    // Prompt the user.
    cout << "Enter value pairs of the form 'name score'. Input 'NoNAme 0' when there are no more names to add." << endl;
    string name;
    int score;
    while(cin >> name >> score && name != "NoName"){
        if(count(names.begin(), names.end(), name) == 0){
            names.push_back(name);
            scores.push_back(score);
        }
    }

    // Display the results.
    cout << "Here is the list of people and their scores:" << endl;
    for(size_t i=0; i < names.size(); ++i){
        cout << names[i] << '\t' << scores[i] <<endl;
    }

    return 0;
}