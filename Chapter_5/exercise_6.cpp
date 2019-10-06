// Write a program that converts from Celsius to Farenheit and vice-versa.

#include<iostream>
using namespace std;

double ctof(double c)
{
    if (c < -273.15)
    {
        cout << "Impossibly low temperature." << endl;
    }
    double f = 9/5.0 * c + 32;
    return f;
}

double ftoc(double f)
{
    if (f < -459.67)
    {
        cout << "Impossibly low temperature." << endl;
    }
    double c = (f - 32) * 5/ 9.0;
    
    return c;
}

int main(void)
{
    double c;
    cout << "Enter a Celcius temperature: ";
    cin >> c;

    double f_res = ctof(c);
    cout << "Your temperature of " << c << " Celsius in Fharenheit is " << f_res << endl;

    double f;
    cout << "Enter a Farhenheit temperature: ";
    cin >> f;

    double c_res = ftoc(f);
    cout << "Your temperature of " << f << " Farhrenheit in Celsius is " << c_res << endl;

    return 0;
}