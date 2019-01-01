// Modify the program so it writes out the age in months;

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "Please enter your name and age: ";
    string first_name{"???"};
    double age{};

    cin >> first_name >> age;
    cout << "Hello, " << first_name << "(age " << age << ")." << endl;
    cout << "This is your age in months: " << age * 12 << endl;
    return 0;
}