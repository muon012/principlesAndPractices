// Create a simple calculator program that takes two operands (double types )and an operator.

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void){

    // Declare the variables.
    double num_1{};
    double num_2{};
    char oper{' '};
    double result{};

    cout << "Enter two digits followed by an operator (+, -, *, /): ";
    cin >> num_1 >> num_2 >> oper;

    switch(oper){
        case '+':
            result = num_1 + num_2;
            cout << "The sum of " << num_1 << " and " << num_2 << " is " << result << endl;
            break;
        case '-':
            result = num_1 - num_2;
            cout << "The difference of " << num_1 << " and " << num_2 << " is " << result << endl;
            break;
        case '*':
            result = num_1 * num_2;
            cout << "The product of " << num_1 << " and " << num_2 << " is " << result << endl;
            break;
        case '/':
            result = num_1 / num_2;
            cout << "The quotient of " << num_1 << " and " << num_2 << " is " << result << endl;
            break;
        default:
            cout << "Sorry, I didn't understand you." << endl;
            break;
    }

    return 0;
}