// Program that orders three string values in alphabetical order
#include<iostream>
#include<string>

using namespace std;

int main(){

    cout << "Please enter three string literals: ";
    string var1{};
    string var2{};
    string var3{};
    cin >> var1 >> var2 >> var3;

    // Determine which is the first, middle, and last value
    string first{};
    string middle{};
    string last{};

    // Check var1 to see if it's the first alphabetically
    if(var1 <= var2 && var1 <= var3){
        first = var1;
        if(var2 <= var3){
            middle = var2;
            last = var3;
        }
        else{
            middle = var3;
            last = var2;
        }
    }

    // Check var2 to see if it's the first
    else if(var2 <= var1 && var2 <= var3){
        first = var2;
        if(var1 <= var3){
            middle = var1;
            last = var3;
        }
        else{
            middle = var3;
            last = var1;
        }
    }

    // Neither var1 nor var2 are the first, ergo var3 is
    else{
        first = var3;
        if(var1 <= var2){
            middle = var1;
            last = var2;
        }
        else{
            middle = var2;
            last = var1;
        }
    }

    cout << first << ", " << middle << ", " << last << endl;

    return 0;
}