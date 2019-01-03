// Program that calculates how much money you have from the amount of coins you posses

#include<iostream>

using namespace std;

int main(){

    int num_pennies{};
    int num_nickels{};
    int num_dimes{};
    int num_quarters{};
    int num_half{};
    int num_one{};

    cout << "Enter the amount of pennies you have: ";
    cin >> num_pennies;
    cout << "Enter the amount of nickels you have: ";
    cin >> num_nickels;
    cout << "Enter the amount of dimes you have: ";
    cin >> num_dimes;
    cout << "Enter the amount of quarters you have: ";
    cin >> num_quarters;
    cout << "Enter the amount of half-dollar coins you have: ";
    cin >> num_half;
    cout << "Enter the amount of dollar coins you have: ";
    cin >> num_one;

    if(num_pennies == 1){
        cout << "You have " << num_pennies << " penny." << endl;
    }
    else{
        cout << "You have " << num_pennies << " pennies." << endl;
    }
    if(num_nickels == 1){
        cout << "You have " << num_nickels << " nickel." << endl;
    }
    else{
        cout << "You have " << num_nickels << " nickels." << endl;
    }
    if(num_dimes == 1){
        cout << "You have " << num_dimes << " dime." << endl;
    }
    else{
        cout << "You have " << num_dimes << " dimes." << endl;
    }
    if(num_quarters == 1){
        cout << "You have " << num_quarters << " quarter." << endl;
    }
    else{
        cout << "You have " << num_quarters << " quarters." << endl;
    }
    if(num_half == 1){
        cout << "You have " << num_half << " half-dollar coin." << endl;
    }
    else{
        cout << "You have " << num_half << " half-dollar coins." << endl;
    }
    if(num_one == 1){
        cout << "You have " << num_one << " one-dollar coin." << endl;
    }
    else{
        cout << "You have " << num_one << " one-dollar coins." << endl;
    }

    double total = num_pennies * .01 + num_nickels * .05 + num_dimes * .1 + num_quarters * .25 + num_half * .5 + num_one;
    cout << "The total amount in dollars you have is: $" << total << endl;

    return 0;
    }