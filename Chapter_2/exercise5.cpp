// Program that does several operations amongst two floating_point values
#include<iostream>

using namespace std;

int main(){

    cout << "Enter two floating-point values: ";
    double var1{};
    double var2{};
    cin >> var1 >> var2;

    if(var1 < var2) {
        cout << "The smaller of " << var1 << " and " << var2 << " is: " << var1 << endl;
        cout << "The larger of " << var1 << " and " << var2 << " is: " << var2 << endl;
    }
    if(var1 > var2) {
        cout << "The smaller of " << var1 << " and " << var2 << " is: " << var2 << endl;
        cout << "The larger of " << var1 << " and " << var2 << " is: " << var1 << endl;
    }
    cout << "The sum of " << var1 << " and " << var2 << " is: " << var1 + var2 << endl;
    cout << "The difference of " << var1 << " and " << var2 << " is: " << var1 - var2 << endl;
    cout << "The product of " << var1 << " and " << var2 << " is: " << var1 * var2 << endl;
    cout << "The ratio of " << var1 << " and " << var2 << " is: " << var1 / var2 << endl;

    return 0;
}