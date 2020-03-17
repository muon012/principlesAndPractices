#include<iostream>
#include<vector>
using namespace std;

void print(string label, const vector<int> &v)
{
    for (auto element: v)
    {
        cout << label << element << endl;
    }
}

int single_fibonacci(int n)
{
    if (n < 2)
        return n; // This will give the first element to be added to the sequence as 0 and 1 as the second element to be added.
    return single_fibonacci(n - 1) + single_fibonacci(n - 2);
}

void fibonacci(int x, int y, vector<int> &fib_numbers, int number_of_fibs)
{
    // x <= y
    // number_of_fibs > 2 because the print function prints all the elements of the vector

    fib_numbers.clear();
    fib_numbers.push_back(x);
    fib_numbers.push_back(y);
    
    if (number_of_fibs > 2)
    {
        for (int i = 0; i <= (number_of_fibs - 2); ++i)
            fib_numbers.push_back(fib_numbers[i] + fib_numbers[i + 1]);
    }
}

int main(void)
{
    vector<int> v{2, 3, 5, 6, 10};

    cout << "Vector before fibonacci function: " << endl;
    print("This element is: ", v);

    cout << endl;
    cout << "Let's create a Fibonacci sequence." << endl; 
    int first_fibonacci;
    cout << "Enter the first element: ";
    cin >> first_fibonacci;

    int second_fibonacci;
    cout << "Enter the second element: ";
    cin >> second_fibonacci;

    int elements_in_fibonacci;
    cout << "Enter how many numbers to add to the sequence: ";
    cin >> elements_in_fibonacci;

    cout << "Here is your fibonacci sequence:" << endl;
    cout << endl;

    fibonacci(first_fibonacci, second_fibonacci, v, elements_in_fibonacci);
    print("This fibonacci element is: ", v);


    return 0;
}