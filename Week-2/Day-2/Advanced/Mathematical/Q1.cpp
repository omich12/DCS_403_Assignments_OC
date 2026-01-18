// 1. Quadratic Equation Roots
// Write a program to calculate the roots of a quadratic equation [ ax^2 + bx + c = 0 ]

// Formula Used:
// [ D = b^2 - 4ac ]
// [ x_1 = \frac{-b + \sqrt{D}}{2a}, \quad x_2 = \frac{-b - \sqrt{D}}{2a} ]

// Hint: Use sqrt() and conditional statements for real, equal, or imaginary roots.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D > 0)
    {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and distinct: " << x1 << " and " << x2 << endl;
    }
    else if (D == 0)
    {
        double x = -b / (2 * a);
        cout << "Roots are real and equal: " << x << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        cout << "Roots are imaginary: " << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
