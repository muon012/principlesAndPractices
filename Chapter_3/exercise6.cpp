// Program that orders three values in sequential order
#include<iostream>

using namespace std;

int main(){

    cout << "Please enter three integer values: ";
    int var1{};
    int var2{};
    int var3{};
    cin >> var1 >> var2 >> var3;

    // Determine which is the smallest, middle, and largest value
    int smallest{};
    int middle{};
    int largest{};

    // Check var1 to see if it's the smallest
    if(var1 <= var2 && var1 <= var3){
        smallest = var1;
        if(var2 <= var3){
            middle = var2;
            largest = var3;
        }
        else{
            middle = var3;
            largest = var2;
        }
    }

    // Check var2 to see if it's the smallest
    else if(var2 <= var1 && var2 <= var3){
        smallest = var2;
        if(var1 <= var3){
            middle = var1;
            largest = var3;
        }
        else{
            middle = var3;
            largest = var1;
        }
    }

    // Neither var1 nor var2 are the smallest, ergo var3 is
    else{
        smallest = var3;
        if(var1 <= var2){
            middle = var1;
            largest = var2;
        }
        else{
            middle = var2;
            largest = var1;
        }
    }

    cout << smallest << ", " << middle << ", " << largest << endl;

    return 0;
}