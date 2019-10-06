// You just need to correct the code to make it work.
#include<iostream>
using namespace std;

double ctok(double c)
{
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