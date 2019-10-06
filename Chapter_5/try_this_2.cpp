// In this drill we're just trying to see how the compiler reacts to the MORE syntax errors.
#include<iostream>
using namespace std;

int area(int length, int width);

int main(void)
{
    int x0 = arena(7);
    int x1 = area(7);
    int x2 = area("seven", 2);

    // For the last 2 the compiler is loooking for function called 'area' which, theoricatelly, could accept the arguments given. 
    return 0;
}