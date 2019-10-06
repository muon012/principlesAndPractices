// Read dayOfTheWeek - value pairs from standard input.
// Collect all the values for each day into vectors. Print out the sum of all values for each day.
// Ignore illegal days, but accept synonyms like Mon/monday/Monday. Write out the number of rejected values.

#include<iostream>
#include<vector>
#include<string>

using namespace std;

void error(string s)
{
    throw runtime_error(s);
}

int sum_vector(vector<int> v)
{
    int sum = 0;
    for (auto x : v)
    {
        sum += x;
    }

    return sum;
}

int main(void)
{
    vector<int> sunday;
    vector<int> monday;
    vector<int> tuesday;
    vector<int> wednesday;
    vector<int> thursday;
    vector<int> friday;
    vector<int> saturday;
    vector<int> bad_day;

    string day;
    int day_value;

    cout << "Enter a day of the week, followed by a value." << endl;
    cout << "Enter two consecutive non-numeric values to exit." << endl;
    cout << "- ";

    while(cin >> day >> day_value)
    {

        if (day == "Monday" || day == "monday" || day == "mon")
        {
            monday.push_back(day_value);
        }
        else if (day == "Tuesday" || day == "tuesday" || day == "tue")
        {
            tuesday.push_back(day_value);
        }        
        else if (day == "Wednesday" || day == "wednesday" || day == "wed")
        {
            wednesday.push_back(day_value);
        }        
        else if (day == "Thursday" || day == "thursday" || day == "thu")
        {
            thursday.push_back(day_value);
        }        
        else if (day == "Friday" || day == "friday" || day == "fri")
        {
            friday.push_back(day_value);
        }        
        else if (day == "Saturday" || day == "saturday" || day == "sat")
        {
            saturday.push_back(day_value);
        }        
        else if (day == "Sunday" || day == "sunday" || day == "sun")
        {
            sunday.push_back(day_value);
        }
        else
        {
            bad_day.push_back(day_value);
        }
        
    }

    cout << "Here are the values for each day:" << endl;
    cout << "Monday: " << sum_vector(monday) << endl;
    cout << "Tuesday: " << sum_vector(tuesday) << endl;
    cout << "Wednesday: " << sum_vector(wednesday) << endl;
    cout << "Thursday: " << sum_vector(thursday) << endl;
    cout << "Friday: " << sum_vector(friday) << endl;
    cout << "Saturday: " << sum_vector(saturday) << endl;
    cout << "Sunday: " << sum_vector(sunday) << endl;
    cout << "Bad Values: " << sum_vector(bad_day) << endl;


    return 0;
}