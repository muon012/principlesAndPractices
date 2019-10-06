// Create a program that solves a quadratic equation but sends an error when the determinant is negative

#include<iostream>
#include<string>
#include<cmath>
#include<vector>

using namespace std;

void error(string s)
{
    throw runtime_error(s);
}

double determinant(double a, double b, double c)
{
    double b_squared = pow(b, 2);
    double res = b_squared - 4.0 * a * c;
    if (res < 0)
    {
        error("Imaginary solution!");
    }
    return res;
}

vector<double> quadratic_solver(double a, double b, double c)
{
    vector<double>res;
    double res_1 = (-b + pow(determinant(a, b ,c), .5)) / (2.0 * a);
    double res_2 = (-b - pow(determinant(a, b ,c), .5)) / (2.0 * a);

    res.push_back(res_1);
    res.push_back(res_2);

    return res;
}

int main(void)
{
    try
    {
    double a, b , c;
    cout << "Enter the a, b, c values of a quadratic equation: ";
    cin >> a >> b >> c;

    vector<double> solution = quadratic_solver(a, b, c);

    cout << "Here are your solutions: " << endl;
    cout << "x1 = " << solution[0] << endl;
    cout << "x2 = " << solution[1] << endl;
    }
    catch (runtime_error& e)
    {
        cerr << e.what() << endl;
        return 1;
    }

    return 0;
}