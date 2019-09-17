#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(void)
{

    // Weird stuff that the c++ compiler accepts:
    int x{45};
    int y{84};

    if(x == 5)
    ;
    {y = 3;}

    // This is an example of the dangers of forgetting the 'break' at the end of each case.
    // If the input were to match any of the cases, assuming all of them have no 'break', then the rest of the cases
    // will be executed (all the cases below the 'matched' case), including the default.
    // If one of the cases has a 'break', then if the matched case is above this one, the complier will stop executing
    // the rest of the cases after this one(this case with the 'break' statement).

    constexpr double in_to_cm = 2.54;

    double length = 1;

    char unit = 'a';
    cout << "Enter a length followed by a unit: ";
    cin >> length >> unit;

    switch(unit){
        case 'i':
        cout << "Length in cm: " << length * in_to_cm << endl;
        case 'c':
        cout << "length in in: " << length/ in_to_cm << endl;
        case 'r':
        cout << "This is a test for inputting the letter 'r'. "<< endl;
        case 'g':
        cout << "This is a test for inputting the letter 'g'. "<< endl;
        break;
        case 'p':
        cout << "This is a test for inputting the letter 'p'. "<< endl;

        default: 
        cout << "This is a default statement!" << endl;
    }

    // Playing with vectors

    vector<int> ex{1, 4, 44, 23};
    cout << "This is the last element " << ex.back() << endl;


    vector<int> v = {5, 7, 9, 4, 6, 8};

    for(int i{}; i < v.size(); ++i){
        cout << v[i] << endl;
    }

    cout << endl;

    // range-for-loop:
    for(int var_x : v){
        cout << var_x << endl;
    }

    // Temperature program example from the book:

    vector<double> temps; // We initialize an empty vector to store the temperatures.

    cout << "Enter some temperatures: ";
    for(double temp; cin >> temp;){ // Input temperatures infinitely until a non-digit value is entered.
        temps.push_back(temp); // Add those temperatures into the temp vector.
    }

    // Calculate the mean
    double sum = 0;
    for(int x : temps) {
        sum += x;
    }
    cout << "The mean temperature among all is " << sum/temps.size() << "." << endl;

    // Calculate the median

    sort(temps.begin(), temps.end()); // First, we sort the temperatures.

    cout << "The median is " << temps[temps.size()/2] << "(assuming vector has odd number of elements)." << endl;


    return 0;
}