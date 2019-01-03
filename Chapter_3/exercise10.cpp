// Program that reads an operator and two operands and completes the operation

#include<iostream>
#include<string>

using namespace std;

int main(){
    
    cout << "Enter an operator followed by two operands: ";
    string operator_symbol{};
    double var1{};
    double var2{};
    cin >> operator_symbol >> var1 >> var2;

    if(operator_symbol == "+"){
        cout << var1 << " + " << var2 << " is: " << var1 + var2 << endl;
    }    
    else if(operator_symbol == "-"){
        cout << var1 << " - " << var2 << " is: " << var1 - var2 << endl;
    }    
    else if(operator_symbol == "*"){
        cout << var1 << " * " << var2 << " is: " << var1 * var2 << endl;
    }    
    else if(operator_symbol == "/"){
        cout << var1 << " / " << var2 << " is: " << var1 / var2 << endl;
    }
    else{
        cout << "Incorrect input!" << endl;
    }

    return 0;
}