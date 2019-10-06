// Add a function to convert from K to C.

#include<iostream>
#include<string>
using namespace std;

double ktoc(double k)
{
    if (k < 0) {
        cout << "Are you sure you got the right units?" << endl;
    }
    double c = k - 273.15;

    return c;
}
int main(void)
{
    cout << "Enter Kelvin temperature: ";
    double k;
    cin >> k;
    cout << k << endl;
    double c = ktoc(k);
    cout << c << endl;

    return 0;
}