// Modify the last program to search for all the names with the given score.

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

    int score_to_search;
    cout << "Enter a score: ";
    cin >> score_to_search;

    cout << "People with score " << score_to_search << ": " << endl;
    string res;
    bool found = false;
    for(size_t i=0; i < scores.size(); ++i){
        if(scores[i] == score_to_search){
            cout << '-' << names[i] << endl;
            found = true;
        }
    }

    // If no person has that score, then display this.
    if(found == false){
        cout << "Score not found." << endl;
    }

    return 0;
}