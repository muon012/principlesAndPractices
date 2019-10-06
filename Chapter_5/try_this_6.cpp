// This program shows a way to prevent the logic error from the previous exercise.
// We do so by initializing the max/min temperature variables to impossible values.
#include<iostream>
#include<vector>
using namespace std;

int main(void)
{

    double sum = 0;
    double max_temp = -1000;
    double min_temp = 1000;
    int no_of_temps = 0;

    for (double temp; cin >> temp;)
    {
        no_of_temps++;
        sum += temp;
        if (temp > max_temp) max_temp = temp;
        if (temp < min_temp) min_temp = temp;
        sum += temp;
    }

    double average_temp = sum / no_of_temps;

    cout << "Highest Temperature: " << max_temp << endl;
    cout << "Lowest Temperature: " << min_temp << endl;
    cout << "Average Temperature: " << average_temp << endl;

    // Clearing out the input fail and the newline character.
    cin.clear();
    cin.ignore(999, '\n');

    cout << endl;
    cout << "Press ENTER to finish...";
    cin.ignore(999, '\n');
    return 0;
}