// Program to show unsafe type conversions

#include<iostream>

using namespace std;

int main(){

    // This just shows how un-initialized variables can lead to problems
    double x;
    double y = x;
    double z = 2.0 + x;

    cout << "y = x\n";
    cout << "z = 2.0 + x\n";
    cout << "double x: " << x << endl;
    cout << "double y: " << x << endl;
    cout << "double z: " << x << endl;

    // Actual program to show unsafe conversions
    double d{0};
    cout << "Enter a double (type in anything else to exit): ";
    while(cin >> d){
        int i = d;
        char c = i;
        int i2 = c;
        cout << "double d == " << d << endl;
        cout << "int i = d; Value of i is: " << i << endl;
        cout << "char c = i; Value of c is: " << c << endl;
        cout << "int i2 = c; Value of i2 is: " << i2 << endl;
    }
    
    return 0;
}
