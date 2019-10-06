// Make a program that writes out a Fibonacci Series
// Find out which is the largest int that fits into an int type.

#include<iostream>
#include<vector>

using namespace std;

// My Fibonacci Series function
int fib(int x)
{
    int previous = 0;
    int current = 1;
    if (x <= 1)
    {
        return current + previous;
    }
    else if (x > 1)
    {
        previous = fib(x - 2);
        current = fib(x - 1);
        return current + previous;
    }
    else
    {
        return 0;
    }
    
}
int main(void)
{
    int up_to;
    cout << "How many Fibonacci numbers do you want to see? (46 is the limit): ";
    cin >> up_to;
    cin.ignore(999, '\n');

    vector<int> fib_series;
    for (int i = 0; i < up_to; ++i)
    {
        int fib_number = fib(i);
        fib_series.push_back(fib_number);
    }

    cout << "Here is your list: " << endl;
    for (auto x : fib_series)
    {
        cout << x << ' ';
    }
    cout << endl;
    
    // Finding the largest Fibonacci number that fits in an int
    int n = 1;
	int m = 2;

	while (n<m) {
			cout << n << '\n';
			int x = n+m;
			n = m;	// drop the lowest number
			m = x;	// add a new highest number
	}

	cout << "the largest Fibonacci number that fits in an int is " << n << '\n';


    cout << endl;
    cout << "Press ENTER to finish...";
    cin.ignore(999, '\n');
    return 0;
}