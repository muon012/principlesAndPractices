// Create a 'square()' function that doesn't use the multiplication operator but rather the addition operator instead.

#include<iostream>

using namespace std;

// Here we create the square() function:
int my_square(int x)
{
    int result{};

    // Starting at 0, we ill add x to 0 x times. i.e. for the square of 4, we'll add 4 to 0 for 4 times(iterations).
    for(int i{}; i < x; ++i){
        result += x;
    }

    return result;
}

int main(void)
{
    cout << "Enter a number (Enter anything else to exit): ";

    int user_num{};
    while(cin >> user_num){
        cout << "Your number '" << user_num << "' squared is " << my_square(user_num) << endl;
    }

    return 0;
}