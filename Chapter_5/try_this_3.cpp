// This program shows that you have to test for all possible errors.
// You will get an error due to division by zero.
#include<iostream>
using namespace std;


int area(int length, int width)
{
    if (length <= 0 || width <= 0)
    {
        cout << "This is an error from the area function." << endl;
    }
    return length * width;
}

int framed_area(int x, int y)
{
    return area(x - 2, y - 2);
}

int main(void)
{
    int x = 5;
    int y = 9;
    int z = 3;

    int area1 = area(x, y);
    int area2 = framed_area(1, z);
    int area3 = framed_area(y, z);
    double ratio = double(area1) / area3;

    return 0;
}