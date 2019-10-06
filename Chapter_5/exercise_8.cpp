// This program asks for the number of values to be added together, and then asks for a list of values.
#include<iostream>
#include<vector>
#include<string>

using namespace std;

void error(string s)
{
    throw out_of_range(s);
}

int main(void)
{
    int num_of_values;
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
        if ( num_of_values > list.size())
        {
            error("You didn't list enough values to be added together!");
        }
        for (int i = 0; i < num_of_values; ++i)
        {
            sum += list[i];
        }
    }
    catch (out_of_range& e)
    {
        cerr << e.what() << endl;
        cerr << "Bye!" << endl;
        return 1;
    }

    cout << "The sum of the first " << num_of_values << " integers is " << sum << ". " << endl;

    return 0;

}
