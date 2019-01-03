// Program to convert from miles to kilometers
#include<iostream>

using namespace std;

int main(){

    cout << "Enter the number of miles: ";
    int miles{};
    cin >> miles;

    double kilometers = miles * 1.609;
    cout << miles << " miles is equal to " << kilometers << " kilometers." << endl;
    return 0;

}