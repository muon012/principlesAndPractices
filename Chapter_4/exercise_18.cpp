// Write a program that solves quadratic equations.
// Use doubles for the inputs

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::sqrt;
using std::pow;

int main(void)
{
    // Variables for the equation.
    double a,
            b,
            c;
    
    cout << "This program solves a quadratic equation of the form: ax^2 + bx + c = 0" << endl;
    cout << "Where a != 0 and b^2 >= 4ac " << endl;
    cout << "Input your values for a, b , and c respectively: ";
    cin >> a >> b >> c;

    // We simply use the formula for the quadratic equation and make sure we dsiplay both asnwers.
    double x1, x2;

    x1 = (-b + sqrt((pow(b, 2) - (4 * a * c)))) / (2 * a);
    x2 = (-b - sqrt((pow(b, 2) - (4 * a * c)))) / (2 * a);

    // Display results back.
    cout << "The value of x is: " << x1 << " or " << x2 << endl;

    return 0;
}