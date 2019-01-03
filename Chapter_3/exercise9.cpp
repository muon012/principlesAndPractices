// Program that ouputs the numerical values of words such as "one" and "three" from the user

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "Enter the name of a digit('one', 'two'): ";
    string digit{};
    cin >> digit;

    if(digit == "zero" || digit == "oh"){
        cout << 0 << endl;
    }
    else if(digit == "one"){
        cout << 1 << endl;
    }
    else if(digit == "two"){
        cout << 2 << endl;
    }
    else if(digit == "three"){
        cout << 3 << endl;
    }
    else if(digit == "four"){
        cout << 4 << endl;
    }
    else{
        cout << "Not a number I know, sorry." << endl;
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}