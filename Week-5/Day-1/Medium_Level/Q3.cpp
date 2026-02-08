// Q3. Sum of Digits (Recursive)
// Write a recursive function that calculates the sum of digits of a given number.

// Hint:
// Isolate the last digit, then recursively process the remaining number.

#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    // Base case
    if (n == 0)
        return 0;

    // Last digit + sum of remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int n;

    cout << "Enter the numbers: ";
    cin >> n;

    cout << "Sum of digits: " << sumOfDigits(n);
    return 0;
}
