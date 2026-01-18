// Write a program to find the largest and smallest of two numbers using fmax() and fmin().

// Hint: Use fmax(a, b) and fmin(a, b) from <cmath>.
// fmax(a, b) → returns the larger value
// fmin(a, b) → returns the smaller value

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    double maximum = fmax(a, b);
    double minimum = fmin(a, b);

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;

    return 0;
}
