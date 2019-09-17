// Modify exercise 5 to accept spelled words as well as digits
// This program does not catch the errors.

#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int return_digit(string s, vector<string> words){
    for(int i = 0; i < words.size(); ++i){
        if( s == words[i]){
            return i;
        }
    }
    return -1;
}

int return_integer(string s, vector<int> digits){
    for(int i=0; i < digits.size(); ++i){
        if(stoi(s) == digits[i]){
            return i;
        }
    }
    return -1;
}

int main(void){

    vector<int> numbers  = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


    // Declare the variables.
    string num_1{};
    string num_2{};
    char oper{' '};
    double result{};

    cout << "Enter two digits followed by an operator (+, -, *, /): ";
    cin >> num_1 >> num_2 >> oper;

    // Try to convert the string inputs into int types.
    int var_1 = return_digit(num_1, words); // Check if input was written as word.
    if(var_1 == -1){ // If it wasn't written as a word, then try to change it into an int type.
        var_1 = return_integer(num_1, numbers);
    }

    // Repeat previous steps for the second input.
    int var_2 = return_digit(num_2, words);
    if(var_2 == -1){
        var_2 = return_integer(num_2, numbers);
    }

    // If both inputs were successfully changed into int types, then proceed as normal.
    if(var_1 != -1 && var_2 != -1){

        switch(oper){
            case '+':
                result = var_1 + var_2;
                cout << "The sum of " << num_1 << " and " << num_2 << " is " << result << endl;
                break;
            case '-':
                result = var_1 - var_2;
                cout << "The difference of " << num_1 << " and " << num_2 << " is " << result << endl;
                break;
            case '*':
                result = var_1 * var_2;
                cout << "The product of " << num_1 << " and " << num_2 << " is " << result << endl;
                break;
            case '/':
                result = double(var_1) / var_2;
                cout << "The quotient of " << num_1 << " and " << num_2 << " is " << result << endl;
                break;
            default:
                cout << "Sorry, I didn't understand you." << endl;
                break;
        }
    }
    else{
        cout << "Something went wrong." << endl;
    }

    return 0;
}