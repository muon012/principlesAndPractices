// Take a numeric value from the user, display result in this format:
// "123 is 1 hundred and 2 tens and 3 ones"
// Make sure numeric values are int types.

#include<iostream>
#include<string>

using namespace std;

string numeric_place[5]{"one", "ten", "hundred", "thousand", "ten thousand"};


bool isDigit(string user_input)
{
    string digits = "0123456789";
    bool is_digit = true;

    for (size_t character_index = 0; character_index < user_input.size(); ++character_index)
    {
        if (count(digits.begin(), digits.end(), user_input[character_index]) == 0)
        {
            is_digit = false;
            break;
        }
    }

    return is_digit;
}

int returnNumber(string numeric_value)
{        
    return stoi(numeric_value);
}

bool isMoreThanOne(int number)
{
    return (number >= 10) ? true : false;
}

string results(int number, string names[])
{
    // This will be the index for the names array.
    int digit_counter = 0;
    string number_string = to_string(number);
    string result = number_string + " is ";

    // Counting digits
    for (int digit = number; digit > 0; digit /= 10)
    {
        ++digit_counter;
    }

    for (size_t i = 0; i < number_string.size(); ++i)
    {
        string suffix;
        string current_digit_result;
        if (number_string[i] != '1')
            suffix = "s";
        current_digit_result = string(1, number_string[i]) + " " + names[--digit_counter] + suffix;
        result += current_digit_result;
        if (digit_counter > 0)
            result += " and ";
    }

    result += ".";

    return result;
}

int main(void)
{
    string possible_number;
    cout << "Enter a numeric value: ";
    cin >> possible_number;

    if (isDigit(possible_number))
        cout << "It is a number!" << endl;
    else
        cout << "Not a number!" << endl;

    int number = returnNumber(possible_number);

    cout << results(number, numeric_place) << endl;

    return 0;
}