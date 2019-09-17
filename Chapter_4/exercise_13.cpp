// Create a program that uses the "Sieve of Eratosthenes" to find all the primes up to a given number.

#include<iostream>
#include<vector>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::remove;
using std::count;
using std::sort;

// Create a function that will return a vector with all the integers from 2 to a given value 'x';
vector<int> up_to_x(int x){
    vector<int> v;
    for(int i=2; i <= x; ++i){
        v.push_back(i);
    }
    return v;
}

// Create function that implements "Sieve of Eratosthenes" method.
vector<int> marked(vector<int> v){
    // Set the limit of "i" iterations to half the lenght of the vector, because elements past the halfway point are
    // already multiples of an element from the previous half.
    int i_limit = v.size() / 2;

    // This will serve as the constant that will multiply the prime number.
    int current_multiple;

    // This is the starting prime in each iteration.
    int starting_prime;

    // This is the value to be added to the vector of "marked" numbers. "marked" numbers are those that are multiples
    // of a prime number.
    int to_be_marked;

    // Here we will store the marked numbers
    vector<int> res_vec;

    // Start the loop from the first element of the vector passed as an argument.
    for(int i=0; i <= i_limit; ++i){

        // Set the first value of the constant to multiply the prime number.
        current_multiple = 2;

        // Define the value of the first prime in that iteration.
        starting_prime = v[i];

        // define this variable so we can start the while loop.
        to_be_marked = current_multiple * starting_prime;

        while (to_be_marked < (v.back() + 1)) // While the multiple is less than the last element of the vector.
        {

            // Define the "marked" number in each iteration of the while loop.
            to_be_marked = current_multiple * starting_prime;

            // If the "marked" number is less than the value of the last element in the vector passed in this function,
            // and it is not present in "res_vec" vector, then we added to such vector.
            if(to_be_marked < (v.back() + 1)){

                // The count() funtion returns 0 if there are no elements that match the argument given in the 
                // vector given.
                if(count(res_vec.begin(), res_vec.end(), to_be_marked) == 0){
                    res_vec.push_back(to_be_marked);
                }
            }
            // Increase the constant value i.e 2 --> 3, next loop: 3 --> 4, next looop: 4 --> 5, etc,.
            current_multiple++;
        }
    }

    // Sort the vector in ascending order.
    sort(res_vec.begin(), res_vec.end());

    return res_vec;
}

// Function to remove elements found in one vector from another vector.
vector<int> difference(vector<int> original, vector<int> copies){

    // Declare the vector that has no elements from vector b.
    vector<int> res_vec;

    for(auto x : original){
        if(count(copies.begin(), copies.end(), x) == 0){
            res_vec.push_back(x);
        }
    }

    return res_vec;
}

int main(void)
{
    int limit;
    cout << "Enter a number and get all the primes up to that number starting with 2: ";
    cin >> limit;
    cin.ignore(999, '\n');

    // Create a vector with range 2-limit.
    vector<int> whole_Numbers = up_to_x(limit);

    vector<int> marked_Numbers = marked(whole_Numbers);

    vector<int> primes = difference(whole_Numbers, marked_Numbers);

    cout << "----Whole Numbers Vector-------" << endl;

    for(auto x: whole_Numbers){
        cout << x << endl;
    }

    cout << "---Marked Numbers Vector---------" << endl;

    for(auto x : marked_Numbers){
        cout << x << endl;
    }

    cout << "---Primes---------" << endl;

    for(auto x : primes){
        cout << x << endl;
    }


    cout << endl;
    cout << "Press ENTER to finish..";
    cin.ignore(999, '\n');
    return 0;
}