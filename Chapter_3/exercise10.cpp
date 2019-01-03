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

    double res{};
    if(operator_symbol == "+"){
        res = var1 + var2;
    }    
    else if(operator_symbol == "-"){
        res = var1 - var2;
    }    
    else if(operator_symbol == "*"){
        res = var1 * var2;
    }    
    else if(operator_symbol == "/"){
        if(var2 == 0){
            cout << "Can't divide by zero!" << endl;
        }
        res = var1 / var2;
    }
    else{
        cout << "Incorrect input!" << endl;
    }

    cout << var1 << " " << operator_symbol << " " << var2 << " = " << res << endl;

    return 0;
}