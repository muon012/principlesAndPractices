// Create a program that fixes the median value of example from 4.6.3 in the book.
// You can also check it in the 'examples.cpp' file.

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(void){

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
    double median{};

    // Check if the vector contains an even number of elements
    if(temps.size()%2 == 0){

        // Get the two 'median' values and then find their average to get the actual median
        double median_1 = temps[temps.size()/2 - 1];
        double median_2 = temps[temps.size()/2];
        median = (median_1 + median_2)/ 2.0;
    }
    else
    {
        // Odd vectors have a median that is part of the sequence in it.
        median = temps[temps.size()/2];
    }
    
    // Display results
    cout << "The median is " << median << " degrees." << endl;
    return 0;
}

