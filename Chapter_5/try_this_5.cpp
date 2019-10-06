// This program shows a logic error:
// The error happens when all the temperatures are positive, and not zero, because you get the lowest temperature to be zero.
// The opposite happens with only negative numbers.

#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    vector <double> temps;
    
    for (double i; cin >> i;)
    {
        temps.push_back(i);
    }

    double sum = 0;
    double max_temp = 0.0;
    double min_temp = 0.0;

    for (double temp : temps)
    {
        if (temp > max_temp) max_temp = temp;
        if (temp < min_temp) min_temp = temp;
        sum += temp;
    }

    double average_temp = sum / temps.size();

    cout << "Highest Temperature: " << max_temp << endl;
    cout << "Lowest Temperature: " << min_temp << endl;
    cout << "Average Temperature: " << average_temp << endl;

    cout << endl;
    cout << "Press ENTER to finish...";
    cin.ignore(999, '\n');
    return 0;
}