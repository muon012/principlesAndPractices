// Modify the last program to use double instead of int.
// Make a vector of doubles containing the N-1 differences between adjacent values and write out that vector differences.
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
    int num_of_values = -1;
    cout << "Enter a number of values you want to sum: ";
    cin >> num_of_values;
    cin.ignore(999, '\n');

    vector<double> list;
    vector<double> differences;
    double x;
    cout << "Enter some integers separated by a space." << endl;
    cout << "Press '|' to stop: "; // Really any non-numeric key will be fine.
    while(cin >> x)
    {
        list.push_back(x);
    }
    cin.ignore(999, '\n');

    int sum = 0;
    const int DIFFERENCE_LIST_SIZE = list.size() - 1;

    for (size_t i = 0; i < DIFFERENCE_LIST_SIZE; ++i)
    {
        int differ = list[i + 1] - list[i];
        differences.push_back(differ);
    }

    try
    {
        if ( num_of_values < 0)
        {
            error("I can't add the first values with the number you gave me!");
        }
        for (int i = 0; i < num_of_values; ++i)
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

    cout << "Here is the list of differences:" << endl;
    for (auto x : differences)
    {
        cout << x << endl;
    }

    return 0;

}