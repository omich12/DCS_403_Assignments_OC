// Write a program to find the square root, power,
// and absolute value of a number using mathematical functions.

// Hint: Use sqrt(), pow(), and fabs() from <cmath>.

// sqrt() → finds square root

// pow() → calculates power

// fabs() → finds absolute value

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // absolute value
    double absoluteValue = fabs(num);

    // square root of positive value
    double squareRoot = sqrt(absoluteValue);

    // power calculation
    double powerValue = pow(2, 3);

    cout << "Square root of " << absoluteValue << " = " << squareRoot << endl;
    cout << "2 raised to power 3 = " << powerValue << endl;
    cout << "Absolute value of " << num << " = " << absoluteValue << endl;

    return 0;
}
