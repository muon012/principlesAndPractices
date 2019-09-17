// Write a program that calculates how many squares are needed to reach 1000, 1'000'000, 1'000'000'000 grains.
// The first square is equal to 1 grain, the second square is equal to 2, the third one is equal to 4. These 3 squares
// add upt to 6 grains. 
#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;
using std::pow;

int main(void)
{
    int square_counter = 0;
    int total_grains = 0;
    int square_value;
    int limit;

    cout << "Enter a number that will serve as a limit: ";
    cin >> limit;

    // Loop until you get a value that reaches the limit. The answer will most likely be over the limit.
    for(int i=0; total_grains < limit; ++i){
        square_value = pow(2, i);
        square_counter++;
        total_grains += square_value;
    }

    cout << endl;
    cout << endl;
    cout << "Your limit was " << limit << endl;
    cout << "The total number of squares needed is " << square_counter << endl;
    cout << "The number of grains is " << total_grains << endl;

    cout << endl;
    cout << "Press ENTER to finish...";
    cin.ignore(999, '\n');
    return 0;
}