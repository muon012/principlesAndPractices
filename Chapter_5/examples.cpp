#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::cerr;
using std::runtime_error;

// Our own error function:
void error(string s)
{
    throw runtime_error(s);
}


int main(void)
{
    vector<int> v;
    // Another way to add values to a vector:
    for (int i; cin >> i;)
    {
        v.push_back(i);
    }

    // Clear the garbage when breaking out of the loop by inputing a non-integer value.
    cin.clear();
    cin.ignore(999, '\n');

    for (size_t i = 0; i < v.size(); ++i)
    {
        cout << "v[" << i << "] == " << v[i] << endl;
    }
    
    cerr << "I am an error message using the 'cerr' object." << endl;

    try
    {
        int num_1;
        cout << "Enter a non-numerical value and see what happens: ";
        cin >> num_1;
        if(cin.fail()){
            error("You made a runtime error!");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
    catch(...)
    {
        std::cerr << "Unknown execptions!" << endl;
        return 404;
    }

    // Creating random numbers
    int r_number;
    srand( time(0)); // Seeding the random number generator.
    r_number = rand() % 10; // Randomize number between 0 - 9;

    cout << "Random number (0-9): ";
    cout << r_number << endl;


    return 0;
}