// Create a program that finds the mode, min and max of a string
// This is the same code as last exercise but now we just display the first and last element in the vector.

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::sort;
using std::max_element;

// Return the iterator of the element with the maximum number of copies(elements) in a vector.
int mode_finder_iterator(vector<int> s){

    // Find the maximum value in the vector.
    int maximum;
    maximum = *max_element(s.begin(), s.end());

    // Return the iterator of that maximum
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == maximum && maximum > 1){
            return i;
        }
    }
    return -1;
}

// Function that returns a vector with the number of copies in a vector according to their subscript.
vector<int> counter_func(vector<int> set){

    vector<int> copy = set;
    vector<int> counter_Vector;
    int counter;
    
    for(int i=0; i < set.size(); ++i){
        counter = 0;
        for( auto x : copy){
            if(set[i] == x){
                counter += 1;
            }
        }
        counter_Vector.push_back(counter);
    }

    return counter_Vector;

}

int main(void)
{
    string my_Input;
    vector<string> words;

    cout << "This programs returns the mode of a set. It will return a single mode even if there are more than one mode." << endl;
    cout << "Enter a bunch of whole numbers: ";
    getline(cin, my_Input); // The input will be stored in a single string.
    cin.ignore(999, '\n');

    // Split the sentence into words.
    string word{""};
    for(int i=0; i < my_Input.size(); ++i){
        if(my_Input[i] == ' '){
            // If you find a space, then the word you have been building is added to the 'words' vector.
            words.push_back(word);
            word = "";
        }
        else
        {
            // The word is build up with more characters that are not ' ' empty spaces.
            word += my_Input[i];

            // If you get to the last character in the sentence, then add the current word into the vector.
            if(i == (my_Input.size() - 1)) {
                words.push_back(word);
            }
        }        
    }

    // We then take those numbers and convert them to int types. Add them to the new int vector "my_Set".
    vector<int> my_Set;
    for(auto x : words) {
        my_Set.push_back(stoi(x));
    }

    // Sort the set
    sort(my_Set.begin(), my_Set.end());

    // Find how many copies of that element.
    vector<int>counter_of_Myset = counter_func(my_Set);

    int mode_iterator = mode_finder_iterator(counter_of_Myset);
    if(mode_iterator != -1){
        cout << "The mode of your set is " << my_Set[mode_iterator] << endl;
    }
    else{
        cout << "There may be more than one mode in your set or none." << endl;
    }

    // Dsiplaying the lowest and highest number in the vector.
    cout << "This is the lowest number in the set: " << my_Set[0] << endl;
    cout << "This is the highest number in the set: " << my_Set.back() << endl;
    

    return 0;
    
}