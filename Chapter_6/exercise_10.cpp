// Making permuations/combinations

#include<iostream>
using namespace std;

void error(string error_message)
{
    throw runtime_error(error_message);
}

int factorial(int n);
int permutations(int a, int b);
int combinations(int a, int b);
void swap(int &a, int &b);

int main(void)
{
    int a;
    int b;
    cout << "Enter two integer values followed by 'Enter': ";
    cin >> a >> b;
    swap(a, b);

    char user_choice;
    cout << "Enter 'p' to calculate permutations or 'c' to calculate combinations using the numbers you type in: ";
    cin >> user_choice;
    cin.ignore(999, '\n');

    switch(user_choice)
    {
        case 'p':
            cout << "Having " << a << " possible number(s), and choosing " << b << " number(s)."
                    << "There are " << permutations(a, b) << " permuation(s)." << endl;
            break;
        case 'c':
            cout << "Having " << a << " possible number(s), and choosing " << b << " number(s)."
                    << "There are " << combinations(a, b) << " combination(s)." << endl;
            break;
        default:
            error("That choice is not available!");
    }

    return 0;
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int permutations(int a, int b)
{
    return factorial(a) / factorial(a - b);
}

int combinations(int a, int b)
{
    return permutations(a, b) / factorial(b);
}

void swap(int &a, int &b)
{
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
}
