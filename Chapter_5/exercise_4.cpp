// Place a test inside ctok() to make sure you don't get temperature below absolute zero.
// This is an example of the callee handling the error.

#include<iostream>
using namespace std;

double ctok(double c)
{
    if (c < -273.15)
    {
        cout << "OOPS! Impossibly low temperature!" << endl;
    }
    int k = c + 273.15;

    return k;
}
int main(void)
{
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << endl;

    return 0;
}