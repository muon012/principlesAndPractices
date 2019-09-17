// Create a program using selection (if-statements) that chooses the right currency conversion

// IF-ELSE STATEMENTS
// Actually, c++ doesn't have else-if statements. The else-if part that we normally think to be an else-if is actually 
// an if-statement that has been inserted in the "else" part of the if-statement.

// CONTEXPR TYPES
// constexpr is a "constant expression" type. These are expressions that are initialized during compilation. 

// CONST TYPES
// const are constant literals that are initialized during run-time. 

// CONSTEXPR VS CONST
// If you know the constant will not change, ever, even before the program is run, like the value of pi or c then use
// constexpr. But if the constant variable is not initialized until you run the program, like initializing the constant
// using an argument from a function, then use const. 
// For example, in a program that calculates tax rates, the rate values could be defined using constexpr but the 
// annual income of the individual could be stored in a const because this constant wouldn't be known before the
// program is compiled and run, and it will also not change throughout the whole program.


#include<iostream>

using namespace std;

int main(void)
{
    // We will use the following conversion rates:
    // 1 yen = .0094 dollars
    // 1 krone = .1471 dollars
    // 1 pound = 1.209 dollars

    // Define the currency unit.
    char currency{' '}; // Use whitespce to initialize char types.

    // Declare and initialize the amount of the currency to be given.
    double amount{};

    // Define the converison rates
    constexpr double yen = .0094;
    constexpr double kroner = .1471;
    constexpr double pound = 1.209;

    cout << "Enter a currency ('y' for yen, 'k' for krone, 'p' for pound) type followed by the amount:\n";
    cin >> currency >> amount;

    if(currency == 'y')
        cout << "You have " << yen * amount << " dollars." << endl;
    else if(currency == 'k')
        cout << "You have " << kroner * amount << " dollars." << endl;
    else if(currency == 'p')
        cout << "You have " << pound * amount << " dollars." << endl;
    else
        cout << "Sorry, I don't know that unit." << endl;

    return 0;
}