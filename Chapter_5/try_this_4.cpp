// In this program you will see what an uncaught error looks like.
// The commented-out part is the right way to handle the exception.
// I catch the excetion with an 'out_of_range' type knowing the exception from the 'try' block won't be caught
// because my error function only throws 'runtime_error' it doesn't throw 'out_of_range' exceptions.

#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::runtime_error;
using std::cerr;
using std::out_of_range;

void error(string s1, string s2)
{
    throw runtime_error(s1 + s2);
}

int give_number()
{
    int user_input;
    cout << "Enter a non-numeric value: ";
    cin >> user_input;

    if (cin.fail())
    {
        error("Non-numeric value.", "Program will terminate.");
    }

    return user_input;
}

int main(void)
{
    try
    {
    int numero = give_number();
    
    cout << numero << endl;

    cout << endl;
    cout << "Press ENTER to finish...";
    cin.ignore(999, '\n');
    return 0;
    }
    // Try commeting out this runtime_error catch to see that the compiler terminates with an "uncaught exception"
    catch (runtime_error& e)
    {
        cerr << "You got a runtime error:" << endl;
        cerr << e.what() << endl;
        return 1;
    }
    catch (out_of_range)
    {}
}