// Redo "try_this_3.cpp" using a for-statement and also include uppercase letters and digits as well

#include<iostream>

using namespace std;

int main(void)
{
    cout << endl;
    // Create table for the lowercase letters:
    for(int i{}; i < 26; ++i){
        cout << "The integer value of '" << char('a' + i) << "' is " << int('a' + i) << endl;
    }

    cout << endl;
    cout << endl;

    // Create table for the uppercase letters:
    for(int i{}; i < 26; ++i){
        cout << "The integer value of '" << char('A' + i) << "' is " << int('A' + i) << endl;
    }

    cout << endl;
    cout << endl;

    // Create table for the digits:
    for(int i{}; i < 10; ++i){
        cout << "The integer value of '" << char('0' + i) << "' is " << int('0' + i) << endl;
    }

    return 0;
}