// Program to show unsafe type conversions

#include<iostream>

using namespace std;

int main(){
    double d{0};
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
