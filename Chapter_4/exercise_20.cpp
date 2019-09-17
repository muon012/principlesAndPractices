// Modify the previous program so that when you enter a name it will output that name's score.

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

    string name_to_search;
    cout << "Enter a name to search their score: ";
    cin >> name_to_search;

    int res = 0;
    bool found = false;
    for(size_t i=0; i < names.size(); ++i){
        if(names[i] == name_to_search){
            res = scores[i];
            found = true;
            break;
        }
    }

    if(found){
        cout << name_to_search << "'s score is: " << res << endl;
    }
    else
    {
        cout << "Name not found." << endl;
    }

    return 0;
    
}