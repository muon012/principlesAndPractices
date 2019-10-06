// In this drill we're just trying to see how the compiler reacts to the given syntax errors.
#include<iostream>
using namespace std;

int area(int length, int width);

int main(void)
{
    int s1 = area(7;
    int s2 = area(7)
    Int s3 = area(7);
    int s4 = area('7);

    return 0;

}