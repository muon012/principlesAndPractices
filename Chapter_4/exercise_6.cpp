// Create a program that that takes in a digit and spells it back out, and vice-versa.

#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

string digit_or_word(string s, vector<string> digits, vector<string> letters) {

    // If the string is greater than 1 character then the string is a word.
    if(s.size() > 1){

        // Loop to check if the word is in the list of spelled out numbers.
        for(int i{}; i < letters.size(); ++i){
            if(s == letters[i]){
                return digits[i]; // Return such number as a digit.
            }
        }
        return "Not a number";
    }
    else if(s.size() == 1){

        // Loop to check if the digit is in the list of numbers.
        for(int i{}; i < digits.size(); ++i){
            if(s == digits[i]){
                return letters[i]; // Return such digit as a spelled out word.
            }
        }
        return "Not a digit";
    }
    else{
        return "Unknown errror";
    }
}


int main(void){

    // Store the data in vectors
    vector<string> numbers  = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Enter a number either as a digit i.e. 4, 6, 0 or as a word ('three', 'one'). Enter 'Ctrl + D to exit:   " << endl;
    string response{" "};
    while(cin >> response){
        cout << "You entered " << response << ". The program replied " << digit_or_word(response, numbers, words) << endl; 

    }

    return 0;
}