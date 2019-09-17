// What is the largest number of squares you can calculate from the previous exercise using int types?
// What about using double types?
// Answer: Both reach a limit at 10^9 sized values on my macbook air machine.
#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;
using std::pow;

int main(void)
{
    int square_counter = 0;
    int square_counter_double = 0;
    int total_grains = 0;
    double total_grains_double = 0;
    int square_value;
    double square_value_double;
    int limit;
    double limit_double;

    cout << "Enter a number that will serve as a limit ";
    cin >> limit;

    limit_double = limit;

    cout << limit_double << endl;

    // Loop until you get a value that reaches the limit. The answer will most likely be over the limit.
    for(int i=0; total_grains < limit; ++i){
        square_value = pow(2, i);
        square_counter++;
        total_grains += square_value;
    }

    // Repeat calculations for double types.
    for(int i=0; total_grains_double < limit_double; ++i){
        square_value_double = pow(2, i);
        square_counter_double++;
        total_grains_double += square_value_double;
    }


    cout << endl;
    cout << endl;
    cout << "Your limit was " << limit << endl;
    cout << "The total number of squares needed is " << square_counter << endl;
    cout << "The number of grains is " << total_grains << endl;
    cout << endl;

    cout << "Your limit as a double was " << limit_double << endl;
    cout << "If you reached 31 squares needed then the answer might be wrong." << endl;
    cout << "If you use a 'double' type to store your answer for the number of grains then you get:" << endl;
    cout << "Total number of squares of needed is " << square_counter_double << endl;
    cout << "The number of grains is " << total_grains_double << endl;
    cout << "Both int and double types reach their size limit when the input reaches a value of 10^9." << endl;

    cout << endl;
    cout << "Press ENTER to finish..." << endl;
    cin.ignore(999, '\n');
    return 0;
}