#include<iostream>
#include<string>
#include<vector>

using namespace std;

void print(string label, const vector<int> &v)
{
    for (auto element: v)
    {
        cout << label << element << endl;
    }
}

int fibonacci(int n)
{
    if (n < 2)
        return n; // This will give the first element to be added to the sequence as 0 and 1 as the second element to be added.
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    vector<int> v{1, 2, 3, 5, 8, 13};

    print("This element is: ", v);

    vector<int> fibonacci_sequence;

    int number_of_fibs;
    cout << "Enter the amount of numbers you want in a fibonacci sequence: ";
    cin >> number_of_fibs;

    for (int i = 0; i < number_of_fibs; ++i)
    {
        fibonacci_sequence.push_back(fibonacci(i));
    }

    cout << "Here is your sequence: " << endl;
    print("Label: ", fibonacci_sequence);

    return 0;

}