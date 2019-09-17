// Create a rock paper scissors game
#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    vector<string> choices = {"rock", "paper", "scissors"};
    string computer_choice;

    char user_choice{' '};
    string full_word;
    int variable;
    int random_variable;
    string winner;

    cout << "This is a rock, paper, scissors game:" << endl;

    while(user_choice != 'q'){
        cout << "Enter any of these choices followed by a one or two digit number:" << endl;
        cout << "r - rock" << endl;
        cout << "p - paper" << endl;
        cout << "s - scissors" << endl;
        cout << "q - to quit program" << endl;
        cout << endl;

        cin >> user_choice >> variable;

        // Create a 'random' value for the random_variable variable using the modulus operator.
        if(variable % 5 == 0){
            random_variable = 0;
        }
        else if(variable % 6 == 0){
            random_variable = 1;
        }
        else {
            random_variable = 2;
        }

        // Select a choice for the computer based on the second input given.
        switch(random_variable){
            case 0: computer_choice = choices[random_variable];
            break;
            case 1: computer_choice = choices[random_variable];
            break;
            case 2: computer_choice = choices[random_variable];
            break;
            default:
            computer_choice = "invalid input";
            break;
        }

        // Select the full word for the choice given by the user.
        switch(user_choice){
            case 'r': full_word = choices[0];
            break;
            case 'p': full_word = choices[1];
            break;
            case 's': full_word = choices[2];
            break;
            default:
            full_word = "not a valid choice";
            break;
        }

        // See who the winner is.
        if(full_word == "rock" && computer_choice == "rock"){
            winner = "neither";
        }
        else if(full_word == "rock" && computer_choice == "paper"){
            winner = "the machine";
        }
        else if(full_word == "rock" && computer_choice == "scissors"){
            winner = "you";
        }
        else if(full_word == "paper" && computer_choice == "paper"){
            winner = "neither";
        }
        else if(full_word == "paper" && computer_choice == "rock"){
            winner = "you";
        }
        else if(full_word == "paper" && computer_choice == "scissors"){
            winner = "the machine";
        }
        else if(full_word == "scissors" && computer_choice == "scissors"){
            winner = "neither";
        }
        else if(full_word == "scissors" && computer_choice == "rock"){
            winner = "the machine";
        }
        else if(full_word == "scissors" && computer_choice == "paper"){
            winner = "you";
        }
        else{
            cout << "error";
        }

        // Display results
        cout << "You chose " << full_word << " and the machine chose " << computer_choice << endl;
        cout << "The winner is " << winner << "!" << endl;

        // Endgame
        cout << endl;
        cout << "Press 'y' to finish...";
        cin.ignore(999, 'y');
        return 0;

    }

}