// Make a vector by inputting the distance between two cities, calculate the total distance of all inputs together,
// display it, display the shortest/longest one, display the mean of all distances.

#include<iostream>
#include<vector>
#include<algorithm>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::sort;

int main(void){

    vector<double> distances;

    cout << "Enter the distances between 2 neighboring cities(Type a non-digit to exit): ";

    double current_distance{};

    while(cin >> current_distance){
        distances.push_back(current_distance);
    }

    // Calculating the total distances:
    double total_distances{};
    for(auto x : distances){
        total_distances+= x;
    }

    // Choosing the shortest/longest distance by sorting the vector first using bubble sort.
    for(int i=0; i < distances.size() - 1; ++i){
        bool swapped = false; // Boolean to see if there was a swap in that pass.        
        for(int j=0; j < distances.size() - 1 - i; ++j){
            double temp{};
            if(distances[j] > distances[j + 1]){ // Do a swap if the current number is greater than the next one.
                temp = distances[j];
                distances[j] = distances[j + 1];
                distances[j + 1] = temp;
                swapped = true; // There was at least one swapped.
            }
        }
        // If there was no swap then no need to waste time doing another pass since the list is ordered already.
        if(swapped == false){
            break;
        }
    }

    // Calculating the mean
    double mean{};
    mean = total_distances / distances.size();

    // Displaying results
    cout << "The total distance entered is: " << total_distances << "." << endl;
    cout << "The shortest distance is: " << distances[0] << "." << endl;
    cout << "The longest distance is: " << distances.back() << "." << endl;
    cout << "The mean of all distances entered is: " << mean << "." << endl;

    cout << endl;
    return 0;
}