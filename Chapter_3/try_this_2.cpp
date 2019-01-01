// Program to exercise operators and floating-point numbers

#include<iostream>
#include<cmath>

using namespace std;

int main(){

    cout << "Please enter a floating-point value: ";
    double n{};
    cin >> n;
    cout << "n == " << n << endl;
    cout << "n + 1 == " << n + 1 << endl;
    cout << "3 x n == " << n * 3 << endl;
    cout << "n x 2  == " << n * 2 << endl;
    cout << "n ^ 2== " << n * n << endl;
    cout << "n / 2 == " << n / 2 << endl;
    cout << "n ^ .5 == " << sqrt(n) << endl;

    // Now we do the same operations but with an "integer" type

    cout << "Please enter an integer value: ";
    int m{};
    cin >> m;
    cout << "m == " << m << endl;
    cout << "m + 1 == " << m + 1 << endl;
    cout << "3 x m == " << m * 3 << endl;
    cout << "m x 2  == " << m * 2 << endl;
    cout << "m ^ 2== " << m * n << endl;
    cout << "m / 2 == " << m / 2 << endl;
    cout << "m ^ .5 == " << sqrt(m) << endl << endl;
    cout << "For two int types, using '/' for division results in integer division. The result will yield an integer, it will not round down or up, just return the digit(s) before the decimal point." << endl;
    cout << "If you choose to input 'm' as a floating-point number, C++ will only recognize the digits before the decimal point as the value of 'm'." << endl;
    cout << endl;

    return 0;
}