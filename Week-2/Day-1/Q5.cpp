// Use a ternary operator to find the smaller of two numbers.

// The ternary operator is a short form of if–else.
// Syntax:
// (condition) ? value_if_true : value_if_false;

#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    int smaller = (x < y) ? x : y;

    cout << "Smaller number is: " << smaller;

    return 0;
}
