// Create a Bulls and Cows game using a 4-digit number

#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<cstdlib>
#include<cmath>
#include<algorithm>

using namespace std;

void error(string s)
{
    throw runtime_error(s);
}

// This function just finds the value of a certain digit inside a number.
int divide_by_ten(int value, int power_of_ten)
{
    // Let's say we want to extract the 9 from 1984, which is the value for digits in the hundredth range.

    int by_power_of_ten = value / pow(10, power_of_ten); // (1984 / 10^2) = 19.84 ----> 19 (Remember truncation of double)
    return by_power_of_ten % 10; // 19 % 10 -----> 9 
}

// This function will break the integer value into its digits and add them to a vector.
vector<int> digit_breaker(int num_size, int value)
{
    vector<int> res;
    for (int i = num_size - 1; i >= 0; --i) // We set the condition to include 0 because we also want the digit for 10^0.
    {
        int digit = divide_by_ten(value, i);
        res.push_back(digit);
    }

    return res;
}

// Displaying a vector
void print_vector(vector<int> &v)
{
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;
}


int main(void)
{

    cout << "Try to guess the n-digit number. For every correct digit you guess you get a bull if it's in the right" << endl;
    cout << "position, and you get a cow if it's not in the right position." << endl;

    // Seeding the generator.
    int seed;
    cout << "Enter a positive number to seed the random number generator: ";
    cin >> seed;
    if ( seed < 0)
    {
        error("Negative Number");
    }
    cin.ignore(999, '\n');

    srand(seed); // Seed the generator. Use "time(0)" if you want to use current time as seed.

    // Decide how big the number will be:
    int n_length;
    cout << "How many digits long do you want the number to be: ";
    cin >> n_length;
    if ( n_length < 0)
    {
        error("Negative Number");
    }
    cin.ignore(999, '\n');

    // Create the number to be guessed:
    vector<int>bc;
    for (int i = 0; i < n_length; ++i)
    {
        int digit = rand() % 10; // Random number from 0-9.
        bc.push_back(digit); 
    }

    cout << "Here is the number to be guessed: ";
    for (auto x : bc)
    {
        cout << x;
    }
    cout << endl;

    int guess;
    cout << "Enter your " << n_length << "-digit guess: ";


    while(cin >> guess) // Break if non numeric type entered
    {
        cin.ignore(999, '\n');
        vector<int> user_guess = digit_breaker(n_length, guess);

        // Initialize scoreboard each time.
        int bulls = 0;
        int cows = 0;

        // Check that you didn't get a negative number.
        if (guess < 0)
        {
            error("Negative number");
        }

        // Check the user's number is the same size as the one generated.
        if (user_guess.size() > n_length)
        {
            error("Number inputted has more digits than the computer's number.");
        }

        for (size_t i = 0; i < bc.size(); ++i)
        {
            if (user_guess[i] == bc[i])
            {
                user_guess[i] = -1; // Switch values on user_guess to -1 if they are found in bc.
                bulls += 1;
            }
            else
            {
                // We just count the values that are not changed to -1 inside the user_guess vector, not bc.
                cows += count(user_guess.begin(), user_guess.end(), bc[i]);
            }
            print_vector(user_guess);

            
        }

        cout << bulls << " bull(s) and " << cows << " cow(s)." << endl;
        if ( bulls == n_length)
        {
            break;
        }

        cout << "Answer: ";
        print_vector(bc);
        cout << "Enter next guess: ";


    }

    cout << "Congrats!" << endl;
    return 0;

}