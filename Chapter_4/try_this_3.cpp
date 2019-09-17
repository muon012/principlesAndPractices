// Here we practice using a while-loop to write out the integer value of all the letters

#include<iostream>

using namespace std;

int main(void)
{
    int counter = 0;

    while(counter < 26){
        cout << "Letter '" << char('a' + counter) << "' int value is " << int('a' + counter) << endl;
        ++counter;
    }
}