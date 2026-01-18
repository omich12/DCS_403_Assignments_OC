// Write a program to calculate the sine, cosine, and tangent of an angle in radians.

// Hint: Use sin(), cos(), and tan() functions from <cmath>.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double angle;

    // value of pi
    const double pi = 3.14159;

    // angle in radians (pi/4)
    angle = pi / 4;

    cout << "sin(45°) = " << sin(angle) << endl;
    cout << "cos(45°) = " << cos(angle) << endl;
    cout << "tan(45°) = " << tan(angle) << endl;

    return 0;
}
