// Program that determines if a value is odd or even

#include<iostream>

using namespace std;

int main(){

    cout << "Enter an integer value: ";
    int var{};
    cin >> var;

    if(var % 2 == 0){
        cout << "The integer " << var << " is even." << endl;
    }
    else{
        cout << "The integer " << var << " is odd." << endl;
    }

    return 0;

}