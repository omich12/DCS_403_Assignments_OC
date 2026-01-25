// Overloading Functions
// Create an overloaded function area() that calculates
// the area of a circle (one parameter) and a rectangle (two parameters).

#include <iostream>
using namespace std;

// Area of circle
double area(double radius)
{
    return 3.14 * radius * radius;
}

// Area of rectangle
double area(double length, double width)
{
    return length * width;
}

int main()
{
    cout << "Area of circle = " << area(5) << endl;
    cout << "Area of rectangle = " << area(4, 6) << endl;
    return 0;
}
