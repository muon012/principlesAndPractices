// In this exercise, we are redowing "try_this_1.cpp" using switch statements rather than if-statements

#include<iostream>

using namespace std;

int main(void){

    // Define the currency unit.
    char currency{' '}; // Use whitespce to initialize char types, or any other 'convenient' character.

    // Declare and initialize the amount of the currency to be given.
    double amount{};

    // Define the converison rates
    constexpr double yen = .0094;
    constexpr double kroner = .1471;
    constexpr double pound = 1.209;

    cout << "Enter a currency ('y' for yen, 'k' for krone, 'p' for pound) type followed by the amount:\n";
    cin >> currency >> amount;

    switch(currency){
        case 'y':
        case 'Y':
            cout << "You have " << yen * amount << " dollars." << endl;
            break;
        case 'k':
        case 'K':
            cout << "You have " << kroner * amount << " dollars." << endl;
            break;
        case 'p':
        case 'P':
            cout << "You have " << pound * amount << " dollars." << endl;
            break;
        default:
            cout << "Sorry, I don't know the conversion rate for that one." << endl;
            break;
    }
}