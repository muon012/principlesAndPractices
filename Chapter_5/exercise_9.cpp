// Modify the last program to show an error if the result can't be an int type
// The way i try to solved this is by checking for a negative value like in "try_this_9.cpp" were we checked for int overflow.
// However, adding big numbers does not give the error at the sum calculation, it does so at the check for size of the vector.
// Maybe the overflow of the vector is the cause.

#include<iostream>
#include<vector>
#include<string>

using namespace std;

void error(string s)
{
    throw out_of_range(s);
}

void error_type(string s)
{
    throw runtime_error(s);
}

int main(void)
{
    size_t num_of_values;
    cout << "Enter a number of values you want to sum: ";
    cin >> num_of_values;
    cin.ignore(999, '\n');

    vector<int> list;
    int x;
    cout << "Enter some integers separated by a space." << endl;
    cout << "Press '|' to stop: "; // Really any non-numeric key will be fine.
    while(cin >> x)
    {
        list.push_back(x);
    }
    cin.ignore(999, '\n');

    int sum = 0;
    try
    {
        if ( (num_of_values < 0) || num_of_values > list.size())
        {
            cout << list.size() << endl; // This returns 0 when the list has huge numbers.
            error("I can't add the first values with the number you gave me!");
        }
        for (size_t i = 0; i < num_of_values; ++i)
        {
            sum += list[i];
        }
        if (sum < 0) // Trying to check if sum is negative, meaning overflow.
        {
            error_type("Answer too large to store in int type");
        }
    }
    catch (exception& e)
    {
        cerr << e.what() << endl;
        cerr << "Bye!" << endl;
        return 1;
    }

    cout << "The sum of the first " << num_of_values << " integers is " << sum << ". " << endl;

    return 0;

}