// Program that determines if a value is odd or even
// See comment below about non-zero boolean values.

#include<iostream>
#include<string>

using namespace std;

int main(){

    cout << "Enter an integer value: ";
    int var{};
    cin >> var;

    string res = "even";

    // If condition evaluates to a non-zero value (1, 3, 5, 800) then this if-statement is "true" and its statement is executed.
    // A zero value, the remainder of an even number is zero, means the condition is false.
    if(var % 2){
        res = "odd";
    }

    cout << var << " is " << res << endl;

    return 0;

}