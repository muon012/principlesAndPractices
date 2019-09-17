// Write a number guessing program that guess your number in no more than 7 tries
#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


int main(void){

    // Prompt the user.
    cout << "Think of a (whole) number between 1 - 100. I will guess it." << endl;
    cout << "Press Enter to continue ";
    cin.ignore(999, '\n');

    // Create a vector to store the range of numbers.
    vector<int> ls;
    for(int i=0; i < 101; ++i){
        ls.push_back(i);
    }

    // Set the boundaries of the range and number of guesses.
    int upper = ls.back(); // This will be the upper limit.
    int lower = ls[0]; // This will be the lower limit.
    int guess = (upper - lower) / 2; // Make the guess be middle number between the upper and lower limit.
    int guess_counter = 1; // Make sure we don't pass more than 7 guesses.

    // User variable.
    string response{" "};

    while(response != "quit"){

        // Display the machine's guess.
        cout << "Is your number " << guess << "? Enter 'yes', 'more', or 'less' or 'quit' to exit. " << endl;
        cin >> response;

        // Decision making.
        if(response == "yes"){
            cout << "See, I can be a mind-reader too!" << endl;
            break;
        }
        else if(response == "more"){
            lower = guess;
            guess = (lower + upper) / 2; // Create a new guess.
            ++guess_counter; // Increase the guess counter.

        }
        else if(response == "less"){
            upper = guess;
            guess = (lower + upper) / 2; // Create a new guess.
            ++guess_counter; // Increase the guess counter.
        }
        else if(response == "quit"){
            cout << "Bye!" << endl;
            break;
        }
        else {
            cout << "Sorry, I don't understand your meaning." << endl;
        }
        
        // If we reach 7 guesses then break out of the loop
        if(guess_counter == 7){
            cout << "You win! I can't guess your number.";
            break;
        }

    }

    return 0;
}