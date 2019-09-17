// Write a program that reads words from the user, displays them back but bleeps out the ones that you don't like
// with the word 'BLEEP".

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void) {

    // Create vector with the letters I want to bleep out.
    vector<string> foul_words = {"the", "is", "are", "a", "an", "it", "it's", "have", "has", "do", "don't", "isn't"};
    
    string user_input = " ";
    string display_bleep = "BLEEP";

    cout << "Enter anything you want to type ('ctrl + D' to exit): ";

    while(cin >> user_input) {

        // Check if the input word is in the vector by looping through it. If it is, change the word to be displayed
        // into a 'BLEEP" then break out of the loop.
        for(int i{0}; i < foul_words.size(); ++i){
            if (user_input == foul_words[i]){
                user_input = display_bleep;
                break;
            }
        }

        // Display all the words back to the user, inlcuding those that were bleeped.
        cout << user_input << " ";
    }


    return 0;
}