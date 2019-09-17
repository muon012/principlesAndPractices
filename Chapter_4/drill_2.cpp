// This code is for the final steps 6-11 of the drill assignment.
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(void)
{
    // Conversion factors:
    constexpr int m_to_cm = 100;
    constexpr double in_to_cm = 2.54;
    constexpr int ft_to_in = 12;



    double length{};
    double length_in_m{};
    string unit{" "};
    vector<double>num_ls{};
    double avrg{};

    cout << "Enter a length followed by a unit(use space or enter key for the separation): ";

    while(cin >> length >> unit){
        double smallest{};
        double largest{};
        
        double current = length;

        // Calculate the length in meters of the length input by the user.
        if(unit == "ft"){
            length_in_m = (length * ft_to_in * in_to_cm) / m_to_cm;
        }
        else if(unit == "in"){
            length_in_m = (length * in_to_cm) / m_to_cm;
        }
        else if(unit == "cm"){
            length_in_m = length / m_to_cm;
        }
        else if(unit == "m"){
            length_in_m = length;
        }
        else{
            cout << "Sorry, I can't convert in that unit." << endl;
            break;
        }

        // Store the number entered in the vector
        num_ls.push_back(length_in_m);

        // Sort the list
        sort(num_ls.begin(), num_ls.end());

        // Determine the largest and smallest values.
        smallest = num_ls[0];
        largest = num_ls.back();


        // Check if current length is the smallest/largest and display it if so.
        if(num_ls.size() <= 1){
            cout << "This is the first length(in meters) entered: " << current << endl;
        }
        else if(current == largest){
            cout << current <<" <---- this is the largest so far." << endl;
        }
        else if(current == smallest){
            cout << current <<" <---- this is the smallest so far." << endl;
        }

    }

    // Calculate the mean.
    for(auto x : num_ls){
        avrg += x;
    }

    // Display the results after the loop is exited.
    cout << "You entered " << num_ls.size() << " lengths." << endl;
    cout << "The mean for this list is " << avrg / num_ls.size() << " meters." << endl;
    cout << "The smallest length is " << num_ls[0] << " meters." << endl; 
    cout << "The largest length is " << num_ls.back() << " meters." << endl; 
    cout << "Here is the list of lengths(in meters): [  ";
    for(auto x : num_ls){
        cout << x << "  ";
    }
    cout << "]";

    return 0;
}