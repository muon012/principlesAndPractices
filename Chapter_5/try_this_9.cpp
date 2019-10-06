// The book asks if you can find a pair of values that will pass the pre-condtion but fail the post-condition below.
// The way for the post-condition to fail is for length * width be a value larger than what fits in an int.
// This result is called signed integer overflow. The value is negative but it doesn't mean the real answer is negative.
// Signed Integer Overflow is actually "Undefined Behaviour".

#include<iostream>
using namespace std;

void error(string s)
{
    throw runtime_error(s);
}

int area(int length, int width)
// Calculate area of rectangle
// pre-condtions: length and width are positive
// post-condition: returns a positive value that is the area
{
    if ((length <= 0) || (width <= 0))
    {
        error("area() pre-condition violated.");
    }
    int a = length * width;
    cout << "area() returns: " << a << endl;
    
    if (a <= 0)
    {
        error("area() post-condition violated.");
    }
    return a;
}

int main(void)
{
    int num1, num2;

    cin >> num1 >> num2;

    try
    {
        area(num1, num2);
    }
    catch (runtime_error& e)
    {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
        
    cout << endl;
    cout << "Press ENTER to finish...";
    cin.ignore(999, '\n');
    return 0;
}