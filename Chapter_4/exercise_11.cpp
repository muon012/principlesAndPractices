// Create a program that finds all the primes numbers from 1-100.
#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

bool is_Prime(int x){

    for(int i = 2; i <= x/2; ++i){
        if(x%i == 0)
        return false;
    }
    return true;

}

string true_Or_False(int x){
    if(x){
        return "true";
    }
    return "false";
}

int main(void)
{
    int limit;
    cout << "Enter a positive number. I will then show you which numbers are primes in the range 1 - 'whatever number you input': ";
    cin >> limit;

    vector<int> primes;
    int counter = 0;

    // Check which numbers are primes. Add those that are in the 'primes' vector.
    for(int i=2; i < limit; ++i){
        if(i > 2 && is_Prime(i) == 1){
            primes.push_back(i);
            counter++;
            // cout << i << " is prime? : " << true_Or_False(is_Prime(i)) << endl; // This will show if the number is prime or not.
        }
        else if(i == 2)
        {
            primes.push_back(i);
            counter++;
        } 
    }

    cout << "Prime numbers in the range 1-" << limit << ": ";
    for(auto x : primes){
        cout << x << " ";
    }
    cout << endl;
    cout << "There are " << counter << " prime numbers in that range." << endl;

    cout << endl;
    cout << "Press 'e' to exit...";
    cin.ignore(999, 'e');
    return 0;
}