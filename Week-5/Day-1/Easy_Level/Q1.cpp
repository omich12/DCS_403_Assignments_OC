// Q1. Print Numbers from 1 to N (Basic Recursion)
// Write a recursive function that prints numbers from 1 to N.

// Hint:
// Make the recursive call first, then print the number during the unwinding phase.

#include <iostream>
using namespace std;

// Recursive function to print numbers from 1 to n
void printNumbers(int n)
{
    // Base case
    if (n == 0)
        return;

    // Recursive call first
    printNumbers(n - 1);

    // Print during returning phase
    cout << n << " ";
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    printNumbers(n);
    return 0;
}
