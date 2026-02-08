// Q2. Find Factorial of a Number
// Write a recursive function that returns the factorial of a number.
// Hint:
// Use the relation: n! = n * (n-1)!.
// Base case should handle 0! and 1!.

#include <iostream>
using namespace std;

// Recursive function to find factorial
int factorial(int n)
{
    // Base case
    if (n == 0 || n == 1)
        return 1;

    // Recursive case
    return n * factorial(n - 1);
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Factorial of " << n << " is: " << factorial(n);
    return 0;
}
