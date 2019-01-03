// Program that does several operations amongst two integers
#include<iostream>

using namespace std;

int main(){

    cout << "Enter two integer values: ";
    int val1{};
    int val2{};
    cin >> val1 >> val2;

    if(val1 < val2) {
        cout << "The smaller of " << val1 << " and " << val2 << " is: " << val1 << endl;
        cout << "The larger of " << val1 << " and " << val2 << " is: " << val2 << endl;
    }
    if(val1 > val2) {
        cout << "The smaller of " << val1 << " and " << val2 << " is: " << val2 << endl;
        cout << "The larger of " << val1 << " and " << val2 << " is: " << val1 << endl;
    }
    cout << "The sum of " << val1 << " and " << val2 << " is: " << val1 + val2 << endl;
    cout << "The difference of " << val1 << " and " << val2 << " is: " << val1 - val2 << endl;
    cout << "The product of " << val1 << " and " << val2 << " is: " << val1 * val2 << endl;
    cout << "The ratio of " << val1 << " and " << val2 << " is: " << val1 / val2 << endl;

    return 0;
}