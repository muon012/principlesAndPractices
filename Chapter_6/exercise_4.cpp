// Define a Name_value class and re-do exercise 19 from Chapter 4.

// Create a program that takes a name-value pair. Add the names to a vector and the numbers to another keeping the 
// same order. No duplicated names allowed.Finally, display all the pairs back.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Name_value
{
    public:
        string name;
        int value;
};

int main(void)
{
    vector<Name_value> names_and_values;
    // Prompt the user.
    cout << "Enter value pairs of the form 'name score'. Input 'NoNAme 0' when there are no more names to add." << endl;

    string name;
    int score;
    while(true)
    {
        cout << "Name of student: ";
        cin >> name;
        if (name == "NoName") 
            break;
        cout << "Score of " << name << ": ";
        cin >> score;
        Name_value n;
        n.name = name;
        n.value = score;
        names_and_values.push_back(n);

    }

    // Display the results.
    cout << "Here is the list of people and their scores:" << endl;
    for(size_t i=0; i < names_and_values.size(); ++i){
        cout << names_and_values[i].name << '\t' << names_and_values[i].value <<endl;
    }

    return 0;
}